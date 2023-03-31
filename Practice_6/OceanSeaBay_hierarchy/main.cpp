#include <iostream>
#include "bay.h"

using namespace std;

int main() {
    Ocean first_ocean("�������������", "����� ����������� � ���������", 106450000, 3640, 31000000, 15);
    Ocean second_ocean("�����", "����� �������� � ����������", 165250000, 4650, 64000000, 15);

    Sea first_sea("���������", "����� �������", 3800000, 1547, 2000000, 10);
    Sea second_sea("����������", "��������", 100000, 43, 46007, 7);

    Bay first_bay("������������", "��������������", 230000, 50, 29000, 15);
    Bay second_bay("�����������", "�������� �������", 1533000, 4000, 1500000, 5);

    Sea third_sea(&first_ocean, "�����");


    cout << "����� �1: " << first_ocean << endl;
    cout << "����� �2: " << second_ocean << endl << endl;
    cout << "���� �1: " << first_sea << endl;
    cout << "���� �2: " << second_sea << endl << endl;
    cout << "����� �1: " << first_bay << endl;
    cout << "����� �2: " << second_bay << endl << endl;
    cout << "���� �3: " << third_sea << endl;
    return 0;
}