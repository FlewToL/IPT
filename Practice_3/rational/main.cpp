#include "rational.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "ru");
    vector<rational> rat;

    int n;

    cout << "Введите кол-во рациональных чисел: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Введите рациональное число #" << i+1 << " (ЧИСЛИТЕЛЬ/ЗНАМЕНАТЕЛЬ) разделяя их пробелом (Пример: 1/2 -> 1 2) : ";
        cin >> a >> b;
        rat.push_back(rational(a, b));
    }

    for (int i = 0; i < n; i++) {

        int a1, b1;
        cout << "Введите рациональное число для сравнения с ранее введенными рациональным числом #" << i + 1 << " (";
        rat[i].show();
        cout << ") : ";
        cin >> a1 >> b1;

        rational rational_1 = rational(a1, b1);

        rational summa = rat[i] + rational_1;

        cout << "Сумма данной пары рациональных чисел : " << summa.a << "/" << summa.b << endl;

        rational raznost = rat[i] - rational_1;

        cout << "Разность данной пары рациональных чисел : " << raznost.a << " / " << raznost.b << endl;

        rational increment = rat[i]++;

        cout << "Увеличение числителя рационального чисила на 1 : " << increment.a << "/" << increment.b << endl;

        cout << "Равны ли рациональные числа данной пары? : " << (rational_1 == rat[i]) << endl;
        cout << "Первое рациональное число пары больше чем второе? : " << (rational_1 > rat[i]) << endl;
    }
}