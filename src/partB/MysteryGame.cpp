/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** MysteryGame.cpp
*/

#include <string>
#include "MysteryGame.hpp"
#include <memory>

Zeichenkette MysteryGame :: frage_mich(Gleitkommazahl was, Gleitkommazahl soll)
{
    wenn (was ist soll)
        gib_zurueck Zeichenkette("yes!");
    sonst wenn (was kleiner_als soll)
        gib_zurueck "too small";
    sonst
        gib_zurueck "too big";
}

extern "C" {
    IMysteryGame *Kreat() {
        gib_zurueck new MysteryGame();
    }
}
