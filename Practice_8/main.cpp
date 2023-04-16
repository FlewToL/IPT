#include <iostream>
#include "digital_sensor.h"

using namespace std;

int main() {

	setlocale(LC_ALL, "ru");

	int pin;
	double val, min_val, max_val, accuracy;

	DigitalSensor sensor(0, 0, 0, 0);

	cout << "\n������� ������ ������� ����� ������:\n\n1. ���\n2. ���.��������\n3. ����.��������\n4. ��������." << "\n\n";

	cin >> pin >> min_val >> max_val >> accuracy;

	while (max_val <= min_val) {
		cout << "������: ����������� �������� ��������� ������������" << endl;
		cin >> max_val;
	}

	sensor.setPin(pin);
	sensor.setMinVal(min_val);
	sensor.setMaxVal(max_val);
	sensor.setAccuracy(accuracy);

	cout << "����������� ����� �������� ��������� �������:" << "\n1. ���: " << sensor.getPin() << "\n2. ���. ��������: " << sensor.getMinVal() << "\n3. ����. ��������: " << sensor.getMaxVal() << "\n4. ��������: " << sensor.getAccuracy() << "\n5. ��������: " << sensor.range(min_val, max_val) << endl;


	for (int i = 0; i < 10; i++) {
		cout << "������� ����� �������� ��� ���������� ��������:\n";

		cin >> val;

		sensor.read(val);
	}

}

