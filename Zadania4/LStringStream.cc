#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string dane = "10 20 30";

    stringstream ss(dane);

    int a, b, c;

    ss >> a >> b >> c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}