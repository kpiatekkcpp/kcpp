#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int liczba = 19;
    double x = 9.0;
    char tekstC[] = "Ala";
    string tekstCpp = "Ala";

    printf("C int: %i\n", liczba);
    cout << "C++ int: " << liczba << endl << endl;

    printf("C hex: %x\n", liczba);
    cout << "C++ hex: " << hex << liczba << dec << endl << endl;

    printf("C double: %.3f\n", x);
    cout << "C++ double: " << fixed << setprecision(3) << x << endl << endl;

    printf("C szerokosc: %10.2f\n", x);
    cout << "C++ szerokosc: " << setw(10) << setprecision(2) << x << endl << endl;

    printf("C napis: %s, dlugosc: %lu\n", tekstC, strlen(tekstC));
    cout << "C++ napis: " << tekstCpp << ", dlugosc: " << tekstCpp.length() << endl << endl;

    printf("C sqrt: %.2f\n", sqrt(x));
    cout << "C++ sqrt: " << sqrt(x) << endl;

    return 0;
}