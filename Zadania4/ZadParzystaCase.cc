#include <iostream>

using namespace std;

bool parzystaBitowo(int liczba)
{
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
    int wybor;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "1 - bitowo" << endl;
    cout << "2 - modulo" << endl;
    cout << "3 - operator warunkowy" << endl;
    cout << "Wybor: ";
    cin >> wybor;

    switch (wybor)
    {
        case 1:
            cout << parzystaBitowo(liczba) << endl;
            break;
        case 2:
            cout << parzystaModulo(liczba) << endl;
            break;
        case 3:
            cout << parzystaWarunkowy(liczba) << endl;
            break;
        default:
            cout << "Niepoprawny wybor" << endl;
    }

    return 0;
}