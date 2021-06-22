# CMake generated Testfile for 
# Source directory: /home/logan/trial_test_ws/src/srdfdom
# Build directory: /home/logan/trial_test_ws/build/srdfdom
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_srdfdom_rostest_test_srdf_parser.test "/home/logan/trial_test_ws/build/srdfdom/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/kinetic/share/catkin/cmake/test/run_tests.py" "/home/logan/trial_test_ws/build/srdfdom/test_results/srdfdom/rostest-test_srdf_parser.xml" "--return-code" "/opt/ros/kinetic/share/rostest/cmake/../../../bin/rostest --pkgdir=/home/logan/trial_test_ws/src/srdfdom --package=srdfdom --results-filename test_srdf_parser.xml --results-base-dir \"/home/logan/trial_test_ws/build/srdfdom/test_results\" /home/logan/trial_test_ws/src/srdfdom/test/srdf_parser.test ")
subdirs(gtest)
