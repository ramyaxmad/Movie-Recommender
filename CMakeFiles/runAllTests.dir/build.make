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
include CMakeFiles/runAllTests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/runAllTests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/runAllTests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/runAllTests.dir/flags.make

CMakeFiles/runAllTests.dir/tests/test.cpp.o: CMakeFiles/runAllTests.dir/flags.make
CMakeFiles/runAllTests.dir/tests/test.cpp.o: tests/test.cpp
CMakeFiles/runAllTests.dir/tests/test.cpp.o: CMakeFiles/runAllTests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/runAllTests.dir/tests/test.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/runAllTests.dir/tests/test.cpp.o -MF CMakeFiles/runAllTests.dir/tests/test.cpp.o.d -o CMakeFiles/runAllTests.dir/tests/test.cpp.o -c /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/tests/test.cpp

CMakeFiles/runAllTests.dir/tests/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runAllTests.dir/tests/test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/tests/test.cpp > CMakeFiles/runAllTests.dir/tests/test.cpp.i

CMakeFiles/runAllTests.dir/tests/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runAllTests.dir/tests/test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/tests/test.cpp -o CMakeFiles/runAllTests.dir/tests/test.cpp.s

# Object files for target runAllTests
runAllTests_OBJECTS = \
"CMakeFiles/runAllTests.dir/tests/test.cpp.o"

# External object files for target runAllTests
runAllTests_EXTERNAL_OBJECTS =

runAllTests: CMakeFiles/runAllTests.dir/tests/test.cpp.o
runAllTests: CMakeFiles/runAllTests.dir/build.make
runAllTests: libmovie_lib.a
runAllTests: lib/libgtest.a
runAllTests: CMakeFiles/runAllTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runAllTests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runAllTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/runAllTests.dir/build: runAllTests
.PHONY : CMakeFiles/runAllTests.dir/build

CMakeFiles/runAllTests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/runAllTests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/runAllTests.dir/clean

CMakeFiles/runAllTests.dir/depend:
	cd /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082 /home/csmajs/rmadu002/final-project-rmadu002-ashar165-wchoi053-bpham082/CMakeFiles/runAllTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/runAllTests.dir/depend

