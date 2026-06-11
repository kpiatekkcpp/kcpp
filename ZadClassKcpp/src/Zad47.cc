#include <iostream>
#include "../include/Zad47.h"

using namespace std;

bool parzystaBitowo(int liczba)
{
    return (liczba & 1) == 0;
}

bool parzystaModulo(int liczba)
{
    return liczba % 2 == 0;
}

bool parzystaWarunkowy(int liczba)
{
    return ((liczba & 1) == 0) ? true : false;
}

void Zad47::Uruchom()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << boolalpha;
    cout << "Bitowo: " << parzystaBitowo(liczba) << endl;
    cout << "Modulo: " << parzystaModulo(liczba) << endl;
    cout << "Warunkowy: " << parzystaWarunkowy(liczba) << endl;
}