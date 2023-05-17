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
    _number = rand() % 1000;
}

bool Core::run()
{
    std::cout << "Here is your first mission, try to find the right number.\n\t You can exit by typing 'exit'" << std::endl;
    std::shared_ptr<IMysteryGame> plugin = std::shared_ptr<IMysteryGame>(_loader.bekommeInstanz<IMysteryGame>("./lib/libHack.so"));

    while (_current_number != _number) {
        std::cout << "> ";
        std::cin >> _input;

        if (!_input.compare("exit"))
            return true;
        if (!isValidInput())
            continue;
        if (_current_number == _number) {
            std::cout << "Congrats you passed the test!" << std::endl;
        } else {
            if (plugin == nullptr)
                std::cout << "Errrr!" << std::endl;
            else {
                std::cout << plugin->frage_mich(_current_number, _number) << std::endl;
            }
        }
    }
    return true;
}

bool Core::isValidInput()
{
    try {
        _current_number = std::stoi(_input);
    } catch (std::invalid_argument &e) {
        std::cout << "Ungültige Eingabe!" << std::endl;
        return false;
    }
    return true;
}