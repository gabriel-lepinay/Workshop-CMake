/*
** EPITECH PROJECT, 2023
** Workshop-CMake
** File description:
** main
*/
#include "Core.hpp"
#include <iostream>

bool errorHandlingt(int ac, char **av)
{
    if (ac != 1 and av[1][0] == '-' and av[1][1] == 'h') {
        std::cout << "Usage: ./mystery <difficulty>\n\tdifficulty:\n\t\t0 < difficulty < 4" << std::endl;
        return false;
    }
    if (ac != 1) {
        std::cout << "Wrong number of arguments. Try ./mystery -h" << std::endl;
        return false;
    }
    return true;
}

int main(int ac, char **av)
{
    if (!errorHandlingt(ac, av)) {
        return (84);
    }
    Core core;
    core.run();
    return (0);
}