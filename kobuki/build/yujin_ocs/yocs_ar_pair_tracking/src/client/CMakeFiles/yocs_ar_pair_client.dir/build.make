# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/turtlebot/ese_team_project/kobuki/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/turtlebot/ese_team_project/kobuki/build

# Include any dependencies generated for this target.
include yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/depend.make

# Include the progress variables for this target.
include yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/progress.make

# Include the compile flags for this target's objects.
include yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/flags.make

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o: yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/flags.make
yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o: /home/turtlebot/ese_team_project/kobuki/src/yujin_ocs/yocs_ar_pair_tracking/src/client/client.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turtlebot/ese_team_project/kobuki/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o"
	cd /home/turtlebot/ese_team_project/kobuki/build/yujin_ocs/yocs_ar_pair_tracking/src/client && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o -c /home/turtlebot/ese_team_project/kobuki/src/yujin_ocs/yocs_ar_pair_tracking/src/client/client.cpp

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yocs_ar_pair_client.dir/client.cpp.i"
	cd /home/turtlebot/ese_team_project/kobuki/build/yujin_ocs/yocs_ar_pair_tracking/src/client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turtlebot/ese_team_project/kobuki/src/yujin_ocs/yocs_ar_pair_tracking/src/client/client.cpp > CMakeFiles/yocs_ar_pair_client.dir/client.cpp.i

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yocs_ar_pair_client.dir/client.cpp.s"
	cd /home/turtlebot/ese_team_project/kobuki/build/yujin_ocs/yocs_ar_pair_tracking/src/client && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turtlebot/ese_team_project/kobuki/src/yujin_ocs/yocs_ar_pair_tracking/src/client/client.cpp -o CMakeFiles/yocs_ar_pair_client.dir/client.cpp.s

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o.requires:
.PHONY : yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o.requires

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o.provides: yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o.requires
	$(MAKE) -f yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/build.make yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o.provides.build
.PHONY : yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o.provides

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o.provides.build: yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o

# Object files for target yocs_ar_pair_client
yocs_ar_pair_client_OBJECTS = \
"CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o"

# External object files for target yocs_ar_pair_client
yocs_ar_pair_client_EXTERNAL_OBJECTS =

/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/build.make
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /home/turtlebot/ese_team_project/kobuki/devel/lib/libyocs_ar_marker_tracking.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libyaml-cpp.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /home/turtlebot/ese_team_project/kobuki/devel/lib/libyocs_math_toolkit.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libtf.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libtf2_ros.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libactionlib.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libmessage_filters.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libtf2.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libroscpp.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/librosconsole.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/liblog4cxx.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/librostime.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libcpp_common.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libtf.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libtf2_ros.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libactionlib.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libmessage_filters.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libtf2.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libroscpp.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_signals.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/librosconsole.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/librosconsole_log4cxx.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/librosconsole_backend_interface.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/liblog4cxx.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_regex.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libxmlrpcpp.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libroscpp_serialization.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/librostime.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_date_time.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /opt/ros/indigo/lib/libcpp_common.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_system.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libboost_thread.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: /usr/lib/x86_64-linux-gnu/libconsole_bridge.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client: yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client"
	cd /home/turtlebot/ese_team_project/kobuki/build/yujin_ocs/yocs_ar_pair_tracking/src/client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/yocs_ar_pair_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/build: /home/turtlebot/ese_team_project/kobuki/devel/lib/yocs_ar_pair_tracking/yocs_ar_pair_client
.PHONY : yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/build

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/requires: yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/client.cpp.o.requires
.PHONY : yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/requires

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/clean:
	cd /home/turtlebot/ese_team_project/kobuki/build/yujin_ocs/yocs_ar_pair_tracking/src/client && $(CMAKE_COMMAND) -P CMakeFiles/yocs_ar_pair_client.dir/cmake_clean.cmake
.PHONY : yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/clean

yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/depend:
	cd /home/turtlebot/ese_team_project/kobuki/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/turtlebot/ese_team_project/kobuki/src /home/turtlebot/ese_team_project/kobuki/src/yujin_ocs/yocs_ar_pair_tracking/src/client /home/turtlebot/ese_team_project/kobuki/build /home/turtlebot/ese_team_project/kobuki/build/yujin_ocs/yocs_ar_pair_tracking/src/client /home/turtlebot/ese_team_project/kobuki/build/yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : yujin_ocs/yocs_ar_pair_tracking/src/client/CMakeFiles/yocs_ar_pair_client.dir/depend

