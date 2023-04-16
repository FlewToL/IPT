#include <iostream>
#include "digital_sensor.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int pin;
	double val, min_val, max_val, accuracy;

	DigitalSensor sensor(0, 0, 0, 0);

	cout << "\nВведите данные сенсора через пробел:\n\n1. Пин\n2. Мин.значение\n3. Макс.значение\n4. Точночть." << "\n\n";

	cin >> pin >> min_val >> max_val >> accuracy;

	while (max_val <= min_val) {
		cout << "Ошибка: минимальное значение превышает максимальное" << endl;
		cin >> max_val;
	}

	sensor.setPin(pin);
	sensor.setMinVal(min_val);
	sensor.setMaxVal(max_val);
	sensor.setAccuracy(accuracy);

	cout << "Установлены новые значения цифрового сенсора:" << "\n1. Пин: " << sensor.getPin() << "\n2. Мин. значение: " << sensor.getMinVal() << "\n3. Макс. значение: " << sensor.getMaxVal() << "\n4. Точность: " << sensor.getAccuracy() << "\n5. Диапазон: " << sensor.range(min_val, max_val) << endl;


	for (int i = 0; i < 10; i++) {
		cout << "Введите любое значение для считывания сенсором:\n";

		cin >> val;

		sensor.read(val);
	}

}


