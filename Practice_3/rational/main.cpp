#include "rational.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "ru");
    vector<rational> rat;

    int n;

    cout << "������� ���-�� ������������ �����: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "������� ������������ ����� #" << i+1 << " (���������/�����������) �������� �� �������� (������: 1/2 -> 1 2) : ";
        cin >> a >> b;
        rat.push_back(rational(a, b));
    }

    for (int i = 0; i < n; i++) {

        int a1, b1;
        cout << "������� ������������ ����� ��� ��������� � ����� ���������� ������������ ������ #" << i + 1 << " (";
        rat[i].show();
        cout << ") : ";
        cin >> a1 >> b1;

        rational rational_1 = rational(a1, b1);

        rational summa = rat[i] + rational_1;

        cout << "����� ������ ���� ������������ ����� : " << summa.a << "/" << summa.b << endl;

        rational raznost = rat[i] - rational_1;

        cout << "�������� ������ ���� ������������ ����� : " << raznost.a << " / " << raznost.b << endl;

        rational increment = rat[i]++;

        cout << "���������� ��������� ������������� ������ �� 1 : " << increment.a << "/" << increment.b << endl;

        cout << "����� �� ������������ ����� ������ ����? : " << (rational_1 == rat[i]) << endl;
        cout << "������ ������������ ����� ���� ������ ��� ������? : " << (rational_1 > rat[i]) << endl;
    }
}