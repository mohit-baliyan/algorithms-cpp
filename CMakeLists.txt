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



create_executable( stack 01stack/01stack )

create_executable( queue 02queue/01queue )

create_executable( circular-queue 02queue/02circular-queue )

create_executable( singly-linked-list 03linked-list/01singly-linked-list )

create_executable( double-linked-list 03linked-list/02doubly-linked-list )