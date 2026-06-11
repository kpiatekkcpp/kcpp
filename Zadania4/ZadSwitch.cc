#include <iostream>
#include <string>

using namespace std;

int main()
{
    string slowo;
    int wybor = 0;

    cout << "Podaj slowo: ";
    cin >> slowo;

    if (slowo == "bitowo")
        wybor = 1;
    else if (slowo == "modulo")
        wybor = 2;
    else if (slowo == "warunkowy")
        wybor = 3;

    switch (wybor)
    {
        case 1:
            cout << "Wybrano sprawdzanie bitowe" << endl;
            break;

        case 2:
            cout << "Wybrano sprawdzanie modulo" << endl;
            break;

        case 3:
            cout << "Wybrano operator warunkowy" << endl;
            break;

        default:
            cout << "Nieznane slowo" << endl;
            break;
    }

    return 0;
}