#include <iostream>

using namespace std;

int suma(int* tab, int rozmiar)
{
    int wynik = 0;

    for (int i = 0; i < rozmiar; i++)
    {
        wynik = wynik + *(tab + i);
    }

    return wynik;
}

int main()
{
    int tablica[5] = {1, 2, 3, 4, 5};

    cout << "Suma: " << suma(tablica, 5) << endl;

    return 0;
}