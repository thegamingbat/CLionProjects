cmake_minimum_required(VERSION 3.25)
project(assignment_2)

set(CMAKE_CXX_STANDARD 17)

add_executable(assignment_2 main.cpp Ticket.h Ticket.cpp TicketQueue.h TicketQueue.cpp  node.h node.cpp)
