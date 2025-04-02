
#include "Item.h"
#include <iostream>

int Item::nrItemeCreate = 0;

Item::Item()
{
    nume = " ";
    type = " ";
    value = 0.0;
    nrItemeCreate++; // contor pentru numarul de iteme create deacursul programului :3
}

void Item::afisare()
{
    std::cout << "Nume: " << nume << std::endl;
    std::cout << "Type: " << type << std::endl;
    std::cout << "Value: " << value << std::endl;
}

Item operator+(const Item o1, const Item o2)
{
    Item rez(
        o1.GetNume() + " & " + o2.GetNume(),
        o1.GetType() + " & " + o2.GetType(),
        o1.GetValue() + o2.GetValue());

    return rez;
}

void Item::f1()
{
    std::cout << "Variabila statica este: " << nrItemeCreate << std::endl;
}

void Item::addValue(double v)
{
    value += v;
}