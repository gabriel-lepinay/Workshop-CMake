/*
** EPITECH PROJECT, 2022
** workshop-cmake
** File description:
** test_1.cpp
*/

#include <criterion/criterion.h>

Test(niceTest, test1)
{
    cr_assert(1 == 1);
}

Test(niceTest, test2)
{
    cr_assert(2 != 1);
}