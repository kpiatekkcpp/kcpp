#include <iostream>

using namespace std;

enum Miesiac {
    styczen = 1,
    luty,
    marzec,
    kwiecien,
    maj,
    czerwiec,
    lipiec,
    sierpien,
    wrzesien,
    pazdziernik,
    listopad,
    grudzien
};

int main() {
    Miesiac miesiac = marzec;

    cout << "Przyklad typu enum z miesiacami" << endl;
    cout << "Wybrany miesiac ma numer: " << miesiac << endl;

    return 0;
}