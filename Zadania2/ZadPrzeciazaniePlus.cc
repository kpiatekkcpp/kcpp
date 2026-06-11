#include <iostream>

using namespace std;

class Punkt
{
public:
    int x;
    int y;

    Punkt(int px, int py)
    {
        x = px;
        y = py;
    }

    Punkt operator+(const Punkt& p)
    {
        return Punkt(x + p.x, y + p.y);
    }
};

int main()
{
    Punkt p1(2, 3);
    Punkt p2(4, 5);

    Punkt p3 = p1 + p2;

    cout << "(" << p3.x << ", " << p3.y << ")" << endl;

    return 0;
}