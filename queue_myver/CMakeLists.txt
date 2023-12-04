cmake_minimum_required(VERSION 3.25)
project(queue_myver)

set(CMAKE_CXX_STANDARD 17)

add_executable(queue_myver main.cpp ../assignment_2/node.h queue.h ../assignment_2/node.cpp queue.cpp)
