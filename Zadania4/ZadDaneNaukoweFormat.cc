#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 3.1415926535;
    double e = 2.7182818284;
    double zlota = 1.6180339887;

    cout << left << setw(15) << "Stala"
         << setw(20) << "Wartosc"
         << setw(20) << "Notacja stala"
         << setw(20) << "Notacja naukowa" << endl;

    cout << left << setw(15) << "--------"
         << setw(20) << "----------------"
         << setw(20) << "-------------"
         << setw(20) << "--------------" << endl;

    cout << left << setw(15) << "Pi"
         << setw(20) << setprecision(6) << pi
         << fixed << setw(20) << setprecision(6) << pi
         << scientific << setw(20) << setprecision(6) << pi << endl;

    cout << defaultfloat;

    cout << left << setw(15) << "e"
         << setw(20) << setprecision(6) << e
         << fixed << setw(20) << setprecision(6) << e
         << scientific << setw(20) << setprecision(6) << e << endl;

    cout << defaultfloat;

    cout << left << setw(15) << "Zloty podzial"
         << setw(20) << setprecision(6) << zlota
         << fixed << setw(20) << setprecision(6) << zlota
         << scientific << setw(20) << setprecision(6) << zlota << endl;

    return 0;
}