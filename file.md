# Introduction to CMake

## Intro: what, why

CMake generates Makefiles for you. That is all. These Makefiles are build while
taking into consideration the build environnement specificities, thus making
cmake crossplateform.

CMake has several advantages over Makefiles:
 - It provides a higher level of abstraction, making it easier to use and shorter
than Makefiles.
 - It is much easier to deal with complex situations using CMake than it is than
using Makefiles.
 - The generated Makefiles automatically choose between the make and make re rule,
avoiding you headaches when you forget to make re after changing a header file.

CMake does have one inconvenient though, and it is that it generates a lot of files
that will pollute your repository. That is why it is a good habit to always put
your CMake instructions within a subdirectory of your project.

> [Cmake Documentation](https://cmake.org/cmake/help/latest/guide/tutorial/A%20Basic%20Starting%20Point.html)

## Your first steps

This workshop will guide you through the compilation of a wonderful mystery game
program in 3 parts.

First, take a look at the ./src/ folder located at the root of the repository.
Within this folder you can find the 3 parts of this workshop.
In each part you can find a file named CMakeLists.txt. This is the heart of CMake, and where you will be writting you CMake code.


## Your mission start here
Okay buddy we found some weird code (cf. ./src/code) and we need you to compile it.

We give you a CMakeLists.txt file in ./src/part1 to help you in your mission.

We need you to compile the file in ./src/code with the .h files (./include) and locate the output to the root.

> hint: See add_executable, include_directories and EXECUTABLE_OUTPUT_PATH

As you see your first binary using CMake was created. We found this weird code (cf. ./src/code)


## This is a very bad game

This game is hard... Lets add a hacked script we found to helping you.

In the ./src/part2/ folder, you will find another CMakeLists.txt file within it. Compile the libHack.cpp file as a shared library object (.so),
Make it so that the output is a file name libMysteryGame.so located in the ./lib/
folder at the root of the repository.

For those who don't know what a shared library is, it is a library (some compiled code) that can be loaded and integrated within your executable at runtime.

> hint: See add_library

Now the game should be a little more interesting!

## Let's test

Now you're capable to finish the game! But the last epreuve is here: make unit tests.

In the ./src/part3/ folder, you will find another CMakeLists.txt file within it. Compile the two test_x.cpp files using the criterion librairy. Make it so that the output is a file name testrun located at the root of the repository.

> hint: See add_executable, target_link_libraries, add_test

Now you're able to continue on your own.. go make insane makefile architechtue for next project!!
