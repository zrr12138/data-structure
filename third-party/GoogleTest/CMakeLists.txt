set(CMAKE_CXX_STANDARD 14)
include_directories(${PROJECT_BINARY_DIR}/third-party/GoogleTest)

# add_library(gtest gtest-all.cc)

# Add dependency of gtest on thread library
# target_link_libraries(gtest ${CMAKE_THREAD_LIBS_INIT})