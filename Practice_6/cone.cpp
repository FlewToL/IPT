#include <iostream>
#include <math.h>

#include "Cone.h"

using namespace std;

Cone::Cone() {
	x = y = z = 0;
	radius = 0;
	height = 0;
}

Cone::Cone(double r, double h) {
	x = y = z = 0;
	radius = r;
	height = h;
}

Cone::Cone(double a, double b, double c, double r, double h) {
	x = a;
	y = b;
	z = c;
	radius = r;
	height = h;
}

void Cone::setCoords(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

void Cone::setRadius(double r) {
	radius = r;
}

void Cone::setHeight(double h) {
	height = h;
}

double Cone::getRadius() {
	return radius;
}

double Cone::getHeight() {
	return height;
}

double Cone::square() {
	double pr = sqrt(pow(height, 2) + pow(radius, 2));

	return 3.14 * radius * (radius + pr);
}

double Cone::volume() {
	return 3.14 * pow(radius, 2) * height / 3;
}

ostream& operator<<(ostream& stream, Cone cone) {
	setlocale(LC_ALL, "ru");
	stream << "Координаты: " << cone.x << ", " << cone.y << ", " << cone.z << endl;
	stream << "Радиус: " << cone.radius << endl;
	stream << "Высота: " << cone.height << endl;

	return stream;
}
