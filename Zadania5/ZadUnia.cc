#include <iostream>

using namespace std;

union Dane
{
    int liczba;
    float rzeczywista;
    char znak;
};

int main()
{
    Dane d;

    d.liczba = 123;
    cout << "Po wpisaniu int:" << endl;
    cout << "liczba: " << d.liczba << endl;

    d.rzeczywista = 12.5f;
    cout << endl << "Po wpisaniu float:" << endl;
    cout << "rzeczywista: " << d.rzeczywista << endl;
    cout << "liczba: " << d.liczba << endl;

    d.znak = 'Z';
    cout << endl << "Po wpisaniu char:" << endl;
    cout << "znak: " << d.znak << endl;
    cout << "liczba: " << d.liczba << endl;

    return 0;
}