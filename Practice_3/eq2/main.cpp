#include "eq2.h"
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c;
    cout << "������� ������������ ��������� a, b, c ����� ������: ";
    cin >> a >> b >> c;
    eq2 set(a, b, c);
    double x1 = set.find_X();
    cout << "�������� ����������� ����������:" << set.find_Y(x1);
    return 0;
}