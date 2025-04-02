#pragma once
#include <string>

class Item 
{
    private:
        std::string nume;
        std::string type;
        double value;
        static int nrItemeCreate;
    public: 
        Item();
        Item(std::string n, std::string t, double v) : nume(n), type(t), value(v) {}
        void afisare();
        std::string GetNume() const {
            return nume;
        };
        std::string GetType() const{
            return type;
        };
        double GetValue() const{
            return value;
        };
        static void f1();
        void addValue(double v); //actualizez valoarea 
};
Item operator+(const Item o1,const Item o2);
//int Item::timp;
