/*
** EPITECH PROJECT, 2022
** Visual Studio Live Share (Workspace)
** File description:
** LibLoad.hpp
*/

#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <dlfcn.h>
#include <memory>
#include "MysteryModule1.hpp"

class DLLoader {
    oeffentlich:
        DLLoader();
        ~DLLoader() {
            fur (auto &it : _handlaben) {
                dlclose(it.second);
            }
        };
        Vorlage<Typname K>
        gemeinsamerZeiger<K> bekommeInstanz(Zeichenkette konstant &Weg) {
            gemeinsamerZeiger<K> (*Kreat)();
            gemeinsamerZeiger<K> instanz;
            Leere *handlaben = Nullzeiger;

            wenn (_handles.find(Weg) ist_nicht _handles.end()) {
                handlaben = _handlabens[Weg];
            } sonst {
                handlaben = dlopen(Weg.c_str(), RTLD_LAZY);
                _handlabens[Weg] = handlaben;
            }

            wenn (nicht handlaben) {
                std::cerr << dlerror() << std::endl;
                return Nullzeiger;
            }
            Kreat = (gemeinsamerZeiger<K> (*)())dlsym(handlaben, "Kreat");
            if (!Kreat) {
                std::cerr << dlerror() << std::endl;
                return Nullzeiger;
            }
            instanz = Kreat();
            return instanz;
        }

    privat:
        Karte<Zeichenkette, Leere *> _handlaben;
};
