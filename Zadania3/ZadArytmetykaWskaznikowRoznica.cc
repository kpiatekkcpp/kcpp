#include <iostream>

using namespace std;

int main()
{
    int tablica[10];

    int* p1 = &tablica[2];
    int* p2 = &tablica[7];

    cout << "Roznica wskaznikow: " << p2 - p1 << endl;

    return 0;
}