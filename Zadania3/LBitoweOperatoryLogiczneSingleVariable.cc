#include <iostream>

using namespace std;

void printBinary(unsigned char val)
{
    for (int i = 7; i >= 0; i--)
    {
        if (val & (1 << i))
            cout << "1";
        else
            cout << "0";
    }
}

int main()
{
    int tab[8];
    unsigned char liczba = 0;

    cout << "Podaj 8 wartosci 0 lub 1:" << endl;

    for (int i = 0; i < 8; i++)
    {
        cin >> tab[i];

        if (tab[i] == 1)
        {
            liczba = liczba | (1 << (7 - i));
        }
    }

    cout << "Liczba dziesietnie: " << static_cast<int>(liczba) << endl;

    cout << "Liczba binarnie: ";
    printBinary(liczba);
    cout << endl;

    return 0;
}