#include "inventar.h"
#include <iostream>

template <typename T>
T combine(const T& obj, double value)
{
    T result = obj;
    result.addValue(value);
    return result;
}

int main()
{
    Item o1("Andrei", "Puscas", 9),o2("Alex","Genenral",10);

    o1.afisare();
    o2.afisare();

    std::cout << std::endl;

    Item obiect;
    obiect = o1+o2;
    obiect.afisare();

    std::cout << std::endl;
    
    Weapon w1("Ak47", "Rifle", 10,20,30.5), w2("M4","Rifle",20,40,50);
    std::cout << w1 << std::endl;


    std::vector<Weapon> weap = {w1,w2}; 

    Inventar inventar;
    
    for(auto weapon : weap)
    {
        inventar.adaugaElement(weapon);
    }
 
   std::cout << "DPS-ul total este: " << inventar.DPSTotal(weap) << std::endl;

   Item::f1();

    Weapon w("Sabie", "Arma", 150.0, 50, 10.0);
    Weapon w4 = combine(w,5.0);
    w4.afisare();

    Item i("Inel", "Accesoriu", 100.0);
    Item i2 = combine(i,20.0);
    i2.afisare();

    return 0;
}