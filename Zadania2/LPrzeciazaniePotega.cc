#include <iostream>

using namespace std;

int potega(int liczba, int wykladnik)
{
    int wynik = 1;

    for (int i = 0; i < wykladnik; i++)
    {
        wynik = wynik * liczba;
    }

    return wynik;
}

double potega(double liczba, int wykladnik)
{
    double wynik = 1;

    for (int i = 0; i < wykladnik; i++)
    {
        wynik = wynik * liczba;
    }

    return wynik;
}

int main()
{
    cout << "Potega int: " << potega(2, 3) << endl;
    cout << "Potega double: " << potega(2.5, 2) << endl;

    return 0;
}