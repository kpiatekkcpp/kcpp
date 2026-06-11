#include <iostream>
#include <cmath>
#include "../include/Zad56.h"

using namespace std;

class Figura {
public:
  virtual double Pole() = 0;
  virtual double Obwod() = 0;
};

class Kwadrat : public Figura {
private:
  double bok;

public:
  Kwadrat(double b) {
    bok = b;
  }

  double Pole() {
    return bok * bok;
  }

  double Obwod() {
    return 4 * bok;
  }
};

class Prostokat : public Figura {
private:
  double a;
  double b;

public:
  Prostokat(double pa, double pb) {
    a = pa;
    b = pb;
  }

  double Pole() {
    return a * b;
  }

  double Obwod() {
    return 2 * a + 2 * b;
  }
};

class Trojkat : public Figura {
private:
  double a;
  double b;
  double c;
  double h;

public:
  Trojkat(double pa, double pb, double pc, double ph) {
    a = pa;
    b = pb;
    c = pc;
    h = ph;
  }

  double Pole() {
    return a * h / 2;
  }

  double Obwod() {
    return a + b + c;
  }
};

class Kolo : public Figura {
private:
  double r;

public:
  Kolo(double pr) {
    r = pr;
  }

  double Pole() {
    return 3.14159 * r * r;
  }

  double Obwod() {
    return 2 * 3.14159 * r;
  }

  double Dystans(double metryNaOsobe) {
    return sqrt(metryNaOsobe / 3.14159);
  }
};

void Zad56::Uruchom()
{
  Kwadrat kwadrat(4);
  Prostokat prostokat(3, 5);
  Trojkat trojkat(4, 5, 6, 3);
  Kolo kolo(3);

  cout << "Kwadrat pole: " << kwadrat.Pole() << endl;
  cout << "Kwadrat obwod: " << kwadrat.Obwod() << endl;

  cout << "Prostokat pole: " << prostokat.Pole() << endl;
  cout << "Prostokat obwod: " << prostokat.Obwod() << endl;

  cout << "Trojkat pole: " << trojkat.Pole() << endl;
  cout << "Trojkat obwod: " << trojkat.Obwod() << endl;

  cout << "Kolo pole: " << kolo.Pole() << endl;
  cout << "Kolo obwod: " << kolo.Obwod() << endl;

  cout << "Dystans dla 4 metrow kwadratowych: "
       << kolo.Dystans(4) << endl;
}