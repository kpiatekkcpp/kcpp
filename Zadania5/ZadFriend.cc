#include <iostream>
using namespace std;

class B;

class A {
private:
  int liczbaA;

public:
  A() {
    liczbaA = 10;
  }

  friend class B;
};

class B {
private:
  int liczbaB;

public:
  B() {
    liczbaB = 20;
  }

  void pokazA(A obiektA) {
    cout << "B ma dostep do prywatnej zmiennej A: "
         << obiektA.liczbaA << endl;
  }

  void pokazB() {
    cout << "Prywatna zmienna B: " << liczbaB << endl;
  }
};

int main() {
  A a;
  B b;

  b.pokazA(a);
  b.pokazB();

  cout << "Przyjazn nie jest wzajemna automatycznie." << endl;
  cout << "B ma dostep do A, ale A nie ma dostepu do B, jezeli osobno tego nie zadeklarujemy." << endl;

  return 0;
}