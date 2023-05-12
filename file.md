# Introduction to CMake

## Intro: what, why

CMake generates Makefiles for you. That is all. These Makefiles are build while
taking into consideration the build environnement specificities, thus making
cmake crossplateform.

CMake has several advantages over Makefiles:
 - it provides a higher level of abstraction, making it easier to use and shorter
than Makefiles.
 - it is much easier to deal with complex situations using CMake than it is than
using Makefiles.
 - the generated Makefiles automatically choose between the make and make re rule,
avoiding you headaches when you forget to make re after changing a header file.

CMake does have one inconvenient though, and it is that it generates a lot of files
that will pollute your repository. That is why it is a good habit to always put
your CMake instructions within a subdirectory of your project.

## Your first steps

This workshop will guide you through the compilation of a wonderful mystery game
program. First, take a look at the build/ folder located at the root of the repository.
Within this folder is a file named CMakeLists.txt. This is the heart of CMake, and
where you will be writting you CMake code. Within this file are already defined
the source files for the first part. Your goal is to compile an executable using the sources defined on top of the file, and get this executable to end up at the
root of the repository.

WARNING: this project demands you to compile it using the math library. (-lm)

## This is not very modular

What about if you need to use your code somewhere else? Change the CMakeLists.txt
so that you compile the source into a library (.a file), without the main.cpp.
The library should be outputed into the lib/ directory at the root of the repository.
Then compile the executable using the main.cpp and the library that you just created.

## This is a very bad game

This game is quite bad as of know. Lets add a bit more fun by adding another library.
In the src/partB/ folder, you will find another CMake folder with an empty CMakeLists.txt file within it. Compile it as a shared library object (.so),
and make it so that the output is a file name libMysteryGame.so located in the lib/
folder at the root of the repository.

For those who don't know what a shared library is, it is a library (some compiled code) that can be loaded and integrated within your executable at runtime.

Now the game should be a little more interesting!



