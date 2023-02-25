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
        cout << "Введите стороны a = [x1, y1]; b = [x2, y2]; c = [x3, y3]; d = [x4, y4] для четырёхугольника №" << i + 1 << " через пробел: " << endl;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        mas[i] = Figure(x1, x2, x3, x4, y1, y2, y3, y4);
        cout << "Четырёхугольнику № " << i + 1 << " присвоены стороны: " << x1 << y1 << ", " << x2 << y2 << ", " << x3 << y3 << ", " << x4 << y4 << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "Данные четырёхугольника №" << i + 1 << ":" << endl;
        mas[i].show();
        cout << "Прямоугольный четырёхугольник: " << mas[i].is_prug() << endl;
        cout << "Квадат: " << mas[i].is_square() << endl;
        cout << "Ромб: " << mas[i].is_romb() << endl;
        cout << "Вписан в окружность: " << mas[i].is_in_circle() << endl;
        cout << "Описан вокруг окружности: " << mas[i].is_out_circle() << endl;
        cout << endl;
    }
    return 0;
}