cmake_minimum_required(VERSION 3.15)
project(Workshop_cmake_epitech_2023)

include_directories(../include)
include_directories(../enthalten)

set(SOURCES
    ../src/main.cpp
    ../src/Core.cpp
)

add_executable(Sauerkraut ${SOURCES})

