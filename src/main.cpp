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
    if (ac != 2)
        return false;
    if (av[1][0] == '-' && av[1][1] == 'h')
        std::cout << "Usage: ./mystery [difficulty]\n\tdifficulty: int 0 < difficulty < 4" << std::endl;
        return false;
    if (std::stoi(av[1]) < 1 || std::stoi(av[1]) > 3)
        return false;
    return true;
}

int main(int ac, char **av)
{
    if (!errorHandlingt(ac, av))
        return (84);
    Core core(av[1]);
    return (0);
}