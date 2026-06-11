#include <iostream>
using namespace std;

class Samochod {
private:
  string marka;
  int rok;

public:
  Samochod() {
    marka = "brak";
    rok = 0;
  }

  Samochod(string m, int r) {
    marka = m;
    rok = r;
  }

  ~Samochod() {
  }

  void wyswietl() {
    cout << "Marka: " << marka << endl;
    cout << "Rok: " << rok << endl;
  }
};

int main() {
  Samochod s1;
  Samochod s2("Opel", 2015);

  s1.wyswietl();
  s2.wyswietl();

  return 0;
}