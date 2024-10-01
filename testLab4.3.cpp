#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, xp, xk, dx, F, c, b, a;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "           F" << "              |" << endl;
    cout << "---------------------------" << endl;

    for (x = xp; x <= xk; x += dx) {
        


        if(x < 0 && b!= 0)
        {
            F = (a * (x * x)) - (b * (x * x));
        }
        else
            if(x > 0 && b == 0)
            {
                F = (x - a)/ (x - c);  
            }
            else
                F = (x + 5) / (c * (x - 10));
            
        cout << "|" << setw(7) << setprecision(2) << x
             << "    |" << setw(10) << setprecision(3) << F
             << "    |" << endl;
        x+= dx;
    }
    cout << "---------------------------" << endl;


    return 0;
}