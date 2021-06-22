# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include;/usr/include/eigen3;/opt/ros/kinetic/include;/usr/include".split(';') if "${prefix}/include;/usr/include/eigen3;/opt/ros/kinetic/include;/usr/include" != "" else []
PROJECT_CATKIN_DEPENDS = "eigen_stl_containers;random_numbers;shape_msgs;visualization_msgs".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lgeometric_shapes;/opt/ros/kinetic/lib/liboctomap.so;/opt/ros/kinetic/lib/liboctomath.so;/usr/lib/x86_64-linux-gnu/libconsole_bridge.so".split(';') if "-lgeometric_shapes;/opt/ros/kinetic/lib/liboctomap.so;/opt/ros/kinetic/lib/liboctomath.so;/usr/lib/x86_64-linux-gnu/libconsole_bridge.so" != "" else []
PROJECT_NAME = "geometric_shapes"
PROJECT_SPACE_DIR = "/home/logan/trial_test_ws/install"
PROJECT_VERSION = "0.5.4"
