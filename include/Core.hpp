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
        float _number;
        float _current_number;
        DLLoader _loader;

};

#endif /* !CORE_HPP_ */
