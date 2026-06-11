#include <iostream>

using namespace std;

int main()
{
    int tab[3][3];

    cout << "Adresy elementow tablicy 2D:" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "&tab[" << i << "][" << j << "] = " << &tab[i][j] << endl;
        }
    }

    return 0;
}