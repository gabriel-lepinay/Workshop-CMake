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
#include "Tahlesfou.hpp"

Wahrheitswert Kern::istGueltigeEingabe()
{
    versuche {
        _aktuelle_nummer = stoi(_eingabe);
    } fange (std::invalid_argument &e) {
        zeige << "Ungültige Eingabe!" << zeige_zeile;
        gib_zurueck falsch;
    }
    gib_zurueck wahr;
}

Kern::Kern() : _aktuelle_nummer(0.0)
{
    srand(time(Nullzeiger));
    _nummer = rand() % 1000;
}

Wahrheitswert Kern::ausfuehren()
{
    zeige << "Here is your first mission, try to find the right number.\n\t You can exit by typing 'exit'" << zeige_zeile;
    gemeinsamerZeiger<IMysteryGame> plugin = gemeinsamerZeiger<IMysteryGame>(_lader.bekommeInstanz<IMysteryGame>("./lib/libHack.so"));

    solange (_aktuelle_nummer != _nummer) {
        zeige << "> ";
        gib_ein >> _eingabe;

        wenn (!_eingabe.compare("exit"))
            gib_zurueck wahr;
        wenn (!istGueltigeEingabe())
            weiter;
        wenn (_aktuelle_nummer == _nummer) {
            zeige << "Congrats you passed the test!" << zeige_zeile;
        } sonst {
            wenn (plugin == Nullzeiger)
                zeige << "Errrr!" << zeige_zeile;
            sonst {
                zeige << plugin->frage_mich(_aktuelle_nummer, _nummer) << zeige_zeile;
            }
        }
    }
    gib_zurueck wahr;
}
