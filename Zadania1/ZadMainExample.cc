#include <iostream>
#include <cstring>

using namespace std;

void funkcja1()
{
    cout << "Funkcja 1" << endl;
}

void funkcja2()
{
    cout << "Funkcja 2" << endl;
}

void funkcja3()
{
    cout << "Funkcja 3" << endl;
}

extern "C" void funkcja4()
{
    cout << "Funkcja 4 extern C" << endl;
}

extern "C" void funkcja5()
{
    cout << "Funkcja 5 extern C" << endl;
}

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "1") == 0)
            funkcja1();
        else if (strcmp(argv[i], "2") == 0)
            funkcja2();
        else if (strcmp(argv[i], "3") == 0)
            funkcja3();
        else if (strcmp(argv[i], "4") == 0)
            funkcja4();
        else if (strcmp(argv[i], "5") == 0)
            funkcja5();
    }

    return 0;
}