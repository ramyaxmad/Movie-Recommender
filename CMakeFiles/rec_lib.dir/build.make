# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082

# Include any dependencies generated for this target.
include CMakeFiles/rec_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/rec_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/rec_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rec_lib.dir/flags.make

CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o: CMakeFiles/rec_lib.dir/flags.make
CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o: src/FrontUI.cpp
CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o: CMakeFiles/rec_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o -MF CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o.d -o CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o -c /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/src/FrontUI.cpp

CMakeFiles/rec_lib.dir/src/FrontUI.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rec_lib.dir/src/FrontUI.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/src/FrontUI.cpp > CMakeFiles/rec_lib.dir/src/FrontUI.cpp.i

CMakeFiles/rec_lib.dir/src/FrontUI.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rec_lib.dir/src/FrontUI.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/src/FrontUI.cpp -o CMakeFiles/rec_lib.dir/src/FrontUI.cpp.s

# Object files for target rec_lib
rec_lib_OBJECTS = \
"CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o"

# External object files for target rec_lib
rec_lib_EXTERNAL_OBJECTS =

lib/librec_lib.a: CMakeFiles/rec_lib.dir/src/FrontUI.cpp.o
lib/librec_lib.a: CMakeFiles/rec_lib.dir/build.make
lib/librec_lib.a: CMakeFiles/rec_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library lib/librec_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/rec_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rec_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rec_lib.dir/build: lib/librec_lib.a
.PHONY : CMakeFiles/rec_lib.dir/build

CMakeFiles/rec_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rec_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rec_lib.dir/clean

CMakeFiles/rec_lib.dir/depend:
	cd /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/CMakeFiles/rec_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rec_lib.dir/depend

