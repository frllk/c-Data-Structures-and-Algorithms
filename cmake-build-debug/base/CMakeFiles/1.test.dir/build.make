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
include base/CMakeFiles/1.test.dir/depend.make

# Include the progress variables for this target.
include base/CMakeFiles/1.test.dir/progress.make

# Include the compile flags for this target's objects.
include base/CMakeFiles/1.test.dir/flags.make

base/CMakeFiles/1.test.dir/1.test.c.obj: base/CMakeFiles/1.test.dir/flags.make
base/CMakeFiles/1.test.dir/1.test.c.obj: ../base/1.test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object base/CMakeFiles/1.test.dir/1.test.c.obj"
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\1.test.dir\1.test.c.obj -c E:\CODE\C\c-Data-Structures-and-Algorithms\base\1.test.c

base/CMakeFiles/1.test.dir/1.test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1.test.dir/1.test.c.i"
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\CODE\C\c-Data-Structures-and-Algorithms\base\1.test.c > CMakeFiles\1.test.dir\1.test.c.i

base/CMakeFiles/1.test.dir/1.test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1.test.dir/1.test.c.s"
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\CODE\C\c-Data-Structures-and-Algorithms\base\1.test.c -o CMakeFiles\1.test.dir\1.test.c.s

# Object files for target 1.test
1_test_OBJECTS = \
"CMakeFiles/1.test.dir/1.test.c.obj"

# External object files for target 1.test
1_test_EXTERNAL_OBJECTS =

base/1.test.exe: base/CMakeFiles/1.test.dir/1.test.c.obj
base/1.test.exe: base/CMakeFiles/1.test.dir/build.make
base/1.test.exe: base/CMakeFiles/1.test.dir/linklibs.rsp
base/1.test.exe: base/CMakeFiles/1.test.dir/objects1.rsp
base/1.test.exe: base/CMakeFiles/1.test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 1.test.exe"
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1.test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
base/CMakeFiles/1.test.dir/build: base/1.test.exe

.PHONY : base/CMakeFiles/1.test.dir/build

base/CMakeFiles/1.test.dir/clean:
	cd /d E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base && $(CMAKE_COMMAND) -P CMakeFiles\1.test.dir\cmake_clean.cmake
.PHONY : base/CMakeFiles/1.test.dir/clean

base/CMakeFiles/1.test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\CODE\C\c-Data-Structures-and-Algorithms E:\CODE\C\c-Data-Structures-and-Algorithms\base E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base E:\CODE\C\c-Data-Structures-and-Algorithms\cmake-build-debug\base\CMakeFiles\1.test.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : base/CMakeFiles/1.test.dir/depend

