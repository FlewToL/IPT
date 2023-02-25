#include "Figure.h"
#include <iostream>

using namespace std;

Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
	x1 = x1;
	x2 = x2;
	x3 = x3;
	x4 = x4;
	y1 = y1;
	y2 = y2;
	y3 = y3;
	y4 = y4;

	float D_1 = side(x1, x3, y1, y3);
	float D_2 = side(x2, x4, y2, y4);

	side_1 = side(x1, x2, y1, y2);
	side_2 = side(x2, x3, y2, y3);
	side_3 = side(x3, x4, y3, y4);
	side_4 = side(x1, x4, y1, y4);

	float coords_summ = (x1 + x3) * (x2 + x4) + (y1 * y3) * (y2 * y4);
	float coords_define = sqrt(pow(x1 + x3, 2) + pow(y1 + y3, 2)) * sqrt(pow(x2 + x4, 2) + pow(y2 + y4, 2));
	float cos = coords_summ / coords_define;
	float sin = sqrt(abs(1 - pow(cos, 2)));

	P = side_1 + side_2 + side_3 + side_4;
	S = 0.5 * D_1 * D_2 * sin;
}

float Figure::side(float x1, float x2, float y1, float y2) {
	float x1_2 = abs(x2 - x1);
	float y1_2 = abs(y2 - y1);
	float side = sqrt(pow(x1_2, 2) + pow(y1_2, 2));
	return side;
}

void Figure::show() {
	cout << "Длина стороны: " << side_1 << ", " << side_2 << ", " << side_3 << ", " << side_4 << ";" << endl;
	cout << "Периметр: " << P << endl;
	cout << "Площадь: " << S << endl;
}

bool Figure::is_prug() {
    float sin = S / (side_1 * side_2);
    double degrees = asin(sin);
    return (degrees > 89.7 && degrees < 90.3);
}


bool Figure::is_square() {
    bool is_prug_bool = is_prug();
    return ((side_1 == side_2 == side_3 == side_4) && is_prug_bool);
}

bool Figure::is_romb() {
    bool is_prug_bool = is_prug();
    if ((side_1 == side_2 == side_3 == side_4) && (is_prug_bool == false)) {
        return true;
    }
    else {
        return false;
    }
}

bool Figure::is_in_circle() {
    float P_1 = P / 2;
    float S_1 = sqrt((P_1 - side_1) * (P_1 - side_2) * (P_1 - side_3) * (P_1 - side_4));
    return (S_1 == S);
}

bool Figure::is_out_circle() {
	return (side_1 + side_3 == side_2 + side_4);
}