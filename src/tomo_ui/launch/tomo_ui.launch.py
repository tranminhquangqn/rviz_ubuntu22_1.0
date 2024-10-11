import os
import yaml
import sys
import yaml
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory


def loadYaml(package_name, file_path):
    packagePath = get_package_share_directory(package_name)
    absoluteFilePath = os.path.join(packagePath, file_path)
    print(absoluteFilePath)

    try:
        with open(absoluteFilePath, "r") as file:
            return yaml.safe_load(file)
    except EnvironmentError:  # parent of IOError, OSError *and* WindowsError where available
        print('ERROR in reading yaml file ', file_path)
        return None


def generate_launch_description():

    # Command-line arguments
    descArg = ""
    for arg in sys.argv:
        if arg.startswith("desc:="):
            descArg = str(arg.split(":=")[1])
    if descArg == "":
        print("ERROR: Robot description ('desc' argument) set default spc ********")
        sys.exit()

    robotDescKinematics = {"robot_description_kinematics": loadYaml('tomo_ui', 'config/kinematics.yaml')}

    return LaunchDescription(
        [
            Node(
                package="tomo_ui",
                executable="tomo_ui",
                name="tomo_ui",
                output="log",
                # arguments=["-d", os.path.expanduser("~/tomo_config/tomo" + descArg + "_moveit.rviz")],
                # parameters=[
                #         robotDescKinematics
                # ],
            )
        ]
    )
