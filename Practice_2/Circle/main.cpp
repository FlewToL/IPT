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
        cout << "Введите r, x и y для круга № " << i + 1 << " через пробел: " << endl;
        cin >> r >> x >> y;
        mas[i].set_circle(r, x, y);
        cout << "Кругу № " << i + 1 << " присвоен радиус r = " << r << " и координаты центра x = " << x << " и y = " << y << endl << endl;
    }

    cout << "Введите стороны a, b и c для треугольника через пробел: " << endl;
    cin >> a >> b >> c;

    cout << "Введите r2, x2 и y2 для круга CIRCLE метода circle_check через пробел: " << endl;
    cin >> r2 >> x2 >> y2;

    for (int i = 0; i < 3; i++) {
        cout << "Данные круга №" << i + 1 << ":" << endl;
        mas[i].show();
        cout << "Площадь: " << mas[i].square() << endl;
        cout << "Круг описан вокруг треугольника: " << mas[i].triangle_around(a, b, c) << endl;
        cout << "Круг вписан в треугольник: " << mas[i].triangle_in(a, b, c) << endl;
        cout << "Пересекается ли с кругом CIRCLE: " << mas[i].circle_check(r2, x2, y2) << endl;
        cout << endl;

    }
    return 0;
}