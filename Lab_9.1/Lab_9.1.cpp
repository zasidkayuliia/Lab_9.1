//////////////////////////////////////////////////////////////////////////////
// Lab_9_1.cpp
// головний файл проекту – функція main
#include <iostream>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;
    cout << fixed;
    cout << "-------------------------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << setw(4) << " |"
        << setw(10) << "arth()" << setw(4) << " |"
        << setw(9) << "S" << setw(8) << " |"
        << setw(7) << "n" << setw(7) << " |"
        << endl;
    cout << "-------------------------------------------------------" << endl;

    x = x_p;
    while (x <= x_k) {
        if (x > -1 && x < 1) {
            sum(); // виклик процедури обчислення суми
            cout << "|" << setw(7) << setprecision(2) << x << setw(2) << " |"
                << setw(10) << setprecision(5) << atanh(x) << setw(4) << " |"
                << setw(10) << setprecision(5) << s << setw(7) << " |"
                << setw(7) << n << setw(7) << " |"
                << endl;
        }
        else {
            cout << "|" << setw(7) << setprecision(2) << x << " |"
                << "Out of range" << " |" <<
                setw(15) << "Out of range" << " |"
                << "Out of range" << " |"
                << endl;
        }
        x += dx;
    }
    cout << "-------------------------------------------------------" << endl;
        cin.get();
        return 0;
    }
