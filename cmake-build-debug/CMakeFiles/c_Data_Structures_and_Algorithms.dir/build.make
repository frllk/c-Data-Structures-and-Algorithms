# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_Data_Structures_and_Algorithms.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/c_Data_Structures_and_Algorithms.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_Data_Structures_and_Algorithms.dir/flags.make

CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.obj: CMakeFiles/c_Data_Structures_and_Algorithms.dir/flags.make
CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\c_Data_Structures_and_Algorithms.dir\main.c.obj -c D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\main.c

CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\main.c > CMakeFiles\c_Data_Structures_and_Algorithms.dir\main.c.i

CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\main.c -o CMakeFiles\c_Data_Structures_and_Algorithms.dir\main.c.s

# Object files for target c_Data_Structures_and_Algorithms
c_Data_Structures_and_Algorithms_OBJECTS = \
"CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.obj"

# External object files for target c_Data_Structures_and_Algorithms
c_Data_Structures_and_Algorithms_EXTERNAL_OBJECTS =

c_Data_Structures_and_Algorithms.exe: CMakeFiles/c_Data_Structures_and_Algorithms.dir/main.c.obj
c_Data_Structures_and_Algorithms.exe: CMakeFiles/c_Data_Structures_and_Algorithms.dir/build.make
c_Data_Structures_and_Algorithms.exe: CMakeFiles/c_Data_Structures_and_Algorithms.dir/linklibs.rsp
c_Data_Structures_and_Algorithms.exe: CMakeFiles/c_Data_Structures_and_Algorithms.dir/objects1.rsp
c_Data_Structures_and_Algorithms.exe: CMakeFiles/c_Data_Structures_and_Algorithms.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_Data_Structures_and_Algorithms.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c_Data_Structures_and_Algorithms.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_Data_Structures_and_Algorithms.dir/build: c_Data_Structures_and_Algorithms.exe
.PHONY : CMakeFiles/c_Data_Structures_and_Algorithms.dir/build

CMakeFiles/c_Data_Structures_and_Algorithms.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c_Data_Structures_and_Algorithms.dir\cmake_clean.cmake
.PHONY : CMakeFiles/c_Data_Structures_and_Algorithms.dir/clean

CMakeFiles/c_Data_Structures_and_Algorithms.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\cmake-build-debug D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\cmake-build-debug D:\BaiduNetdiskWorkspace\C\c-data-structures-and-algorithms\cmake-build-debug\CMakeFiles\c_Data_Structures_and_Algorithms.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_Data_Structures_and_Algorithms.dir/depend

