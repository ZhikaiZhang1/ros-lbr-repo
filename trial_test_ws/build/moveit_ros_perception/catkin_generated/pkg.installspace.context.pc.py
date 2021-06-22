# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/opt/ros/kinetic/include;/usr/include/eigen3".split(';') if "${prefix}/include;/opt/ros/kinetic/include;/usr/include/eigen3" != "" else []
PROJECT_CATKIN_DEPENDS = "moveit_core;image_transport;sensor_msgs;moveit_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lmoveit_lazy_free_space_updater;-lmoveit_point_containment_filter;-lmoveit_occupancy_map_monitor;-lmoveit_pointcloud_octomap_updater_core;-lmoveit_semantic_world;/opt/ros/kinetic/lib/liboctomap.so;/opt/ros/kinetic/lib/liboctomath.so".split(';') if "-lmoveit_lazy_free_space_updater;-lmoveit_point_containment_filter;-lmoveit_occupancy_map_monitor;-lmoveit_pointcloud_octomap_updater_core;-lmoveit_semantic_world;/opt/ros/kinetic/lib/liboctomap.so;/opt/ros/kinetic/lib/liboctomath.so" != "" else []
PROJECT_NAME = "moveit_ros_perception"
PROJECT_SPACE_DIR = "/home/logan/trial_test_ws/install"
PROJECT_VERSION = "0.9.18"
