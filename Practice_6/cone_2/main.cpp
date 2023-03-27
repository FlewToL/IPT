#include "Conoid.h"
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    Conoid mas[3]{
        Conoid(1, 2, 3, 4, 5, 6),
        Conoid(1, 3, 5, 7, 9, 11),
        Conoid(2, 4, 6, 8, 10, 12)

    };

    for (int i = 0; i < 3; i++) {
        cout << "Усечённый конус #" << i + 1 << ": " << endl << mas[i];
        cout << "Площадь поверхности: " << mas[i].square() << endl;
        cout << "Объем: " << mas[i].volume() << endl << endl;
    }
}
