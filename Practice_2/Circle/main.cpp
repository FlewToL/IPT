#include "Circle.h";
#include <iostream>;
#include <cmath>;

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    Circle mas[3]{
        Circle (0, 0, 0),
        Circle (0, 0, 0),
        Circle (0, 0, 0)
    };

    float r, x, y;
    float r2, x2, y2;
    double a, b, c;

    for (int i = 0; i < 3; i++) {
        cout << "������� r, x � y ��� ����� � " << i + 1 << " ����� ������: " << endl;
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
        cout << "����� � " << i + 1 << " �������� ������ r = " << r << " � ���������� ������ x = " << x << " � y = " << y << endl << endl;
    }

    cout << "������� ������� a, b � c ��� ������������ ����� ������: " << endl;
    cin >> a >> b >> c;

    cout << "������� r2, x2 � y2 ��� ����� CIRCLE ������ circle_check ����� ������: " << endl;
    cin >> r2 >> x2 >> y2;

    for (int i = 0; i < 3; i++) {
        cout << "������ ����� �" << i + 1 << ":" << endl;
        mas[i].show();
        cout << "�������: " << mas[i].square() << endl;
        cout << "���� ������ ������ ������������: " << mas[i].triangle_around(a, b, c) << endl;
        cout << "���� ������ � �����������: " << mas[i].triangle_in(a, b, c) << endl;
        cout << "������������ �� � ������ CIRCLE: " << mas[i].circle_check(r2, x2, y2) << endl;
        cout << endl;

    }
    return 0;
}