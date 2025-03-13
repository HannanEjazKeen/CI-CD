cmake_minimum_required(VERSION 3.10)
project(CI_CD)
add_executable(main main.cpp math_functions.cpp)

enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests tests/test.cpp math_functions.cpp)
target_link_libraries(runTests GTest::GTest GTest::Main)

add_test(NAME AdditionTest COMMAND runTests)
