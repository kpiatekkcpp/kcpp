#include <iostream>

using namespace std;

class Samochod
{
private:
    string marka;
    int rok;

public:
    Samochod(string m, int r)
    {
        marka = m;
        rok = r;
    }

    void wyswietl()
    {
        cout << "Marka: " << marka << endl;
        cout << "Rok: " << rok << endl;
    }
};

int main()
{
    Samochod auto1("Toyota", 2020);

    auto1.wyswietl();

    return 0;
}