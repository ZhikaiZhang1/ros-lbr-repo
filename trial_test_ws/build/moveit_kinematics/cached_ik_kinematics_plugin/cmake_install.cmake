# Install script for directory: /home/logan/trial_test_ws/src/moveit/moveit_kinematics/cached_ik_kinematics_plugin

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/logan/trial_test_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_cached_ik_kinematics_base.so.0.9.18"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_cached_ik_kinematics_base.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/logan/trial_test_ws/devel/.private/moveit_kinematics/lib/libmoveit_cached_ik_kinematics_base.so.0.9.18"
    "/home/logan/trial_test_ws/devel/.private/moveit_kinematics/lib/libmoveit_cached_ik_kinematics_base.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_cached_ik_kinematics_base.so.0.9.18"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_cached_ik_kinematics_base.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/logan/trial_test_ws/devel/.private/moveit_core/lib:/home/logan/trial_test_ws/devel/.private/geometric_shapes/lib:/home/logan/trial_test_ws/devel/.private/srdfdom/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning/lib:/home/logan/trial_test_ws/devel/.private/chomp_motion_planner/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_perception/lib:/opt/ros/kinetic/lib:/usr/local/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_cached_ik_kinematics_plugin.so.0.9.18"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_cached_ik_kinematics_plugin.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/logan/trial_test_ws/devel/.private/moveit_kinematics/lib/libmoveit_cached_ik_kinematics_plugin.so.0.9.18"
    "/home/logan/trial_test_ws/devel/.private/moveit_kinematics/lib/libmoveit_cached_ik_kinematics_plugin.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_cached_ik_kinematics_plugin.so.0.9.18"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_cached_ik_kinematics_plugin.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/logan/trial_test_ws/devel/.private/moveit_core/lib:/home/logan/trial_test_ws/devel/.private/geometric_shapes/lib:/home/logan/trial_test_ws/devel/.private/srdfdom/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning/lib:/home/logan/trial_test_ws/devel/.private/chomp_motion_planner/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_perception/lib:/home/logan/trial_test_ws/devel/.private/moveit_kinematics/lib:/opt/ros/kinetic/lib:/usr/local/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/measure_ik_call_cost" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/measure_ik_call_cost")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/measure_ik_call_cost"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics" TYPE EXECUTABLE FILES "/home/logan/trial_test_ws/devel/.private/moveit_kinematics/lib/moveit_kinematics/measure_ik_call_cost")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/measure_ik_call_cost" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/measure_ik_call_cost")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/measure_ik_call_cost"
         OLD_RPATH "/home/logan/trial_test_ws/devel/.private/moveit_core/lib:/home/logan/trial_test_ws/devel/.private/geometric_shapes/lib:/home/logan/trial_test_ws/devel/.private/srdfdom/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning/lib:/home/logan/trial_test_ws/devel/.private/chomp_motion_planner/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_perception/lib:/opt/ros/kinetic/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_kinematics/measure_ik_call_cost")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/logan/trial_test_ws/src/moveit/moveit_kinematics/cached_ik_kinematics_plugin/include/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_kinematics" TYPE DIRECTORY FILES "/home/logan/trial_test_ws/src/moveit/moveit_kinematics/cached_ik_kinematics_plugin/launch")
endif()

