#include <iostream>

using namespace std;

void wypiszTablice(const char* opis, int* p, int tab[], int rozmiar)
{
    cout << opis << endl;
    cout << "p wskazuje na wartosc: " << *p << endl;

    cout << "tablica: ";
    for (int i = 0; i < rozmiar; i++)
        cout << tab[i] << " ";

    cout << endl << endl;
}

void Funkcja1()
{
    int tab[] = {10, 20, 30, 40, 50};
    int* p = tab + 1;

    wypiszTablice("Start", p, tab, 5);

    p++;
    wypiszTablice("p++", p, tab, 5);

    ++p;
    wypiszTablice("++p", p, tab, 5);

    ++*p;
    wypiszTablice("++*p", p, tab, 5);

    ++(*p);
    wypiszTablice("++(*p)", p, tab, 5);

    ++*(p);
    wypiszTablice("++*(p)", p, tab, 5);

    *p++;
    wypiszTablice("*p++", p, tab, 5);

    (*p)++;
    wypiszTablice("(*p)++", p, tab, 5);

    *(p)++;
    wypiszTablice("*(p)++", p, tab, 5);

    *++p;
    wypiszTablice("*++p", p, tab, 5);

    *(++p);
    wypiszTablice("*(++p)", p, tab, 5);
}

void wypiszABC(int nr, int a, int b, int c)
{
    cout << nr << ". A, B, C: " << a << " " << b << " " << c << endl;
}

void Funkcja2()
{
    int a = 0, b = 0, c = 0;
    int* p = &a;

    wypiszABC(1, a, b, c);

    p = &b;
    *p = 10;
    wypiszABC(2, a, b, c);

    p = &c;
    *p = 20;
    wypiszABC(3, a, b, c);

    p = &b;
    *p = 30;
    wypiszABC(4, a, b, c);

    p = &a;
    *p = 40;
    wypiszABC(5, a, b, c);

    p = &b;
    *p = 50;
    wypiszABC(6, a, b, c);

    p = &c;
    *p = 60;
    wypiszABC(7, a, b, c);

    p = &b;
    *p = 70;
    wypiszABC(8, a, b, c);

    p = &a;
    *p = 80;
    wypiszABC(9, a, b, c);

    p = &b;
    *p = 90;
    wypiszABC(10, a, b, c);
}

int main()
{
    Funkcja1();

    cout << "------------------------" << endl;

    Funkcja2();

    return 0;
}