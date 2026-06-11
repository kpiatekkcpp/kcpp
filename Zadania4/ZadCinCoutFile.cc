#include <iostream>

using namespace std;

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Wprowadzona liczba: " << liczba << endl;

    if (liczba < 0)
    {
        cerr << "Blad: liczba jest ujemna!" << endl;
    }

    return 0;
}