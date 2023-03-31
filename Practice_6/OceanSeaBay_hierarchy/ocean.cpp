#include "Ocean.h"
#include "sstream"

using namespace std;

Ocean::Ocean() {
    name = "";
    location = "";
    size = 0;
    depth = 0;
    square = 0;
    temp = 0;
}

Ocean::Ocean(string n, string l, double s, double d, double sq, double t) {
    name = n;
    location = n;
    size = s;
    depth = d;
    square = sq;
    temp = t;
}

void Ocean::setName(string n) {
    name = n;
}

void Ocean::setLocation(string l) {
    location = l;
}

void Ocean::setSize(double s) {
    size = s;
}

void Ocean::setDepth(double d) {
    depth = d;
}

void Ocean::setSquare(double sq) {
    square = sq;
}

void Ocean::setTemp(double t) {
    temp = t;
}

string Ocean::getName() {
    return name;
}

string Ocean::getLocation() {
    return location;
}

double Ocean::getSize() {
    return size;
}

double Ocean::getDepth() {
    return depth;
}

double Ocean::getSquare() {
    return square;
}

double Ocean::getTemp() {
    return temp;
}

ostream& operator<<(ostream& stream, Ocean& obj) {
    setlocale(LC_ALL, "ru");
    stream << "Название океана: " << obj.name << endl;
    stream << "Расположение: " << obj.location << endl;
    stream << "Размер: " << obj.size << endl;
    stream << "Глубина: " << obj.depth << endl;
    stream << "Площадь поверхности: " << obj.square << endl;
    stream << "Температура: " << obj.temp << endl;
    return stream;
}

istream& operator>>(istream& stream, Ocean& obj) {
    stream >> obj.name;
    stream >> obj.location;
    stream >> obj.size;
    stream >> obj.depth;
    stream >> obj.square;
    stream >> obj.temp;
    return stream;
}