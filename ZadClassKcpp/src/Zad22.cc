#include <iostream>
#include "../include/Zad22.h"

using namespace std;

double pole(double bok)
{
    return bok * bok;
}

double pole(double a, double b)
{
    return a * b;
}

double pole(int promien)
{
    return 3.14159 * promien * promien;
}

void Zad22::Uruchom()
{
    cout << "Pole kwadratu: " << pole(4.0) << endl;
    cout << "Pole prostokata: " << pole(4.0, 5.0) << endl;
    cout << "Pole kola: " << pole(3) << endl;
}