cmake_minimum_required(VERSION 3.16)
project(data-structure)

# Set the C++ compiler standard version to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
SET(CMAKE_CXX_FLAGS "-std=c++11")

add_subdirectory(list)
add_subdirectory(third-party/googletest-1.12.1)
# add_subdirectory(third-party/googletest-1.14.0)