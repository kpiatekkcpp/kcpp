#include <iostream>

using namespace std;

void kopiujTablice(int* zrodlo, int* cel, int rozmiar)
{
    for (int i = 0; i < rozmiar; i++)
    {
        *(cel + i) = *(zrodlo + i);
    }
}

int main()
{
    int tablica1[5] = {1, 2, 3, 4, 5};
    int tablica2[5];

    kopiujTablice(tablica1, tablica2, 5);

    cout << "Skopiowana tablica: ";

    for (int i = 0; i < 5; i++)
    {
        cout << *(tablica2 + i) << " ";
    }

    cout << endl;

    return 0;
}