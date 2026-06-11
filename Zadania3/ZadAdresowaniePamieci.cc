#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Adres zmiennej a: " << &a << endl;
    cout << "Adres zmiennej b: " << &b << endl;
    cout << "Adres zmiennej c: " << &c << endl;

    /*
        Kierunek adresowania pamieci sprawdzamy przez porownanie adresow
        kolejno zadeklarowanych zmiennych. Jesli adres b jest wiekszy od adresu a, to kolejne zmienne sa
        umieszczane pod coraz wiekszymi adresami.Jesli adres b jest mniejszy od adresu a, to kolejne zmienne sa
        umieszczane pod coraz mniejszymi adresami.Wynik moze zalezec od kompilatora, systemu i sposobu ulozenia
        zmiennych na stosie.

    */

    return 0;
}