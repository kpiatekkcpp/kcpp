#include <iostream>

using namespace std;

void przesun(int* tab, int rozmiar)
{
    int ostatni = *(tab + rozmiar - 1);

    for (int i = rozmiar - 1; i > 0; i--)
    {
        *(tab + i) = *(tab + i - 1);
    }

    *tab = ostatni;
}

int main()
{
    int tablica[5] = {1, 2, 3, 4, 5};

    przesun(tablica, 5);

    cout << "Po przesunieciu: ";
    for (int i = 0; i < 5; i++)
    {
        cout << *(tablica + i) << " ";
    }

    cout << endl;

    return 0;
}