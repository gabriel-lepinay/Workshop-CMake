cmake_minimum_required(VERSION 3.15)
project(Compile_librairy)

set(CMAKE_CXX_STANDARD 20)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/../../lib)

## Solution ##

include_directories(
    ../../include
)

add_library(
    Hack SHARED
    libHack.cpp
)
