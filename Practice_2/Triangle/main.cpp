#include "Triangle.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Triangle mas[3];
    double a, b, c;
    for (int i = 0; i < 3; i++) {
        cout << "������� a, b � c ��� ������������ � " << i + 1 << " ����� ������: " << endl;
        cin >> a >> b >> c;
        mas[i].set(a, b, c);
        if (!(mas[i].exst_tr())) {
            mas[i].show();
            cout << "������������ � ������ ��������� �� ����������, ���������� ��� ���" << endl;
            i--;
        }
    }
    for (int i = 0; i < 3; i++) {
        mas[i].show();
        cout << "�������� ������������: " << mas[i].perimetr() << endl;
        cout << "������� ������������: " << mas[i].square() << endl;
    }
    return 0;
}