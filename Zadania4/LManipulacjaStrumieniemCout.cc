#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a = 10.0;
    double b = 3.0;
    double c = 7.0;

    double wynik = a / b;

    double output = a + b;
    double t = a / c;

    double output1 = a * b / c;
    double t1 = c / b;

    double output2 = (a + c) / b;
    double t2 = (a * c) / b;

    double average = (output + output1 + output2) / 3.0;
    double averageT = (t + t1 + t2) / 3.0;

    cout << "Przyklad hex i dec: ";
    cout << hex << 255 << dec << endl;

    cout << "Przyklad scientific: ";
    cout << scientific << wynik << fixed << endl;

    cout << setfill('=') << setw(50) << "" << setfill(' ') << endl;

    cout << "Wynika  dzialania: "
         << setprecision(5) << wynik<< endl;

    cout << fixed;

    cout << setw(12) << "output:"
         << setw(9) << setprecision(3) << output
         << setw(5) << "T:"
         << setw(8) << setprecision(3) << t << endl;

    cout << setw(13) << "output1:"
         << setw(9) << setprecision(4) << output1
         << setw(4) << "T:"
         << setw(10) << setprecision(5) << t1 << endl;

    cout << setw(13) << "output2:"
         << setw(9) << setprecision(4) << output2
         << setw(4) << "T:"
         << setw(11) << setprecision(6) << t2 << endl;

    cout << setw(5) << ""
         << setfill('-') << setw(33) << ""
         << setfill(' ') << endl;

    cout << setw(13) << "average:"
         << setw(9) << setprecision(4) << average
         << setw(4) << "T:"
         << setw(11) << setprecision(6) << averageT << endl;

    cout << setfill('=') << setw(50) << "" << setfill(' ') << endl;

    return 0;
}