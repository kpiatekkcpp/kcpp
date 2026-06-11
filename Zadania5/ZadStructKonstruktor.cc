#include <iostream>
using namespace std;

struct Student {
  string imie;
  int indeks;

  Student() {
    imie = "brak";
    indeks = 0;
  }

  Student(string i, int nr) : imie(i), indeks(nr) {
  }

  ~Student() {
  }

  void wyswietl() {
    cout << "Imie: " << imie << endl;
    cout << "Indeks: " << indeks << endl;
  }
};

int main() {
  Student s1;
  Student s2("Anna", 12345);

  s1.wyswietl();
  s2.wyswietl();

  return 0;
}