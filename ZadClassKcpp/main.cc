#include <iostream>

#include "include/Zad11.h"
#include "include/Zad13.h"
#include "include/Zad22.h"
#include "include/Zad47.h"
#include "include/Zad411.h"
#include "include/Zad412.h"
#include "include/Zad413.h"
#include "include/Zad414.h"
#include "include/Zad415.h"
#include "include/Zad56.h"

using namespace std;

int main()
{
    Zad11 zad11;
    Zad13 zad13;
    Zad22 zad22;
    Zad47 zad47;
    Zad411 zad411;
    Zad412 zad412;
    Zad413 zad413;
    Zad414 zad414;
    Zad415 zad415;
    Zad56 zad56;

    int wybor;

    do {
        cout << "\n=== MENU ZADAN KCPP ===" << endl;
        cout << "1. Sekcja 1, zadanie 1.1 - prosta klasa" << endl;
        cout << "2. Sekcja 1, zadanie 1.3 - operacje na string" << endl;
        cout << "3. Sekcja 2, zadanie 2.2 - przeciazanie pole" << endl;
        cout << "4. Sekcja 4, zadanie 4.7 - parzysta" << endl;
        cout << "5. Sekcja 4, zadanie 4.11 - petla for" << endl;
        cout << "6. Sekcja 4, zadanie 4.12 - silnia" << endl;
        cout << "7. Sekcja 4, zadanie 4.13 - ksztalty" << endl;
        cout << "8. Sekcja 4, zadanie 4.14 - petla while" << endl;
        cout << "9. Sekcja 4, zadanie 4.15 - gra" << endl;
        cout << "10. Sekcja 5, zadanie 5.6 - metody abstrakcyjne" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor) {
        case 1:
            zad11.Uruchom();
            break;
        case 2:
            zad13.Uruchom();
            break;
        case 3:
            zad22.Uruchom();
            break;
        case 4:
            zad47.Uruchom();
            break;
        case 5:
            zad411.Uruchom();
            break;
        case 6:
            zad412.Uruchom();
            break;
        case 7:
            zad413.Uruchom();
            break;
        case 8:
            zad414.Uruchom();
            break;
        case 9:
            zad415.Uruchom();
            break;
        case 10:
            zad56.Uruchom();
            break;
        case 0:
            cout << "Koniec programu." << endl;
            break;
        default:
            cout << "Niepoprawny wybor." << endl;
        }

    } while (wybor != 0);

    return 0;
}