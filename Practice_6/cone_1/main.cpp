#include "Cone.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Cone mas[2]{
        Cone(3, 7),
        Cone(1, 2, 3, 5, 10)
    };

    for (int i = 0; i < 2; i++) {
        cout << "Конус #" << i + 1 << ": " << endl << mas[i];
        cout << "Площадь поверхности: " << mas[i].square() << endl;
        cout << "Объем: " << mas[i].volume() << endl << endl;
    }
}
