from launch import LaunchDescription
from launch_ros.actions import Node


import os
import sys
import yaml
import xacro
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def loadFile(package_name, file_path):
    packagePath = get_package_share_directory(package_name)
    absoluteFilePath = os.path.join(packagePath, file_path)

    try:
        with open(absoluteFilePath, "r") as file:
            return file.read()
    except EnvironmentError:  # parent of IOError, OSError *and* WindowsError where available
        return None


def loadYaml(package_name, file_path):
    packagePath = get_package_share_directory(package_name)
    absoluteFilePath = os.path.join(packagePath, file_path)

    try:
        with open(absoluteFilePath, "r") as file:
            return yaml.safe_load(file)
    except EnvironmentError:  # parent of IOError, OSError *and* WindowsError where available
        return None


def generate_launch_description():

    # Init custom argument

    descArg = ""
    for arg in sys.argv:
        if arg.startswith("desc:="):
            descArg = str(arg.split(":=")[1])
    if descArg == "":
        descArg = "spc"
        print("***** Robot description ('desc' argument) set default spc *****")

    # planning_context
    robotDescConfig = xacro.process_file(
        os.path.join(
            get_package_share_directory("tomo" + descArg + "_moveit_config"),
            "config",
            "tomo_config.urdf.xacro",
        ),
        mappings={'desc': descArg}
    )
    robotDesc = {"robot_description": robotDescConfig.toxml()}
    robotDescSemanticConfig = loadFile("tomo" + descArg + "_moveit_config", "config/tomo" + descArg + ".srdf")
    robotDescSemantic = {"robot_description_semantic": robotDescSemanticConfig}

    kinematicYaml = loadYaml("tomo" + descArg + "_moveit_config", "config/kinematics.yaml")
    robotDescKinematics = {"robot_description_kinematics": kinematicYaml}

    jointLimitsYaml = loadYaml("tomo" + descArg + "_moveit_config", "config/joint_limits.yaml")
    cartesianLimitsYaml = loadYaml("tomo" + descArg + "_moveit_config", "config/cartesian_limits.yaml")

    robotDescPlanning = {
        "robot_description_planning": {
            **jointLimitsYaml,
            # **cartesianLimitsYaml,
        }
    }

    # Planning Functionality
    planningPipelinesConfig = {
        "default_planning_pipeline": "pilz",
        "planning_pipelines": ["pilz", "ompl"],
        "pilz": {
            "planning_plugin": "pilz_industrial_motion_planner/CommandPlanner",
            "request_adapters": "",
            "start_state_max_bounds_error": 0.1,
        },
        "ompl": {
            "planning_plugin": "ompl_interface/OMPLPlanner",
            "request_adapters": """default_planner_request_adapters/AddTimeOptimalParameterization default_planner_request_adapters/FixWorkspaceBounds default_planner_request_adapters/FixStartStateBounds default_planner_request_adapters/FixStartStateCollision default_planner_request_adapters/FixStartStatePathConstraints""",
            "start_state_max_bounds_error": 0.1,
        },
    }
    omplPlanningYaml = loadYaml("tomo" + descArg + "_moveit_config", "config/ompl_planning.yaml")
    planningPipelinesConfig["ompl"].update(omplPlanningYaml)

    # RViz
    rvizBase = os.path.join(get_package_share_directory("tomo" + descArg + "_moveit_config"), "launch")
    rvizFullConfig = os.path.join(rvizBase, "moveit.rviz")

    return LaunchDescription(
        [
            Node(
                package="tomo_ui",
                executable="test_rviz",
                name="test_call_rviz",
                output="log",
                arguments=["-d", rvizFullConfig],
                parameters=[
                    robotDesc,
                    robotDescSemantic,
                    robotDescKinematics,
                    robotDescPlanning,
                    planningPipelinesConfig,
                ],
            )
        ]
    )
