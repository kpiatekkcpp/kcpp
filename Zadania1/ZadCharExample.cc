#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char napis1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char napis2[] = "Dzien dobry";
    char napis3[20];

    cout << "napis1: " << napis1 << endl;
    cout << "napis2: " << napis2 << endl;

    strcpy(napis3, napis2);
    cout << "napis3 po strcpy: " << napis3 << endl;

    char str1[] = "To be or not to be";
    char str2[10];

    strncpy(str2, str1, sizeof(str2) - 1);
    str2[sizeof(str2) - 1] = '\0';

    cout << "str1: " << str1 << endl;
    cout << "str2 po strncpy: " << str2 << endl;

    cout << "sizeof(str2): " << sizeof(str2) << endl;
    cout << "strlen(str2): " << strlen(str2) << endl;

    return 0;
}