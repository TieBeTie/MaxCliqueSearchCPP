cmake_minimum_required(VERSION 3.10)
project(MaxCliqueSearch)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

include_directories(include)

set(SOURCES 
    src/main.cpp 
)

set(TEST_SOURCES
    test/test.cpp
)

add_executable(MaxCliqueSearch ${SOURCES})

add_executable(runTests ${TEST_SOURCES})

target_link_libraries(runTests ${GTEST_BOTH_LIBRARIES})

