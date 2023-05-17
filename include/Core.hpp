/*
** EPITECH PROJECT, 2023
** Workshop-CMake
** File description:
** Core
*/

#ifndef CORE_HPP_
    #define CORE_HPP_
    #include <string>
    #include "LibLoad.hpp"
class Core {
    public:
        Core();
        ~Core() = default;
        bool run();
    private:
        bool isValidInput();

        float _number;
        float _current_number;
        std::string _input;
        DLLoader _loader;

};

#endif /* !CORE_HPP_ */
