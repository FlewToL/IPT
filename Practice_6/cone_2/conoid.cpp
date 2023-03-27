#include "Conoid.h"
#include "sstream"
#include <math.h>

using namespace std;

Conoid::Conoid() {
    setCoords(0, 0, 0);
    setRadius(0);
    radius_2 = 0;
    setHeight(0);
}

Conoid::Conoid(double r1, double r2, double h) {
    setCoords(0, 0, 0);
    setRadius(r1);
    radius_2 = r2;
    setHeight(h);
}

Conoid::Conoid(double a, double b, double c, double r1, double r2, double h) {
    setCoords(a, b, c);
    setRadius(r1);
    radius_2 = r2;
    setHeight(h);
}

double Conoid::getRadius_2() {
    return radius_2;
}

void Conoid::setRadius_2(double r2) {
    radius_2 = r2;
}

double Conoid::square() {
    double l = sqrt(getHeight() * getHeight() + (getRadius() - radius_2) * (getRadius() - radius_2));
    double b = 3.14 * (radius_2 * getRadius()) * l;
    double g = 3.14 * radius_2 * radius_2;
    return b + g;
}

double Conoid::volume() {
    return (3.14 * getHeight() / 3) * (getRadius() * getRadius() + getRadius() * radius_2 + radius_2 * radius_2);
}

ostream& operator<<(ostream& stream, Conoid obj) {
    setlocale(LC_ALL, "ru");
    stream << "Координаты: " << obj.get_x() << ", " << obj.get_y() << ", " << obj.get_z() << endl;
    stream << "Радиус 1: " << obj.getRadius() << endl;
    stream << "Радиус 2: " << obj.getRadius_2() << endl;
    stream << "Высота: " << obj.getHeight() << endl;
    return stream;
}


istream& operator>>(istream& stream, Conoid obj) {
    double a, b, c, r1, r2, h;
    stream >> a >> b >> c >> r1 >> r2 >> h;
    obj.setCoords(a, b, c);
    obj.setRadius(r1);
    obj.setRadius_2(r2);
    obj.setHeight(h);
    return stream;
}


bool Conoid::operator==(Conoid obj) {
    return (get_x() == obj.get_x() && get_y() == obj.get_y() && get_z() == obj.get_z() && getRadius() == obj.getRadius() && getRadius_2() == obj.getRadius_2() && getHeight() == obj.getHeight());
}

bool Conoid::operator!=(Conoid obj) {
    return !(*this == obj);
}

bool Conoid::operator>(Conoid obj) {
    return (square() > obj.square());
}

bool Conoid::operator<(Conoid obj) {
    return (square() < obj.square());
}

bool Conoid::operator>=(Conoid obj) {
    return (square() >= obj.square());
}

bool Conoid::operator<=(Conoid obj) {
    return (square() <= obj.square());
}

Conoid::Conoid(Cone obj, double r2) {
    setCoords(obj.get_x(), obj.get_y(), obj.get_z());
    setRadius(obj.getRadius());
    radius_2 = r2;
    setHeight(obj.getHeight());
}
