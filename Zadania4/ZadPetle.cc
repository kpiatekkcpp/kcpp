#include <iostream>

using namespace std;

void PetlaWhile()
{
    int i = 0;

    while (i < 10)
    {
        i++;

        if (i == 3)
            continue;

        if (i == 8)
            break;

        cout << i << " ";
    }

    cout << endl;
}

void PetlaDoWhile()
{
    int i = 0;

    do
    {
        ++i;

        if (i == 3)
            continue;

        if (i == 8)
            break;

        cout << i << " ";
    }
    while (i < 10);

    cout << endl;
}

void PetlaFor()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i == 3)
            continue;

        if (i == 8)
            return;

        cout << i << " ";
    }

    cout << endl;
}

int main()
{
    cout << "while:" << endl;
    PetlaWhile();

    cout << "do while:" << endl;
    PetlaDoWhile();

    cout << "for:" << endl;
    PetlaFor();

    return 0;
}