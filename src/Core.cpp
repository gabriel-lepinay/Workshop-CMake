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

Core::Core() : _current_number(0.0)
{
    srand(time(NULL));
    float number = static_cast<float> (rand()) / (static_cast <float> (RAND_MAX/100));
    _number = floorf(number * 100) / 100;
    std::cout << "Number: " << _number << std::endl;
}

bool Core::run()
{
    std::cout << "Try to find the right number." << std::endl;
    std::shared_ptr<MysteryGame> plugin = std::shared_ptr<MysteryGame>(_loader.bekommeInstanz<MysteryGame>("./lib/libMysteryModule1.so"));

    while (_current_number != _number) {
        std::cout << "> ";
        std::cin >> _current_number;

        if (_current_number == _number) {
            std::cout << "Good job !" << std::endl;
        } else {
            if (plugin == nullptr)
                std::cout << "Nope !" << std::endl;
            else
                plugin->frage_mich(_current_number, _number);
        }
    }
    return true;
}
