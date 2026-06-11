#include <iostream>

using namespace std;

int* maxElement(int* tab, int rozmiar)
{
    int* max = tab;

    for (int i = 1; i < rozmiar; i++)
    {
        if (*(tab + i) > *max)
        {
            max = tab + i;
        }
    }

    return max;
}

int main()
{
    int tablica[5] = {4, 9, 2, 15, 7};

    int* wynik = maxElement(tablica, 5);

    cout << "Najwiekszy element: " << *wynik << endl;

    return 0;
}