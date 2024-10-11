cmake_minimum_required(VERSION 3.8)
project(tomo_rviz)

# Default to C++17
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 17)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-W -Wall -Wextra
                      -Wwrite-strings -Wunreachable-code -Wpointer-arith
                      -Winit-self -Wredundant-decls
                      -Wno-unused-parameter -Wno-unused-function)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rviz_common REQUIRED)
find_package(rviz_rendering REQUIRED)
find_package(OpenCV REQUIRED)
# find_package(tomo_comm REQUIRED)
# find_package(tomo_camera REQUIRED)
find_package(depthai CONFIG REQUIRED)

# find_package(tomo_ui REQUIRED)

find_package(Qt5 REQUIRED COMPONENTS Core Widgets Quick Gui Widgets Concurrent Network OpenGL)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

set(CMAKE_AUTOMOC_COMPILER_PREDEFINES OFF)
# add_definitions(-DQT_NO_KEYWORDS)

set(QT_LIBRARIES Qt5::Widgets Qt5::Core Qt5::Quick Qt5::Concurrent Qt5::OpenGL)

set(tomo_rviz_headers_to_moc
  include/tomo_rviz/visualizer_app_mod.hpp
  include/tomo_rviz/visualization_frame_mod.hpp
  # include/tomo_rviz/panel_factory.hpp
  # include/tomo_rviz/panel_dock_widget.hpp
  # include/tomo_rviz/render_panel.hpp
  # include/tomo_rviz/ros_integration/ros_client_abstraction_iface.hpp
  # include/tomo_rviz/ros_integration/ros_client_abstraction.hpp
  # include/tomo_rviz/ros_integration/ros_node_abstraction_iface.hpp
  # include/tomo_rviz/ros_integration/ros_node_abstraction.hpp
  # src/rviz_header_file/add_display_dialog.hpp
  # src/rviz_header_file/display_factory.hpp

  src/rviz_header/env_config.hpp
  src/rviz_header/failed_panel.hpp
  src/rviz_header/loading_dialog.hpp
  src/rviz_header/new_object_dialog.hpp
  src/rviz_header/panel_factory.hpp
  src/rviz_header/screenshot_dialog.hpp
  src/rviz_header/splash_screen.hpp
  src/rviz_header/widget_geometry_change_detector.hpp
  src/rviz_header/displays_panel.hpp
  src/rviz_header/help_panel.hpp
  src/rviz_header/selection_panel.hpp
  src/rviz_header/time_panel.hpp
  src/rviz_header/tool_properties_panel.hpp
  src/rviz_header/views_panel.hpp
)

foreach(header "${tomo_rviz_headers_to_moc}")
  qt5_wrap_cpp(tomo_rviz_moc_files "${header}")
endforeach()

set(tomo_rviz_source_files
  # src/ros_integration/ros_node_abstraction.cpp
  # src/ros_integration/ros_client_abstraction.cpp
  src/visualizer_app_mod.cpp
  src/visualization_frame_mod.cpp
  # src/panel_factory.cpp
  # src/panel_dock_widget.cpp
  # src/displays_panel.cpp
  # src/render_panel.cpp
)

set(THIS_PACKAGE_INCLUDE_DEPENDS
	ament_cmake
	rclcpp
  	std_msgs
	rviz_common
	rviz_rendering
	OpenCV
	# tomo_comm
	# tomo_camera
)
set(THIS_PACKAGE_INCLUDE_DIRS
  	${ament_cmake_INCLUDE_DIRS}
	# ${tomo_comm_INCLUDE_DIRS}
	${rviz_rendering_INCLUDE_DIRS}
	${OpenCV_INCLUDE_DIRS}
	${rviz_common_INCLUDE_DIRS}
	# ${tomo_camera_INCLUDE_DIRS}

)

include_directories(include ${THIS_PACKAGE_INCLUDE_DIRS})

add_library(${PROJECT_NAME} ${tomo_rviz_moc_files} ${tomo_rviz_source_files})
ament_target_dependencies(${PROJECT_NAME}  ${THIS_PACKAGE_INCLUDE_DEPENDS})
target_link_libraries(${PROJECT_NAME} rviz_common::rviz_common depthai::opencv ${QT_LIBRARIES})


install(TARGETS ${PROJECT_NAME} LIBRARY DESTINATION lib ARCHIVE DESTINATION lib RUNTIME DESTINATION bin)
install(TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME})

install(
  DIRECTORY include/
  DESTINATION include
  FILES_MATCHING PATTERN "*.hpp"
  PATTERN ".svn" EXCLUDE
)


# install(FILES moveit.rviz
#   DESTINATION share/${PROJECT_NAME}
# )

# install(
#   DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/icons"
#   DESTINATION "share/${PROJECT_NAME}"
# )

# install(
#   DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/images"
#   DESTINATION "share/${PROJECT_NAME}"
# )

# install(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ogre_media"
#   DESTINATION "share/${PROJECT_NAME}"
#   USE_SOURCE_PERMISSIONS)

#   if(BUILD_TESTING)
#   find_package(ament_lint_auto REQUIRED)
#   # the following line skips the linter which checks for copyrights
#   # uncomment the line when a copyright and license is not present in all source files
#   #set(ament_cmake_copyright_FOUND TRUE)
#   # the following line skips cpplint (only works in a git repo)
#   # uncomment the line when this package is not in a git repo
#   #set(ament_cmake_cpplint_FOUND TRUE)
#   ament_lint_auto_find_test_dependencies()
# endif()

ament_export_include_directories(include)
ament_export_libraries(${PROJECT_NAME})
ament_export_dependencies(${THIS_PACKAGE_INCLUDE_DEPENDS})
ament_package()
