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
CMAKE_SOURCE_DIR = E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug

# Include any dependencies generated for this target.
include DataStructure01/CMakeFiles/1.vector.dir/depend.make

# Include the progress variables for this target.
include DataStructure01/CMakeFiles/1.vector.dir/progress.make

# Include the compile flags for this target's objects.
include DataStructure01/CMakeFiles/1.vector.dir/flags.make

DataStructure01/CMakeFiles/1.vector.dir/1.vector.c.obj: DataStructure01/CMakeFiles/1.vector.dir/flags.make
DataStructure01/CMakeFiles/1.vector.dir/1.vector.c.obj: ../DataStructure01/1.vector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object DataStructure01/CMakeFiles/1.vector.dir/1.vector.c.obj"
	cd /d E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\DataStructure01 && C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\1.vector.dir\1.vector.c.obj -c E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\DataStructure01\1.vector.c

DataStructure01/CMakeFiles/1.vector.dir/1.vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/1.vector.dir/1.vector.c.i"
	cd /d E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\DataStructure01 && C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\DataStructure01\1.vector.c > CMakeFiles\1.vector.dir\1.vector.c.i

DataStructure01/CMakeFiles/1.vector.dir/1.vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/1.vector.dir/1.vector.c.s"
	cd /d E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\DataStructure01 && C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\DataStructure01\1.vector.c -o CMakeFiles\1.vector.dir\1.vector.c.s

# Object files for target 1.vector
1_vector_OBJECTS = \
"CMakeFiles/1.vector.dir/1.vector.c.obj"

# External object files for target 1.vector
1_vector_EXTERNAL_OBJECTS =

DataStructure01/1.vector.exe: DataStructure01/CMakeFiles/1.vector.dir/1.vector.c.obj
DataStructure01/1.vector.exe: DataStructure01/CMakeFiles/1.vector.dir/build.make
DataStructure01/1.vector.exe: DataStructure01/CMakeFiles/1.vector.dir/linklibs.rsp
DataStructure01/1.vector.exe: DataStructure01/CMakeFiles/1.vector.dir/objects1.rsp
DataStructure01/1.vector.exe: DataStructure01/CMakeFiles/1.vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 1.vector.exe"
	cd /d E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\DataStructure01 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\1.vector.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
DataStructure01/CMakeFiles/1.vector.dir/build: DataStructure01/1.vector.exe

.PHONY : DataStructure01/CMakeFiles/1.vector.dir/build

DataStructure01/CMakeFiles/1.vector.dir/clean:
	cd /d E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\DataStructure01 && $(CMAKE_COMMAND) -P CMakeFiles\1.vector.dir\cmake_clean.cmake
.PHONY : DataStructure01/CMakeFiles/1.vector.dir/clean

DataStructure01/CMakeFiles/1.vector.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\DataStructure01 E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\DataStructure01 E:\BaiduNetdiskWorkspace\C\c-Data-Structures-and-Algorithms\cmake-build-debug\DataStructure01\CMakeFiles\1.vector.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : DataStructure01/CMakeFiles/1.vector.dir/depend
