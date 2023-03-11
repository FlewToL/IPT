#include "eq2.h"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "Введите коэффициенты уравнения a, b, c через пробел: ";
    cin >> a >> b >> c;
    eq2 set(a, b, c);
    double x1 = set.find_X();
    cout << "Значение квадратного многочлена:" << set.find_Y(x1);
    return 0;
}