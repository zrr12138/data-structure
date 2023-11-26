# GoogleTest1.14.0 requires at least C++14
# set(CMAKE_CXX_STANDARD 14)
# GoogleTest1.12.1 requires at least C++11

include_directories(${PROJECT_BINARY_DIR}/list)
include_directories(${PROJECT_BINARY_DIR}/third-party/googletest-1.12.1)
# include_directories(${PROJECT_BINARY_DIR}/third-party/googletest-1.14.0)

add_executable(list main.cpp list.cpp)


# Test
add_executable(list_test list_test.cpp)
target_link_libraries(list_test GTest::gtest_main)
# include(GoogleTest)
# gtest_discover_tests(list_test)


