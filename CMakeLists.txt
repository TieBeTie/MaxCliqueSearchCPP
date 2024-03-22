cmake_minimum_required(VERSION 3.10)
project(MaxCliqueSearch)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(SOURCES main.cpp BitManipulation.hpp MaxCliqueSearch.hpp)

set(TEST_SOURCES
    test.cpp
)

add_executable(MaxCliqueSearch ${SOURCES})

add_executable(runTests ${TEST_SOURCES})

target_link_libraries(runTests ${GTEST_BOTH_LIBRARIES})

