#include <iostream>
#include "../include/Zad11.h"

using namespace std;

class Samochod
{
private:
    string marka;
    int rok;

public:
    Samochod(string m, int r)
    {
        marka = m;
        rok = r;
    }

    void wyswietl()
    {
        cout << "Marka: " << marka << endl;
        cout << "Rok: " << rok << endl;
    }
};

void Zad11::Uruchom()
{
    Samochod auto1("Toyota", 2020);
    auto1.wyswietl();
}