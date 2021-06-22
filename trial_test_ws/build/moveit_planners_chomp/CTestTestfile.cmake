# CMake generated Testfile for 
# Source directory: /home/logan/trial_test_ws/src/moveit/moveit_planners/chomp/chomp_interface
# Build directory: /home/logan/trial_test_ws/build/moveit_planners_chomp
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_moveit_planners_chomp_rostest_test_chomp_moveit.test "/home/logan/trial_test_ws/build/moveit_planners_chomp/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/logan/trial_test_ws/build/moveit_planners_chomp/test_results/moveit_planners_chomp/rostest-test_chomp_moveit.xml" "--return-code" "/opt/ros/kinetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/logan/trial_test_ws/src/moveit/moveit_planners/chomp/chomp_interface --package=moveit_planners_chomp --results-filename test_chomp_moveit.xml --results-base-dir \"/home/logan/trial_test_ws/build/moveit_planners_chomp/test_results\" /home/logan/trial_test_ws/src/moveit/moveit_planners/chomp/chomp_interface/test/chomp_moveit.test ")
subdirs(gtest)
