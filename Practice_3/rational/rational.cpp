#include "rational.h"
#include <iostream>
#include <numeric>

using namespace std;

rational::rational() {
	a = 0;
	b = -1;
}

rational::rational(int a1, int b1) {
	a = a1;
	b = b1;

	if (b == 0) {
		cout << "Знаменатель равен нулю." << endl;
		return;
	}

	int nodd = nod(abs(a1), abs(b1));
	a /= nodd;
	b /= nodd;

	if (b < 0) {
		b *= -1;
		a *= -1;
	}
}

void rational::set(int a1, int b1) {
	a = a1;
	b = b1;

	if (b == 0) {
		cout << "Знаменатель равен нулю." << endl;
		return;
	}

	int nodd = nod(abs(a1), abs(b1));
	a /= nodd;
	b /= nodd;

	if (b < 0) {
		b *= -1;
		a *= -1;
	}
}

void rational::set_rat(int a1, int b1) {
	a = a1;
	b = b1;

	if (b == 0) {
		cout << "Знаменатель равен нулю." << endl;
		return;
	}
}

int rational::nod(int a1, int b1) {
	if (b1 == 0)
		return a1;
	return nod(b1, a1 % b1);
}

void rational::show() {
	cout << a << "/" << b;
	
}

rational rational::operator+(rational rat) {
	rational rati;

	int sec_var = b;

	this->set_rat(a * rat.b, b * rat.b);
	rati.set_rat(rat.a * sec_var, rat.b * sec_var);

	rati.set(this->a + rat.a, this->b);

	return rati;
}

rational operator-(rational rat_0, rational rat_1) {
	rational rati;

	int sec_var = rat_0.b;

	rat_0.set_rat(rat_0.a * rat_1.b, rat_0.b * rat_1.b);
	rat_1.set_rat(rat_1.a * sec_var, rat_1.b * sec_var);

	rati.set(rat_0.a - rat_1.a, rat_0.b);

	return rati;
}

rational rational::operator++() {
	rational var;
	var.set_rat(a + b, b);
	return var;
}

rational rational::operator++(int) {
	rational var;
	var.set_rat(a + b, b);
	return var;
}

bool rational::operator==(rational r) {
	rational var;

	var.set_rat(this->a, this->b);

	return (this->a == var.a && this->b == var.b);
}

bool rational::operator>(rational rat) {
	rational rati;

	int sec_var = b;

	this->set_rat(a * rat.b, b * rat.b);
	rati.set_rat(rat.a * sec_var, rat.b * sec_var);

	rati.set(this->a + rat.a, this->b);

	return (this->a > rat.a);
}

void rational::operator=(rational rat) {
	this->set_rat(rat.a, rat.b);
}