#include <iostream>

using namespace std;

class Osoba
{
public:
    string imie;

protected:
    int wiek;

private:
    string pesel;

public:
    Osoba(string i, int w, string p);

    void wyswietlDane();

    inline void wyswietlImie()
    {
        cout << "Imie: " << imie << endl;
    }

    int pobierzWiek();
    string pobierzPesel();
};

Osoba::Osoba(string i, int w, string p)
{
    imie = i;
    wiek = w;
    pesel = p;
}

void Osoba::wyswietlDane()
{
    cout << "Imie: " << imie << endl;
    cout << "Wiek: " << wiek << endl;
    cout << "PESEL: " << pesel << endl;
}

int Osoba::pobierzWiek()
{
    return wiek;
}

string Osoba::pobierzPesel()
{
    return pesel;
}

int main()
{
    Osoba osoba("Jan", 20, "12345678901");

    osoba.wyswietlImie();
    osoba.wyswietlDane();

    cout << "Wiek: " << osoba.pobierzWiek() << endl;
    cout << "PESEL: " << osoba.pobierzPesel() << endl;

    return 0;
}