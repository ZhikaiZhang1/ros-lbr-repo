# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3".split(';') if "${prefix}/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "moveit_ros_planning_interface;moveit_ros_robot_interaction;object_recognition_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_rviz_plugin_render_tools;-lmoveit_robot_state_rviz_plugin_core;-lmoveit_motion_planning_rviz_plugin_core;-lmoveit_trajectory_rviz_plugin_core;-lmoveit_planning_scene_rviz_plugin_core".split(';') if "-lmoveit_rviz_plugin_render_tools;-lmoveit_robot_state_rviz_plugin_core;-lmoveit_motion_planning_rviz_plugin_core;-lmoveit_trajectory_rviz_plugin_core;-lmoveit_planning_scene_rviz_plugin_core" != "" else []
PROJECT_NAME = "moveit_ros_visualization"
PROJECT_SPACE_DIR = "/home/logan/trial_test_ws/install"
PROJECT_VERSION = "0.9.18"
