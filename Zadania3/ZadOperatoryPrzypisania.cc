#include <iostream>

using namespace std;

void OperatoryArytmetyczne()
{
    int a = 20;
    int b = 6;

    cout << "Operatory arytmetyczne" << endl;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
}

void OperatoryPrzypisania()
{
    int x = 10;

    cout << endl << "Operatory przypisania" << endl;
    cout << "x = " << x << endl;

    x += 5;
    cout << "x += 5: " << x << endl;

    x -= 3;
    cout << "x -= 3: " << x << endl;

    x *= 2;
    cout << "x *= 2: " << x << endl;

    x /= 4;
    cout << "x /= 4: " << x << endl;

    x %= 3;
    cout << "x %= 3: " << x << endl;
}

int main()
{
    OperatoryArytmetyczne();
    OperatoryPrzypisania();

    return 0;
}