#pragma once
#include "Weapon.h"
#include <vector>

class Inventar
{
    private:
        unsigned int nrItems;
        std::vector <Weapon> storage;
    public:
        Inventar(unsigned int nI = 0, const std::vector <Weapon>& s = std::vector <Weapon>()) : nrItems(nI), storage(s) {}
        void adaugaElement(const Weapon& e);
        void scoatereElement(std::vector <Weapon>& e);
        void sortareElement(std::vector <Weapon>& e);
        void afisareV();
        double DPSTotal(std::vector <Weapon>& w);
};