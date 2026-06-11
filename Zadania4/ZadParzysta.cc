#include <iostream>

using namespace std;

bool parzystaBitowo(int liczba)
{
    /*
        Przyklad:
        6 binarnie: 110
        1 binarnie: 001
        6 & 1 = 0, czyli liczba parzysta

        7 binarnie: 111
        1 binarnie: 001
        7 & 1 = 1, czyli liczba nieparzysta
    */
    return (liczba & 1) == 0;
}

bool parzystaModulo(int liczba)
{
    return liczba % 2 == 0;
}

bool parzystaWarunkowy(int liczba)
{
    return ((liczba & 1) == 0) ? true : false;
}

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Bitowo: " << parzystaBitowo(liczba) << endl;
    cout << "Modulo: " << parzystaModulo(liczba) << endl;
    cout << "Warunkowy: " << parzystaWarunkowy(liczba) << endl;

    return 0;
}