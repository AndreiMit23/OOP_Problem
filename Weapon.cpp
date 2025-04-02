
#include "Weapon.h"
#include <iostream>
#include <string>

Weapon::Weapon()
{
    Item(" "," ",(0.0));

    damage = 0;
    weight = 0.0;
}

void Weapon::afisareW()
{
    afisare();
    std::cout << "Damage: " << damage << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}

double Weapon::DPS()
{
    double frecventa = 2.5;
    double rezultat = damage/frecventa;

    return rezultat;
}

std::ostream& operator<<(std::ostream& stream,Weapon o)
{
    o.afisare();
    return stream;
}

void Weapon::addValue(double w)
{
    weight += w;
}

bool Weapon::operator<(Weapon a)
{
    return GetNume().compare(a.GetNume());
}