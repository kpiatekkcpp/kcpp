#include <iostream>
#include <string>
#include "../include/Zad13.h"

using namespace std;

void Zad13::Uruchom()
{
    string napis = "Ala ma kota";
    string drugi = "tekst";

    cout << "napis: " << napis << endl;

    cout << "empty(): " << napis.empty() << endl;
    cout << "size(): " << napis.size() << endl;
    cout << "length(): " << napis.length() << endl;

    cout << "at(0): " << napis.at(0) << endl;

    cout << "find(\"ma\"): " << napis.find("ma") << endl;

    cout << "substr(0, 3): " << napis.substr(0, 3) << endl;

    napis.append(" i psa");
    cout << "append(): " << napis << endl;

    napis.erase(3, 3);
    cout << "erase(3, 3): " << napis << endl;

    napis.swap(drugi);
    cout << "napis po swap(): " << napis << endl;
    cout << "drugi po swap(): " << drugi << endl;

    napis.clear();
    cout << "clear(): " << napis << endl;
    cout << "empty() po clear(): " << napis.empty() << endl;
}