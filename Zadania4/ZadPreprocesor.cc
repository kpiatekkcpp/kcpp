#include <iostream>
using namespace std;

#define LICZBA 10
#define TEKST(x) #x
#define POLACZ(a, b) a##b

int dodajBezMakra(int a, int b)
{
  return a + b;
}

int main()
{
#ifdef LICZBA
  cout << "LICZBA jest zdefiniowana" << endl;
#else
  cout << "LICZBA nie jest zdefiniowana" << endl;
#endif

#ifndef WARTOSC
  cout << "WARTOSC nie jest zdefiniowana" << endl;
#endif

  cout << "Makro LICZBA: " << LICZBA << endl;

  cout << "Makro z #: " << TEKST(Ala ma kota) << endl;

  int zmienna1 = 25;
  cout << "Makro z ##: " << POLACZ(zmienna, 1) << endl;

  cout << "Bez makra, funkcja dodajaca: " << dodajBezMakra(4, 6) << endl;

  string tekst = "Ala ma kota";
  cout << "Bez makra, zwykly string: " << tekst << endl;

  return 0;
}