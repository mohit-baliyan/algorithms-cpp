cmake_minimum_required(VERSION 3.20)
project( algorithms-cpp )
set(CMAKE_CXX_STANDARD 14)


# include unit test framework
include(FetchContent)
FetchContent_Declare(
        googletest
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


# generic function to add executable target along with test files
set(CMAKE_INCLUDE_CURRENT_DIR ON)
function( create_executable )
    add_executable( ${ARGV0} ${ARGV1}.cpp )
    add_executable( ${ARGV0}-test ${ARGV1}-test.cpp )
    target_link_libraries( ${ARGV0}-test gtest_main )
    add_test( NAME ${ARGV0}-test COMMAND ${ARGV0}-test )
endfunction()


create_executable( stack 01stack/stack )

create_executable( queue 02queue/01queue )




#add_executable( CPP2 02queue/01queue.cpp)
#
#add_executable( CPP3 02queue/02circular_queue.cpp )
#
#add_executable( CPP4 03linked-list/01singly_linked_list.cpp )
#
#add_executable( CPP5 03linked-list/02doubly_linked_list.cpp )