cmake_minimum_required(VERSION 3.15)
project(Workshop_cmake_epitech_2023)
include(CTest)

include_directories(../../include)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/../../.)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    testrun
    ./tests/test_1.cpp
    ./tests/test_2.cpp
)

target_link_libraries(
    testrun
    -lcriterion
)

add_test(
    NAME test
    COMMAND ./testrun
)