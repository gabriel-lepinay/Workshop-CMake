/*
** EPITECH PROJECT, 2023
** Workshop-CMake
** File description:
** Core
*/

#include "Core.hpp"
#include <iostream>
#include <cstdlib>
#include <math.h>
#include "LibLoad.hpp"
#include <memory>
#include "MysteryGame.hpp"
#include <string>

Core::Core() : _current_number(0.0)
{
    srand(time(NULL));
    _number = rand() % 100;
    std::cout << "Number: " << _number << std::endl;
}

bool Core::run()
{
    std::cout << "Try to find the right number." << std::endl;
    std::cout << "debug" << std::endl;
    std::shared_ptr<IMysteryGame> plugin = std::shared_ptr<IMysteryGame>(_loader.bekommeInstanz<IMysteryGame>("../lib/libmysteryGame.so"));

    while (_current_number != _number) {
        std::cout << "> ";
        std::cin >> _input;

        if (!_input.compare("exit"))
            return true;
        if (!isValidInput())
            continue;
        if (_current_number == _number) {
            std::cout << "Good job !" << std::endl;
        } else {
            if (plugin == nullptr)
                std::cout << "Nope !" << std::endl;
            else {
                std::cout << plugin.get() << std::endl;
                plugin->frage_mich(_current_number, _number);
            }
        }
    }
    return true;
}

bool Core::isValidInput()
{
    try {
        std::stoi(_input);
    } catch (std::invalid_argument &e) {
        std::cout << "Ungültige Eingabe!" << std::endl;
        return false;
    }
    return true;
}