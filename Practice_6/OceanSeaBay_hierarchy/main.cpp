#include <iostream>
#include "bay.h"

using namespace std;

int main() {
    Ocean first_ocean("Атлантический", "Между Гренландией и Исландией", 106450000, 3640, 31000000, 15);
    Ocean second_ocean("Тихий", "Между Евразией и Австралией", 165250000, 4650, 64000000, 15);

    Sea first_sea("Берингово", "Вдоль Евразии", 3800000, 1547, 2000000, 10);
    Sea second_sea("Ирландское", "Ирландия", 100000, 43, 46007, 7);

    Bay first_bay("Бристольский", "Великобритания", 230000, 50, 29000, 15);
    Bay second_bay("Аляскинский", "Северная Америка", 1533000, 4000, 1500000, 5);

    Sea third_sea(&first_ocean, "Тихий");


    cout << "Океан №1: " << first_ocean << endl;
    cout << "Океан №2: " << second_ocean << endl << endl;
    cout << "Море №1: " << first_sea << endl;
    cout << "Море №2: " << second_sea << endl << endl;
    cout << "Залив №1: " << first_bay << endl;
    cout << "Залив №2: " << second_bay << endl << endl;
    cout << "Море №3: " << third_sea << endl;
    return 0;
}