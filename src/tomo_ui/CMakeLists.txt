cmake_minimum_required(VERSION 3.8)
project(tomo_ui)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if(NOT CMAKE_CONFIGURATION_TYPES AND NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE RelWithDebInfo)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(#-W -Wall -Wextra
    # -Wwrite-strings
	# -Wunreachable-code
	# -Wpointer-arith
    # -Winit-self
	# -Wredundant-decls
    # -Wno-unused-parameter
	# -Wno-unused-function
	# -Wunused-variable
	# -Wparentheses
	# -Wpedantic
	# -Wnon-virtual-dtor
	# -Woverloaded-virtual
	)
endif()

find_package(ament_cmake REQUIRED)
find_package(depthai CONFIG REQUIRED)
find_package(OpenCV REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rclcpp_components REQUIRED)


find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(diagnostic_msgs REQUIRED)
# find_package(tomo_action REQUIRED)
# find_package(tomo_msgs REQUIRED)
# find_package(tomo_comm REQUIRED)
# find_package(tomo_camera REQUIRED)
find_package(tomo_rviz REQUIRED)
find_package(rviz2 REQUIRED)
find_package(rviz_common REQUIRED)
find_package(rviz_rendering REQUIRED)

find_package(Boost REQUIRED system filesystem date_time thread program_options regex timer chrono)


find_package(yaml-cpp REQUIRED)
find_package(yaml_cpp_vendor REQUIRED)

find_package(rmw_implementation REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Quick REQUIRED)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Quick Gui Widgets Concurrent Network OpenGL)

## Qt5 boilerplate options from http://doc.qt.io/qt-5/cmake-manual.html
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC_COMPILER_PREDEFINES OFF)
# add_definitions(-DQT_NO_KEYWORDS)

set(QT_LIBRARIES Qt5::Widgets Qt5::Core Qt5::Quick Qt5::Concurrent Qt5::OpenGL)

set(THIS_PACKAGE_INCLUDE_DEPENDS
  	ament_cmake
	rclcpp
	rclcpp_action

	Boost
  	std_msgs
  	geometry_msgs
  	sensor_msgs
	diagnostic_msgs

  	OpenCV

	# tomo_comm
	# tomo_action
	# tomo_msgs
	# tomo_camera
	tomo_rviz
  rviz2
  rviz_common
  rviz_rendering

    rclcpp_components
	yaml_cpp_vendor

	rmw_implementation
)

set(THIS_PACKAGE_INCLUDE_DIRS
  	${OpenCV_INCLUDE_DIRS}
  	${ament_cmake_INCLUDE_DIRS}
	${YAML_CPP_INCLUDE_DIR}

	# ${tomo_comm_INCLUDE_DIRS}
	# ${tomo_action_INCLUDE_DIRS}
	# ${tomo_camera_INCLUDE_DIRS}
	${tomo_rviz_INCLUDE_DIRS}
  ${rviz2_INCLUDE_DIRS}
  ${rviz_common_INCLUDE_DIRS}
  ${rviz_rendering_INCLUDE_DIRS}

	${Qt5Core_INCLUDE_DIRS}
	${Qt5Quick_INCLUDE_DIRS}

)
include_directories(
	include
  	${THIS_PACKAGE_INCLUDE_DIRS}
)

# set(tomo_ui_headers_to_moc
#     src/Script/Config/cfg_app.h
# )

# foreach(header "${tomo_ui_headers_to_moc}")
#   qt5_wrap_cpp(tomo_ui_moc_files "${header}")
# endforeach()

set(SOURCES_FILES ////////////////////////////////////////////////

  src/ViewModel/TomoVM/rviz_loader.h
  src/ViewModel/TomoVM/widgetitem2.cpp
	src/main.cpp
)

set(INSPECTION_SOURCES_FILES

)


add_executable(${PROJECT_NAME} 	"src/qml.qrc"
	${SOURCES_FILES}
	${INSPECTION_SOURCES_FILES}
	${tomo_ui_moc_files}
)
target_include_directories(${PROJECT_NAME} PUBLIC include ${THIS_PACKAGE_INCLUDE_DIRS}
)
ament_target_dependencies(${PROJECT_NAME} ${THIS_PACKAGE_INCLUDE_DEPENDS}
)
target_link_libraries(${PROJECT_NAME}
	-lcups
	-ldl
	-lutil
  	depthai::opencv
	Qt5::Core
	Qt5::Quick
	${QT_LIBRARIES}
)
install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib ARCHIVE DESTINATION lib RUNTIME DESTINATION bin)
install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

# add_executable(test_rviz src/_test/test_call_rviz.cpp)
# target_include_directories(test_rviz PUBLIC include ${THIS_PACKAGE_INCLUDE_DIRS})
# ament_target_dependencies(test_rviz ${THIS_PACKAGE_INCLUDE_DEPENDS})
# target_link_libraries(test_rviz depthai::opencv ${QT_LIBRARIES})

# install(TARGETS test_rviz DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

install(
  DIRECTORY launch config
  DESTINATION share/${PROJECT_NAME}
)

install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

install(
  DIRECTORY include/
  DESTINATION include
  FILES_MATCHING PATTERN "*.h"
  PATTERN ".svn" EXCLUDE
)
install(
  TARGETS ${PROJECT_NAME}
  EXPORT ${PROJECT_NAME}
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  RUNTIME DESTINATION bin
  INCLUDES DESTINATION include
)

# add_library(action_server SHARED
#     src/Script/Communicate/SimpleAction/streaming_action_server.cpp)

# target_include_directories(action_server PRIVATE
#   $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#   $<INSTALL_INTERFACE:include>)

# target_link_libraries(action_server depthai::opencv)

# target_compile_definitions(action_server
#   PRIVATE "ACTION_TUTORIALS_CPP_BUILDING_DLL")
# ament_target_dependencies(action_server
#   # "tomo_action"
#   "rclcpp"
#   "rclcpp_action"
#   "rclcpp_components"
# )
# rclcpp_components_register_node(action_server PLUGIN "tomo_streaming_server::StreamingActionServer" EXECUTABLE tomo_streaming_server)
# install(TARGETS
#   action_server
#   ARCHIVE DESTINATION lib
#   LIBRARY DESTINATION lib
#   RUNTIME DESTINATION bin)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME})
ament_export_dependencies(${THIS_PACKAGE_INCLUDE_DEPENDS})
set_target_properties(${PROJECT_NAME} PROPERTIES INSTALL_RPATH_USE_LINK_PATH TRUE)

ament_package()
