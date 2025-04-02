#pragma once
#include "Item.h"

class Weapon : public Item
{
private:
    unsigned int damage;
    double weight;

public:
    Weapon();
    Weapon(std::string n, std::string t, double v, unsigned int d, double w) : Item(n, t, v), damage(d), weight(w) {}
    void afisareW();
    double DPS();
    friend std::ostream& operator<< (std::ostream& stream,Weapon o);
    void addValue(double v); //actualizez greutatea
    bool operator<(Weapon a);
};