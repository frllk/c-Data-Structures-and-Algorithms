# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\CODE\C\c-Data-Structures-and-Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug

# Include any dependencies generated for this target.
include base/CMakeFiles/1.test.cpp.dir/depend.make

# Include the progress variables for this target.
include base/CMakeFiles/1.test.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include base/CMakeFiles/1.test.cpp.dir/flags.make

base/CMakeFiles/1.test.cpp.dir/1.test.cpp.obj: base/CMakeFiles/1.test.cpp.dir/flags.make
base/CMakeFiles/1.test.cpp.dir/1.test.cpp.obj: ../base/1.test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object base/CMakeFiles/1.test.cpp.dir/1.test.cpp.obj"
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\1.test.cpp.dir\1.test.cpp.obj -c E:\CODE\C\c-Data-Structures-and-Algorithms\base\1.test.cpp

base/CMakeFiles/1.test.cpp.dir/1.test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/1.test.cpp.dir/1.test.cpp.i"
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\CODE\C\c-Data-Structures-and-Algorithms\base\1.test.cpp > CMakeFiles\1.test.cpp.dir\1.test.cpp.i

base/CMakeFiles/1.test.cpp.dir/1.test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/1.test.cpp.dir/1.test.cpp.s"
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && C:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\CODE\C\c-Data-Structures-and-Algorithms\base\1.test.cpp -o CMakeFiles\1.test.cpp.dir\1.test.cpp.s

# Object files for target 1.test.cpp
1_test_cpp_OBJECTS = \
"CMakeFiles/1.test.cpp.dir/1.test.cpp.obj"

# External object files for target 1.test.cpp
1_test_cpp_EXTERNAL_OBJECTS =

base/1.test.cpp.exe: base/CMakeFiles/1.test.cpp.dir/1.test.cpp.obj
base/1.test.cpp.exe: base/CMakeFiles/1.test.cpp.dir/build.make
base/1.test.cpp.exe: base/CMakeFiles/1.test.cpp.dir/linklibs.rsp
base/1.test.cpp.exe: base/CMakeFiles/1.test.cpp.dir/objects1.rsp
base/1.test.cpp.exe: base/CMakeFiles/1.test.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 1.test.cpp.exe"
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1.test.cpp.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
base/CMakeFiles/1.test.cpp.dir/build: base/1.test.cpp.exe

.PHONY : base/CMakeFiles/1.test.cpp.dir/build

base/CMakeFiles/1.test.cpp.dir/clean:
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && $(CMAKE_COMMAND) -P CMakeFiles\1.test.cpp.dir\cmake_clean.cmake
.PHONY : base/CMakeFiles/1.test.cpp.dir/clean

base/CMakeFiles/1.test.cpp.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CODE\C\c-Data-Structures-and-Algorithms E:\CODE\C\c-Data-Structures-and-Algorithms\base E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base\CMakeFiles\1.test.cpp.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : base/CMakeFiles/1.test.cpp.dir/depend
