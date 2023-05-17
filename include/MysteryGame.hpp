/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** MysteryGame.hpp
*/

#ifndef DA3D58ED_290A_43C2_B833_5EB3FD2C8586
    #define DA3D58ED_290A_43C2_B833_5EB3FD2C8586

    #include <string>
    #include "MysteryModule1.hpp"

Klasse IMysteryGame {
    oeffentlich:
        virtuell Zeichenkette frage_mich(Gleitkommazahl zahl, Gleitkommazahl anwortet) = 0;
};

Klasse MysteryGame : public IMysteryGame {
    oeffentlich:
        Zeichenkette frage_mich(Gleitkommazahl zahl, Gleitkommazahl anwortet);
};

#endif /* DA3D58ED_290A_43C2_B833_5EB3FD2C8586 */
