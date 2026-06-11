#include <iostream>

using namespace std;

void zamien(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    cout << "Przed zamiana: " << x << " " << y << endl;

    zamien(&x, &y);

    cout << "Po zamianie: " << x << " " << y << endl;

    return 0;
}