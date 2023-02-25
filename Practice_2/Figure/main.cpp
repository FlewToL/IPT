#include "Figure.h";
#include <iostream>;
#include <cmath>;

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Figure mas[3]{
        Figure(0, 0, 0, 0, 0, 0, 0, 0),
        Figure(0, 0, 0, 0, 0, 0, 0, 0),
        Figure(0, 0, 0, 0, 0, 0, 0, 0)
    };

    float x1, x2, x3, x4, y1, y2, y3, y4;

    for (int i = 0; i < 3; i++) {
        cout << "������� ������� a = [x1, y1]; b = [x2, y2]; c = [x3, y3]; d = [x4, y4] ��� ��������������� �" << i + 1 << " ����� ������: " << endl;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        mas[i] = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
        cout << "��������������� � " << i + 1 << " ��������� �������: " << x1 << y1 << ", " << x2 << y2 << ", " << x3 << y3 << ", " << x4 << y4 << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "������ ��������������� �" << i + 1 << ":" << endl;
        mas[i].show();
        cout << "������������� ��������������: " << mas[i].is_prug() << endl;
        cout << "������: " << mas[i].is_square() << endl;
        cout << "����: " << mas[i].is_romb() << endl;
        cout << "������ � ����������: " << mas[i].is_in_circle() << endl;
        cout << "������ ������ ����������: " << mas[i].is_out_circle() << endl;
        cout << endl;
    }
    return 0;
}