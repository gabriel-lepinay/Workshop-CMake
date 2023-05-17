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

## Your first steps

This workshop will guide you through the compilation of a wonderful mystery game
program in 3 parts.

First, take a look at the ./src/ folder located at the root of the repository.
Within this folder you can find the 3 parts of this workshop.
In each part you can find a file named CMakeLists.txt. This is the heart of CMake, and
where you will be writting you CMake code.


## Your mission start here
Okay buddy we found some weird code (cf. ./src/code) and we need you to compile it.

We give you a CMakeLists.txt file in ./src/part1 to help you in your mission.

We need you to compile it with the .h files in the ./include folder and locate the output to the root.

As you see your first binary using CMake was created. We found this weird code (cf. src/code)


Hint: Take a look to `set`, `include_directories` and `add_executable`.
## This is a very bad game

This game is quite bad as of know. Lets add a bit more fun by adding another library.
In the src/partB/ folder, you will find another CMake folder with an empty CMakeLists.txt file within it. Compile it as a shared library object (.so),
and make it so that the output is a file name libMysteryGame.so located in the lib/
folder at the root of the repository.

For those who don't know what a shared library is, it is a library (some compiled code) that can be loaded and integrated within your executable at runtime.

Now the game should be a little more interesting!



