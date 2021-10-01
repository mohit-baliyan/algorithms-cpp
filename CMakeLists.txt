include(FetchContent)

cmake_minimum_required(VERSION 3.20)

project( CPP )

set(CMAKE_CXX_STANDARD 14)

add_executable( CPP main.cpp )

add_executable( CPP1 01stack/stack.cpp)

add_executable( CPP2 02queue/01queue.cpp)

add_executable( CPP3 02queue/02circular_queue.cpp )

add_executable( CPP4 03linked-list/01singly_linked_list.cpp )

add_executable( CPP5 03linked-list/02doubly_linked_list.cpp )

# add_executable( CPP6 03linked-list/03circular_linked_list.cpp )

