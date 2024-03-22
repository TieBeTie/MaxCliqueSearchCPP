cmake_minimum_required(VERSION 3.10)
project(MaxCliqueSearch)

# Set C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add include directory
include_directories(include)

# Source files
set(SOURCES 
    src/main.cpp 
)

# Test files
set(TEST_SOURCES
    test/test.cpp
)

# Executable for main program
add_executable(MaxCliqueSearch ${SOURCES})

# Executable for tests
add_executable(runTests ${TEST_SOURCES})

# Link GTest library
target_link_libraries(runTests ${GTEST_BOTH_LIBRARIES})

