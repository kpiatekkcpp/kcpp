#include <iostream>

using namespace std;

struct Student
{
    string imie;
    int indeks;
};

int main()
{
    Student s1;

    s1.imie = "Jan";
    s1.indeks = 12345;

    cout << "Student 1:" << endl;
    cout << "Imie: " << s1.imie << endl;
    cout << "Indeks: " << s1.indeks << endl;

    Student s2 = {"Anna", 54321};

    cout << endl << "Student 2:" << endl;
    cout << "Imie: " << s2.imie << endl;
    cout << "Indeks: " << s2.indeks << endl;

    s2.indeks = 11111;

    cout << endl << "Po zmianie indeksu:" << endl;
    cout << "Imie: " << s2.imie << endl;
    cout << "Indeks: " << s2.indeks << endl;

    return 0;
}