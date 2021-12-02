cmake_minimum_required(VERSION 3.19)
project(c_Data_Structures_and_Algorithms C)

set(CMAKE_C_STANDARD 99)

add_executable(c_Data_Structures_and_Algorithms main.c)
ADD_SUBDIRECTORY(base)
ADD_SUBDIRECTORY(list)
ADD_SUBDIRECTORY(DataStructure01)
ADD_SUBDIRECTORY(ModelTest)