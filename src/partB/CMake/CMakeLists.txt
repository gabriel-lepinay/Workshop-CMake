cmake_minimum_required(VERSION 3.15)
project(jajaja_deutsch)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/../../../lib)


include_directories(
    ../../../include
    ../../../enthalten
)

add_library(
    mysteryGame SHARED
    ../MysteryGame.cpp
)
