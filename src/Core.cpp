/*
** EPITECH PROJECT, 2023
** Workshop-CMake
** File description:
** Core
*/

#include "Core.hpp"
#include <iostream>
// Difficulty is a number between 1 and 3
// 1 is easy, 2 is medium, 3 is hard
// The difficulty define your number of life
// 1 = 5 life, 2 = 4 life, 3 = 3 life

Core::Core(char *difficulty) : _current_number(0.0)
{
    _difficulty = std::stoi(difficulty);
    _error = 4 - (_difficulty - 2);
}

Core::~Core()
{
}

bool Core::run()
{
    std::cout << "Try to find the write number" << std::endl;
    while (_error > 0 and _current_number != _number) {
        std::cin >> _current_number;
        if (_current_number == _number) {
            std::cout << "Good job !" << std::endl;
        } else {
            std::cout << "Nope !" << std::endl;
        }
    }
}
