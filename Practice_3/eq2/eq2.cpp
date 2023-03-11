#include "eq2.h"
#include <cmath>
#include <iostream>

using namespace std;

eq2::eq2(double a1, double b1, double c1) {
    a = a1; 
    b = b1; 
    c = c1;
    D = (b * b) - (4 * a * c);
}
void eq2::set(double a1, double b1, double c1) {
    a = a1; 
    b = b1; 
    c = c1;
    D = (b * b) - (4 * a * c);
}
double eq2::find_X() {
    if (D < 0) {
        cout << "Уравнение не имеет корней." << endl;
        return 0;
    }

    if (D == 0) {
        double x = (-b - sqrt(D)) / (2 * a);
        cout << "Уравнение имеет один корень: " << x << endl;
        return x;
    }
    else {
        double x1 = (-b - sqrt(D)) / (2 * a);
        double x2 = (-b + sqrt(D)) / (2 * a);
        cout << "Уравнение имеет 2 корня: " << x1 << ", " << x2 << endl;
        if (x1 > x2) {
            cout << "Наибольший корень: " << x1 << endl;
            return x1;
        }
        else {
            cout << "Наибольший корень: " << x2 << endl;
            return x2;
        }

    }
}
double eq2::find_Y(double x1) {
    return (a * x1 * x1) + (b * x1) + c;
}