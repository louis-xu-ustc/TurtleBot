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
include kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/depend.make

# Include the progress variables for this target.
include kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/progress.make

# Include the compile flags for this target's objects.
include kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/flags.make

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o: kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/flags.make
kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o: /home/turtlebot/ese_team_project/kobuki/src/kobuki_core/kobuki_driver/src/test/sigslots.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turtlebot/ese_team_project/kobuki/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o"
	cd /home/turtlebot/ese_team_project/kobuki/build/kobuki_core/kobuki_driver/src/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o -c /home/turtlebot/ese_team_project/kobuki/src/kobuki_core/kobuki_driver/src/test/sigslots.cpp

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.i"
	cd /home/turtlebot/ese_team_project/kobuki/build/kobuki_core/kobuki_driver/src/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turtlebot/ese_team_project/kobuki/src/kobuki_core/kobuki_driver/src/test/sigslots.cpp > CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.i

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.s"
	cd /home/turtlebot/ese_team_project/kobuki/build/kobuki_core/kobuki_driver/src/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turtlebot/ese_team_project/kobuki/src/kobuki_core/kobuki_driver/src/test/sigslots.cpp -o CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.s

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o.requires:
.PHONY : kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o.requires

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o.provides: kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o.requires
	$(MAKE) -f kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/build.make kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o.provides.build
.PHONY : kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o.provides

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o.provides.build: kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o

# Object files for target demo_kobuki_sigslots
demo_kobuki_sigslots_OBJECTS = \
"CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o"

# External object files for target demo_kobuki_sigslots
demo_kobuki_sigslots_EXTERNAL_OBJECTS =

/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/build.make
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /home/turtlebot/ese_team_project/kobuki/devel/lib/libkobuki.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_mobile_robot.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_devices.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_geometry.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_linear_algebra.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_formatters.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_threads.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /usr/lib/x86_64-linux-gnu/libpthread.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_type_traits.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_time.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_exceptions.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_errors.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /opt/ros/indigo/lib/libecl_time_lite.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: /usr/lib/x86_64-linux-gnu/librt.so
/home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots: kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots"
	cd /home/turtlebot/ese_team_project/kobuki/build/kobuki_core/kobuki_driver/src/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/demo_kobuki_sigslots.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/build: /home/turtlebot/ese_team_project/kobuki/devel/lib/kobuki_driver/demo_kobuki_sigslots
.PHONY : kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/build

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/requires: kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/sigslots.cpp.o.requires
.PHONY : kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/requires

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/clean:
	cd /home/turtlebot/ese_team_project/kobuki/build/kobuki_core/kobuki_driver/src/test && $(CMAKE_COMMAND) -P CMakeFiles/demo_kobuki_sigslots.dir/cmake_clean.cmake
.PHONY : kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/clean

kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/depend:
	cd /home/turtlebot/ese_team_project/kobuki/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/turtlebot/ese_team_project/kobuki/src /home/turtlebot/ese_team_project/kobuki/src/kobuki_core/kobuki_driver/src/test /home/turtlebot/ese_team_project/kobuki/build /home/turtlebot/ese_team_project/kobuki/build/kobuki_core/kobuki_driver/src/test /home/turtlebot/ese_team_project/kobuki/build/kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : kobuki_core/kobuki_driver/src/test/CMakeFiles/demo_kobuki_sigslots.dir/depend

