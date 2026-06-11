#include <iostream>
using namespace std;

void przesun(int* tab, int rozmiar)
{
    int ostatni = *(tab + rozmiar - 1);

    for (int* p = tab + rozmiar - 1; p > tab; p--)
    {
        *p = *(p - 1);
    }

    *tab = ostatni;
}

void wypiszTablice(int* tab, int rozmiar)
{
    for (int* p = tab; p < tab + rozmiar; p++)
    {
        cout << *p << " ";
    }
    cout << endl;
}

int main()
{
    const int rozmiar = 5;
    int tablica[rozmiar] = {1, 2, 3, 4, 5};

    cout << "Tablica przed przesunieciem: ";
    wypiszTablice(tablica, rozmiar);

    przesun(tablica, rozmiar);

    cout << "Tablica po przesunieciu: ";
    wypiszTablice(tablica, rozmiar);

    return 0;
}