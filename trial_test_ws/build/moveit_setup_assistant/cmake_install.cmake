# Install script for directory: /home/logan/trial_test_ws/src/moveit/moveit_setup_assistant

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
  
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
        file(MAKE_DIRECTORY "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}")
      endif()
      if (NOT EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin")
        file(WRITE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/.catkin" "")
      endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/logan/trial_test_ws/install/_setup_util.py")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/logan/trial_test_ws/install" TYPE PROGRAM FILES "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/_setup_util.py")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/logan/trial_test_ws/install/env.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/logan/trial_test_ws/install" TYPE PROGRAM FILES "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/env.sh")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/logan/trial_test_ws/install/setup.bash;/home/logan/trial_test_ws/install/local_setup.bash")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/logan/trial_test_ws/install" TYPE FILE FILES
    "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/setup.bash"
    "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/local_setup.bash"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/logan/trial_test_ws/install/setup.sh;/home/logan/trial_test_ws/install/local_setup.sh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/logan/trial_test_ws/install" TYPE FILE FILES
    "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/setup.sh"
    "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/local_setup.sh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/logan/trial_test_ws/install/setup.zsh;/home/logan/trial_test_ws/install/local_setup.zsh")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/logan/trial_test_ws/install" TYPE FILE FILES
    "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/setup.zsh"
    "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/local_setup.zsh"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/logan/trial_test_ws/install/.rosinstall")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/logan/trial_test_ws/install" TYPE FILE FILES "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/.rosinstall")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/moveit_setup_assistant.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_assistant/cmake" TYPE FILE FILES
    "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/moveit_setup_assistantConfig.cmake"
    "/home/logan/trial_test_ws/build/moveit_setup_assistant/catkin_generated/installspace/moveit_setup_assistantConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_assistant" TYPE FILE FILES "/home/logan/trial_test_ws/src/moveit/moveit_setup_assistant/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant" TYPE EXECUTABLE FILES "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib/moveit_setup_assistant/moveit_setup_assistant")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant"
         OLD_RPATH "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_visualization/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning_interface/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_warehouse/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_manipulation/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_move_group/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_robot_interaction/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning/lib:/home/logan/trial_test_ws/devel/.private/chomp_motion_planner/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_perception/lib:/home/logan/trial_test_ws/devel/.private/moveit_core/lib:/home/logan/trial_test_ws/devel/.private/geometric_shapes/lib:/home/logan/trial_test_ws/devel/.private/srdfdom/lib:/opt/ros/kinetic/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/moveit_setup_assistant")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_assistant_widgets.so.0.9.18"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_assistant_widgets.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib/libmoveit_setup_assistant_widgets.so.0.9.18"
    "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib/libmoveit_setup_assistant_widgets.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_assistant_widgets.so.0.9.18"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_assistant_widgets.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_visualization/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning_interface/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_warehouse/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_manipulation/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_move_group/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_robot_interaction/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning/lib:/home/logan/trial_test_ws/devel/.private/chomp_motion_planner/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_perception/lib:/home/logan/trial_test_ws/devel/.private/moveit_core/lib:/home/logan/trial_test_ws/devel/.private/geometric_shapes/lib:/home/logan/trial_test_ws/devel/.private/srdfdom/lib:/opt/ros/kinetic/lib:/usr/local/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_assistant_tools.so.0.9.18"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_assistant_tools.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib/libmoveit_setup_assistant_tools.so.0.9.18"
    "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib/libmoveit_setup_assistant_tools.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_assistant_tools.so.0.9.18"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libmoveit_setup_assistant_tools.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/logan/trial_test_ws/devel/.private/moveit_ros_visualization/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning_interface/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_warehouse/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_manipulation/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_move_group/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_robot_interaction/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning/lib:/home/logan/trial_test_ws/devel/.private/chomp_motion_planner/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_perception/lib:/home/logan/trial_test_ws/devel/.private/moveit_core/lib:/home/logan/trial_test_ws/devel/.private/geometric_shapes/lib:/home/logan/trial_test_ws/devel/.private/srdfdom/lib:/opt/ros/kinetic/lib:/usr/local/lib:"
           NEW_RPATH "")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/collisions_updater" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/collisions_updater")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/collisions_updater"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant" TYPE EXECUTABLE FILES "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib/moveit_setup_assistant/collisions_updater")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/collisions_updater" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/collisions_updater")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/collisions_updater"
         OLD_RPATH "/home/logan/trial_test_ws/devel/.private/moveit_setup_assistant/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_visualization/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning_interface/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_warehouse/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_manipulation/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_move_group/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_robot_interaction/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_planning/lib:/home/logan/trial_test_ws/devel/.private/chomp_motion_planner/lib:/home/logan/trial_test_ws/devel/.private/moveit_ros_perception/lib:/home/logan/trial_test_ws/devel/.private/moveit_core/lib:/home/logan/trial_test_ws/devel/.private/geometric_shapes/lib:/home/logan/trial_test_ws/devel/.private/srdfdom/lib:/opt/ros/kinetic/lib:/usr/local/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/moveit_setup_assistant/collisions_updater")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/logan/trial_test_ws/src/moveit/moveit_setup_assistant/include/")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_assistant" TYPE DIRECTORY FILES "/home/logan/trial_test_ws/src/moveit/moveit_setup_assistant/launch")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_assistant" TYPE DIRECTORY FILES "/home/logan/trial_test_ws/src/moveit/moveit_setup_assistant/resources")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/moveit_setup_assistant" TYPE DIRECTORY FILES "/home/logan/trial_test_ws/src/moveit/moveit_setup_assistant/templates")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/logan/trial_test_ws/build/moveit_setup_assistant/gtest/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/logan/trial_test_ws/build/moveit_setup_assistant/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")