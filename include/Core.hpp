/*
** EPITECH PROJECT, 2023
** Workshop-CMake
** File description:
** Core
*/

#ifndef CORE_HPP_
    #define CORE_HPP_
    #include <string>

class Core {
    public:
        Core(char *difficulty);
        ~Core();
        bool run();
    private:
        float _number;
        float _current_number;
        int _difficulty;
        int _error;
};

#endif /* !CORE_HPP_ */
