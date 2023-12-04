cmake_minimum_required(VERSION 3.25)
project(stack_my_ver)

set(CMAKE_CXX_STANDARD 17)

add_executable(stack_my_ver main.cpp node.h node.cpp stack.h stack.cpp)
