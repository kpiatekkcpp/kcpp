#include <iostream>

using namespace std;

int main()
{
    int tab[10];

    for (int* p = tab; p < tab + 10; p++)
    {
        *p = p - tab + 1;
    }

    int suma = 0;
    for (int* p = tab; p < tab + 10; p++)
    {
        suma = suma + *p;
    }

    int max = *tab;
    for (int* p = tab; p < tab + 10; p++)
    {
        if (*p > max)
            max = *p;
    }

    int* lewy = tab;
    int* prawy = tab + 9;

    while (lewy < prawy)
    {
        int temp = *lewy;
        *lewy = *prawy;
        *prawy = temp;

        lewy++;
        prawy--;
    }

    cout << "Suma: " << suma << endl;
    cout << "Max: " << max << endl;

    cout << "Odwrocona tablica: ";
    for (int* p = tab; p < tab + 10; p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
}