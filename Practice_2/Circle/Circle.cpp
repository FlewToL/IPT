#include "Circle.h"
#include <iostream>
#include <cmath>

using namespace std;

Circle :: Circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
};

void Circle :: set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;

};

float Circle::square() {
	double s = 3.14159 * pow(radius, 2);
	return s;
};

bool Circle::triangle_around(float a, float b, float c) {
	double p, triangle_s;
	p = a + b + c;
	triangle_s = sqrt(p * (p - a) * (p - b) * (p - c));
	float r = (triangle_s) / ((a + b + c) / 2);
	if (r == radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::triangle_in(float a, float b, float c) {
	double p, triangle_s;
	p = a + b + c;
	triangle_s = sqrt(p * (p - a) * (p - b) * (p - c));
	float r = (a * b * c) / (4 * triangle_s);
	if (r == radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::circle_check(float r, float x, float y) {
	float x_d = abs(x - x_center);
	float y_d = abs(y - y_center);
	float d = sqrt(pow(x_d, 2) + pow(y_d, 2));
	if (d < (radius + r)) {
		return true;
	}
	else {
		return false;
	}
}

void Circle::show() {
	cout << "Радиус: " << radius << endl;
	cout << "Центр по X: " << x_center << endl;
	cout << "Центр по Y: " << y_center << endl;
};
