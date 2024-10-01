// lab4.3.cpp
// <Магоцький Орест Маркович>
// Лабораторна робота № 4.3
// Варіант 18
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, a, b, c, F, xp, xk, dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "            x" << "            |" << endl;
    cout << "---------------------------" << endl;

    x = xp;
    for(xp <= xk; x++;)
    {
        if(x < 0 && b!= 0)
        {
            F = (a * (x * x)) - (b * (x * x));
        }
        if(x > 0 && b == 0)
        {
            F = (x - a)/ (x - c);
        }
        if(!(x < 0 && b != 0) && !(x > 0 && b == 0))
        {
            F = (x + 5) / (c * (x - 10));
        }
        cout << "|" << setw(7) << setprecision(2) << x
                << "   |" << setw(10) << setprecision(3) << F
                << "    |" << endl;
            x += dx;
    
    cin.get();
    }
    cout << "---------------------------" << endl;

    return 0;
}