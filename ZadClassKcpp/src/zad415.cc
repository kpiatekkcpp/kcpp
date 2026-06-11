#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/Zad415.h"

using namespace std;

void Zad415::Uruchom()
{
    srand(time(0));

    int poziom;
    int zakres;

    cout << "Wybierz poziom trudnosci:" << endl;
    cout << "1 - latwy (1-50)" << endl;
    cout << "2 - trudny (1-200)" << endl;
    cin >> poziom;

    if (poziom == 1) {
        zakres = 50;
    } else {
        zakres = 200;
    }

    int wylosowana = rand() % zakres + 1;
    int proba;
    int licznik = 0;

    cout << "Zgadnij liczbe (1-" << zakres << "):" << endl;

    while (licznik < 10) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            return;
        }
    }

    cout << "Nie zgadles. Prawidlowa liczba to: " << wylosowana << endl;
}