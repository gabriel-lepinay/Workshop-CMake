cmake_minimum_required(VERSION 3.15)
project(jajaja_deutsch)

include_directories(
    ../../../include
    ../../../enthalten
)

add_library(
    mysteryGame SHARED
    ../MysteryGame.cpp
)