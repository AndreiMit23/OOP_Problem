#include "Inventar.h"
#include <iostream>
#include <algorithm>

void Inventar::adaugaElement(const Weapon &e)
{
    storage.push_back(e);
    nrItems++;
}

void Inventar::scoatereElement(std::vector<Weapon> &e)
{
    std::vector<Weapon>::iterator i;
    for (i = e.begin(); i != e.end(); i++)
    {
        if (i != storage.end())
        {
            storage.erase(i);
            nrItems--;
        }
    }
}

void Inventar::afisareV()
{
    Weapon w;
    
    std::cout << "Numar de iteme: " << nrItems << std::endl;

    w.afisareW();
}

void Inventar::sortareElement(std::vector <Weapon>& e)
{
    std::sort(e.begin(), e.end());
    //Weapon a < Weapon b
    std::greater<>();
}

double Inventar::DPSTotal(std::vector <Weapon>& w)
{
    double rez;
    Weapon o1;
    std::vector <Weapon>::iterator i;
    for(i=w.begin(); i!=w.end(); i++)
    {
        rez = o1.DPS();
    }

    return rez;
}
