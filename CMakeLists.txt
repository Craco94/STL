cmake_minimum_required(VERSION 3.0)
project(echo C CXX)

add_executable(array_exe array.cpp)
add_executable(vector_exe vector.cpp)
add_executable(vector2_exe vector2.cpp)
add_executable(list_exe list.cpp)
add_executable(set_exe set.cpp)
add_executable(unordered_set_exe unordered_set.cpp)
add_executable(iterators_exe iterators.cpp)

set(CMAKE_CXX_FLAGS "-Wall -std=c++17")

