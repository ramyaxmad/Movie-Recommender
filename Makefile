# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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
CMAKE_SOURCE_DIR = /home/csmajs/bpham082/final-project-rmadu002-ashar165-wchoi053-bpham082

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/csmajs/bpham082/final-project-rmadu002-ashar165-wchoi053-bpham082

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/bin/ccmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components
.PHONY : list_install_components/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/bpham082/final-project-rmadu002-ashar165-wchoi053-bpham082/CMakeFiles /home/csmajs/bpham082/final-project-rmadu002-ashar165-wchoi053-bpham082//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/csmajs/bpham082/final-project-rmadu002-ashar165-wchoi053-bpham082/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named runMain

# Build rule for target.
runMain: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 runMain
.PHONY : runMain

# fast build rule for target.
runMain/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/build
.PHONY : runMain/fast

#=============================================================================
# Target rules for targets named runAllTests

# Build rule for target.
runAllTests: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 runAllTests
.PHONY : runAllTests

# fast build rule for target.
runAllTests/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/build
.PHONY : runAllTests/fast

#=============================================================================
# Target rules for targets named gmock_main

# Build rule for target.
gmock_main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gmock_main
.PHONY : gmock_main

# fast build rule for target.
gmock_main/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googlemock/CMakeFiles/gmock_main.dir/build.make googletest/googlemock/CMakeFiles/gmock_main.dir/build
.PHONY : gmock_main/fast

#=============================================================================
# Target rules for targets named gmock

# Build rule for target.
gmock: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gmock
.PHONY : gmock

# fast build rule for target.
gmock/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googlemock/CMakeFiles/gmock.dir/build.make googletest/googlemock/CMakeFiles/gmock.dir/build
.PHONY : gmock/fast

#=============================================================================
# Target rules for targets named gtest_main

# Build rule for target.
gtest_main: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gtest_main
.PHONY : gtest_main

# fast build rule for target.
gtest_main/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googletest/CMakeFiles/gtest_main.dir/build.make googletest/googletest/CMakeFiles/gtest_main.dir/build
.PHONY : gtest_main/fast

#=============================================================================
# Target rules for targets named gtest

# Build rule for target.
gtest: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 gtest
.PHONY : gtest

# fast build rule for target.
gtest/fast:
	$(MAKE) $(MAKESILENT) -f googletest/googletest/CMakeFiles/gtest.dir/build.make googletest/googletest/CMakeFiles/gtest.dir/build
.PHONY : gtest/fast

main.o: main.cpp.o
.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i
.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s
.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/main.cpp.s
.PHONY : main.cpp.s

src/DBFilter.o: src/DBFilter.cpp.o
.PHONY : src/DBFilter.o

# target to build an object file
src/DBFilter.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/DBFilter.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/DBFilter.cpp.o
.PHONY : src/DBFilter.cpp.o

src/DBFilter.i: src/DBFilter.cpp.i
.PHONY : src/DBFilter.i

# target to preprocess a source file
src/DBFilter.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/DBFilter.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/DBFilter.cpp.i
.PHONY : src/DBFilter.cpp.i

src/DBFilter.s: src/DBFilter.cpp.s
.PHONY : src/DBFilter.s

# target to generate assembly for a file
src/DBFilter.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/DBFilter.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/DBFilter.cpp.s
.PHONY : src/DBFilter.cpp.s

src/DBManager.o: src/DBManager.cpp.o
.PHONY : src/DBManager.o

# target to build an object file
src/DBManager.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/DBManager.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/DBManager.cpp.o
.PHONY : src/DBManager.cpp.o

src/DBManager.i: src/DBManager.cpp.i
.PHONY : src/DBManager.i

# target to preprocess a source file
src/DBManager.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/DBManager.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/DBManager.cpp.i
.PHONY : src/DBManager.cpp.i

src/DBManager.s: src/DBManager.cpp.s
.PHONY : src/DBManager.s

# target to generate assembly for a file
src/DBManager.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/DBManager.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/DBManager.cpp.s
.PHONY : src/DBManager.cpp.s

src/FrontUI.o: src/FrontUI.cpp.o
.PHONY : src/FrontUI.o

# target to build an object file
src/FrontUI.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/FrontUI.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/FrontUI.cpp.o
.PHONY : src/FrontUI.cpp.o

src/FrontUI.i: src/FrontUI.cpp.i
.PHONY : src/FrontUI.i

# target to preprocess a source file
src/FrontUI.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/FrontUI.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/FrontUI.cpp.i
.PHONY : src/FrontUI.cpp.i

src/FrontUI.s: src/FrontUI.cpp.s
.PHONY : src/FrontUI.s

# target to generate assembly for a file
src/FrontUI.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/FrontUI.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/FrontUI.cpp.s
.PHONY : src/FrontUI.cpp.s

src/SortBy.o: src/SortBy.cpp.o
.PHONY : src/SortBy.o

# target to build an object file
src/SortBy.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/SortBy.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/SortBy.cpp.o
.PHONY : src/SortBy.cpp.o

src/SortBy.i: src/SortBy.cpp.i
.PHONY : src/SortBy.i

# target to preprocess a source file
src/SortBy.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/SortBy.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/SortBy.cpp.i
.PHONY : src/SortBy.cpp.i

src/SortBy.s: src/SortBy.cpp.s
.PHONY : src/SortBy.s

# target to generate assembly for a file
src/SortBy.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/SortBy.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/SortBy.cpp.s
.PHONY : src/SortBy.cpp.s

src/loginAuth.o: src/loginAuth.cpp.o
.PHONY : src/loginAuth.o

# target to build an object file
src/loginAuth.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/loginAuth.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/loginAuth.cpp.o
.PHONY : src/loginAuth.cpp.o

src/loginAuth.i: src/loginAuth.cpp.i
.PHONY : src/loginAuth.i

# target to preprocess a source file
src/loginAuth.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/loginAuth.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/loginAuth.cpp.i
.PHONY : src/loginAuth.cpp.i

src/loginAuth.s: src/loginAuth.cpp.s
.PHONY : src/loginAuth.s

# target to generate assembly for a file
src/loginAuth.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/loginAuth.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/loginAuth.cpp.s
.PHONY : src/loginAuth.cpp.s

src/movie.o: src/movie.cpp.o
.PHONY : src/movie.o

# target to build an object file
src/movie.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/movie.cpp.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/movie.cpp.o
.PHONY : src/movie.cpp.o

src/movie.i: src/movie.cpp.i
.PHONY : src/movie.i

# target to preprocess a source file
src/movie.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/movie.cpp.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/movie.cpp.i
.PHONY : src/movie.cpp.i

src/movie.s: src/movie.cpp.s
.PHONY : src/movie.s

# target to generate assembly for a file
src/movie.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runMain.dir/build.make CMakeFiles/runMain.dir/src/movie.cpp.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/src/movie.cpp.s
.PHONY : src/movie.cpp.s

tests/test.o: tests/test.cpp.o
.PHONY : tests/test.o

# target to build an object file
tests/test.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/tests/test.cpp.o
.PHONY : tests/test.cpp.o

tests/test.i: tests/test.cpp.i
.PHONY : tests/test.i

# target to preprocess a source file
tests/test.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/tests/test.cpp.i
.PHONY : tests/test.cpp.i

tests/test.s: tests/test.cpp.s
.PHONY : tests/test.s

# target to generate assembly for a file
tests/test.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/tests/test.cpp.s
.PHONY : tests/test.cpp.s

tests/testDbFilter.o: tests/testDbFilter.cpp.o
.PHONY : tests/testDbFilter.o

# target to build an object file
tests/testDbFilter.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/tests/testDbFilter.cpp.o
.PHONY : tests/testDbFilter.cpp.o

tests/testDbFilter.i: tests/testDbFilter.cpp.i
.PHONY : tests/testDbFilter.i

# target to preprocess a source file
tests/testDbFilter.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/tests/testDbFilter.cpp.i
.PHONY : tests/testDbFilter.cpp.i

tests/testDbFilter.s: tests/testDbFilter.cpp.s
.PHONY : tests/testDbFilter.s

# target to generate assembly for a file
tests/testDbFilter.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/runAllTests.dir/build.make CMakeFiles/runAllTests.dir/tests/testDbFilter.cpp.s
.PHONY : tests/testDbFilter.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... install"
	@echo "... install/local"
	@echo "... install/strip"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... gmock"
	@echo "... gmock_main"
	@echo "... gtest"
	@echo "... gtest_main"
	@echo "... runAllTests"
	@echo "... runMain"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... src/DBFilter.o"
	@echo "... src/DBFilter.i"
	@echo "... src/DBFilter.s"
	@echo "... src/DBManager.o"
	@echo "... src/DBManager.i"
	@echo "... src/DBManager.s"
	@echo "... src/FrontUI.o"
	@echo "... src/FrontUI.i"
	@echo "... src/FrontUI.s"
	@echo "... src/SortBy.o"
	@echo "... src/SortBy.i"
	@echo "... src/SortBy.s"
	@echo "... src/loginAuth.o"
	@echo "... src/loginAuth.i"
	@echo "... src/loginAuth.s"
	@echo "... src/movie.o"
	@echo "... src/movie.i"
	@echo "... src/movie.s"
	@echo "... tests/test.o"
	@echo "... tests/test.i"
	@echo "... tests/test.s"
	@echo "... tests/testDbFilter.o"
	@echo "... tests/testDbFilter.i"
	@echo "... tests/testDbFilter.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

