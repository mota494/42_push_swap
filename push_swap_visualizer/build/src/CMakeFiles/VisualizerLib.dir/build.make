# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mloureir/Documents/42_push_swap/push_swap_visualizer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build

# Include any dependencies generated for this target.
include src/CMakeFiles/VisualizerLib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/VisualizerLib.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/VisualizerLib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/VisualizerLib.dir/flags.make

src/CMakeFiles/VisualizerLib.dir/utils.cpp.o: src/CMakeFiles/VisualizerLib.dir/flags.make
src/CMakeFiles/VisualizerLib.dir/utils.cpp.o: ../src/utils.cpp
src/CMakeFiles/VisualizerLib.dir/utils.cpp.o: src/CMakeFiles/VisualizerLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/VisualizerLib.dir/utils.cpp.o"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/VisualizerLib.dir/utils.cpp.o -MF CMakeFiles/VisualizerLib.dir/utils.cpp.o.d -o CMakeFiles/VisualizerLib.dir/utils.cpp.o -c /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/utils.cpp

src/CMakeFiles/VisualizerLib.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VisualizerLib.dir/utils.cpp.i"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/utils.cpp > CMakeFiles/VisualizerLib.dir/utils.cpp.i

src/CMakeFiles/VisualizerLib.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VisualizerLib.dir/utils.cpp.s"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/utils.cpp -o CMakeFiles/VisualizerLib.dir/utils.cpp.s

src/CMakeFiles/VisualizerLib.dir/queues.cpp.o: src/CMakeFiles/VisualizerLib.dir/flags.make
src/CMakeFiles/VisualizerLib.dir/queues.cpp.o: ../src/queues.cpp
src/CMakeFiles/VisualizerLib.dir/queues.cpp.o: src/CMakeFiles/VisualizerLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/VisualizerLib.dir/queues.cpp.o"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/VisualizerLib.dir/queues.cpp.o -MF CMakeFiles/VisualizerLib.dir/queues.cpp.o.d -o CMakeFiles/VisualizerLib.dir/queues.cpp.o -c /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/queues.cpp

src/CMakeFiles/VisualizerLib.dir/queues.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VisualizerLib.dir/queues.cpp.i"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/queues.cpp > CMakeFiles/VisualizerLib.dir/queues.cpp.i

src/CMakeFiles/VisualizerLib.dir/queues.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VisualizerLib.dir/queues.cpp.s"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/queues.cpp -o CMakeFiles/VisualizerLib.dir/queues.cpp.s

src/CMakeFiles/VisualizerLib.dir/pushswap.cpp.o: src/CMakeFiles/VisualizerLib.dir/flags.make
src/CMakeFiles/VisualizerLib.dir/pushswap.cpp.o: ../src/pushswap.cpp
src/CMakeFiles/VisualizerLib.dir/pushswap.cpp.o: src/CMakeFiles/VisualizerLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/VisualizerLib.dir/pushswap.cpp.o"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/VisualizerLib.dir/pushswap.cpp.o -MF CMakeFiles/VisualizerLib.dir/pushswap.cpp.o.d -o CMakeFiles/VisualizerLib.dir/pushswap.cpp.o -c /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/pushswap.cpp

src/CMakeFiles/VisualizerLib.dir/pushswap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VisualizerLib.dir/pushswap.cpp.i"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/pushswap.cpp > CMakeFiles/VisualizerLib.dir/pushswap.cpp.i

src/CMakeFiles/VisualizerLib.dir/pushswap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VisualizerLib.dir/pushswap.cpp.s"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/pushswap.cpp -o CMakeFiles/VisualizerLib.dir/pushswap.cpp.s

src/CMakeFiles/VisualizerLib.dir/gui.cpp.o: src/CMakeFiles/VisualizerLib.dir/flags.make
src/CMakeFiles/VisualizerLib.dir/gui.cpp.o: ../src/gui.cpp
src/CMakeFiles/VisualizerLib.dir/gui.cpp.o: src/CMakeFiles/VisualizerLib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/VisualizerLib.dir/gui.cpp.o"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/VisualizerLib.dir/gui.cpp.o -MF CMakeFiles/VisualizerLib.dir/gui.cpp.o.d -o CMakeFiles/VisualizerLib.dir/gui.cpp.o -c /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/gui.cpp

src/CMakeFiles/VisualizerLib.dir/gui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VisualizerLib.dir/gui.cpp.i"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/gui.cpp > CMakeFiles/VisualizerLib.dir/gui.cpp.i

src/CMakeFiles/VisualizerLib.dir/gui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VisualizerLib.dir/gui.cpp.s"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src/gui.cpp -o CMakeFiles/VisualizerLib.dir/gui.cpp.s

# Object files for target VisualizerLib
VisualizerLib_OBJECTS = \
"CMakeFiles/VisualizerLib.dir/utils.cpp.o" \
"CMakeFiles/VisualizerLib.dir/queues.cpp.o" \
"CMakeFiles/VisualizerLib.dir/pushswap.cpp.o" \
"CMakeFiles/VisualizerLib.dir/gui.cpp.o"

# External object files for target VisualizerLib
VisualizerLib_EXTERNAL_OBJECTS =

src/libVisualizerLib.a: src/CMakeFiles/VisualizerLib.dir/utils.cpp.o
src/libVisualizerLib.a: src/CMakeFiles/VisualizerLib.dir/queues.cpp.o
src/libVisualizerLib.a: src/CMakeFiles/VisualizerLib.dir/pushswap.cpp.o
src/libVisualizerLib.a: src/CMakeFiles/VisualizerLib.dir/gui.cpp.o
src/libVisualizerLib.a: src/CMakeFiles/VisualizerLib.dir/build.make
src/libVisualizerLib.a: src/CMakeFiles/VisualizerLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libVisualizerLib.a"
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/VisualizerLib.dir/cmake_clean_target.cmake
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VisualizerLib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/VisualizerLib.dir/build: src/libVisualizerLib.a
.PHONY : src/CMakeFiles/VisualizerLib.dir/build

src/CMakeFiles/VisualizerLib.dir/clean:
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src && $(CMAKE_COMMAND) -P CMakeFiles/VisualizerLib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/VisualizerLib.dir/clean

src/CMakeFiles/VisualizerLib.dir/depend:
	cd /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mloureir/Documents/42_push_swap/push_swap_visualizer /home/mloureir/Documents/42_push_swap/push_swap_visualizer/src /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src /home/mloureir/Documents/42_push_swap/push_swap_visualizer/build/src/CMakeFiles/VisualizerLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/VisualizerLib.dir/depend

