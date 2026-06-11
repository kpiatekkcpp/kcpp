#include <iostream>

using namespace std;

int przezWartosc()
{
    int x = 10;
    return x;
}

int& przezReferencje()
{
    static int x = 20;
    return x;
}

int* przezWskaznik()
{
    static int x = 30;
    return &x;
}

int* przezTablice()
{
    static int tab[3] = {1, 2, 3};
    return tab;
}

int main()
{
    cout << "Przez wartosc: " << przezWartosc() << endl;

    cout << "Przez referencje: " << przezReferencje() << endl;

    cout << "Przez wskaznik: " << *przezWskaznik() << endl;

    int* tablica = przezTablice();
    cout << "Tablica: ";
    for (int i = 0; i < 3; i++)
    {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}