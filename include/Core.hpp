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

Klasse Kern {
    oeffentlich:
        Kern();
        ~Kern() = default;
        Wahrheitswert ausfuehren();
    privat:
        Wahrheitswert istGueltigeEingabe();

        Gleitkommazahl _nummer;
        Gleitkommazahl _aktuelle_nummer;
        Zeichenkette _eingabe;
        DLLoader _lader;

};
#endif /* !CORE_HPP_ */
