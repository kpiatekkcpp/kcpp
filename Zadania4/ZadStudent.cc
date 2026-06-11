#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
  string imie;
  string nazwisko;
  int indeks;
};

bool porownajStudentow(const Student &a, const Student &b) {
  return a.nazwisko < b.nazwisko;
}

bool indeksIstnieje(const vector<Student> &listaStudentow, int indeks) {
  for (const auto &student : listaStudentow) {
    if (student.indeks == indeks) {
      return true;
    }
  }
  return false;
}

int main() {
  vector<Student> listaStudentow;
  int wybor;

  cout << "=== Program do zarzadzania lista studentow ===" << endl;

  do {
    cout << "\nMenu:" << endl;
    cout << "1. Dodaj studenta" << endl;
    cout << "2. Usun studenta" << endl;
    cout << "3. Wyswietl liste" << endl;
    cout << "4. Sortuj liste (alfabetycznie)" << endl;
    cout << "5. Sprawdz, czy student istnieje" << endl;
    cout << "0. Wyjdz" << endl;
    cout << "Wybierz opcje: ";
    cin >> wybor;
    cin.ignore();

    switch (wybor) {
    case 1: {
      Student student;

      cout << "Podaj imie studenta: ";
      getline(cin, student.imie);

      cout << "Podaj nazwisko studenta: ";
      getline(cin, student.nazwisko);

      cout << "Podaj numer indeksu: ";
      cin >> student.indeks;
      cin.ignore();

      if (student.imie.empty() || student.nazwisko.empty()) {
        cout << "Imie i nazwisko nie moga byc puste!" << endl;
      } else if (indeksIstnieje(listaStudentow, student.indeks)) {
        cout << "Student o takim numerze indeksu juz istnieje!" << endl;
      } else {
        listaStudentow.push_back(student);
        cout << "Dodano studenta!" << endl;
      }
      break;
    }

    case 2: {
      if (listaStudentow.empty()) {
        cout << "Lista jest pusta!" << endl;
        break;
      }

      int indeks;
      cout << "Podaj numer indeksu studenta do usuniecia: ";
      cin >> indeks;
      cin.ignore();

      bool znaleziono = false;

      for (auto it = listaStudentow.begin(); it != listaStudentow.end(); it++) {
        if (it->indeks == indeks) {
          listaStudentow.erase(it);
          znaleziono = true;
          cout << "Usunieto studenta!" << endl;
          break;
        }
      }

      if (!znaleziono) {
        cout << "Nie znaleziono studenta!" << endl;
      }
      break;
    }

    case 3: {
      if (listaStudentow.empty()) {
        cout << "Lista jest pusta!" << endl;
      } else {
        cout << "\nLista studentow:" << endl;
        for (const auto &student : listaStudentow) {
          cout << "- " << student.imie << " "
               << student.nazwisko << ", indeks: "
               << student.indeks << endl;
        }
      }
      break;
    }

    case 4: {
      sort(listaStudentow.begin(), listaStudentow.end(), porownajStudentow);
      cout << "Posortowano liste!" << endl;
      break;
    }

    case 5: {
      int indeks;
      cout << "Podaj numer indeksu studenta do sprawdzenia: ";
      cin >> indeks;
      cin.ignore();

      cout << (indeksIstnieje(listaStudentow, indeks)
                   ? "Student jest na liscie!"
                   : "Nie ma takiego studenta!")
           << endl;
      break;
    }

    case 0:
      cout << "Koniec programu." << endl;
      break;

    default:
      cout << "Nieprawidlowa opcja!" << endl;
    }
  } while (wybor != 0);

  return 0;
}