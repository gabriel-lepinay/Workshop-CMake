cmake_minimum_required(VERSION 3.15)
project(Compile_code)

set(CMAKE_CXX_STANDARD 20)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/../../.)

### Solution ###
#
include_directories(
   ../../include
)
#
#
#add_executable(Game
#    ../src/main.cpp
#    ../src/Core.cpp
#)
#
##### OR #####
#
set(SOURCES
  ../code/main.cpp
  ../code/Core.cpp
)

add_executable(binary ${SOURCES})

