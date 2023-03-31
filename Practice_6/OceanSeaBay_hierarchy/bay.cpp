#include "iostream"
#include "bay.h"

using namespace std;

Bay::Bay() {
    fromOcean = false;
    fromSea = false;
    parent = nullptr;
    _ocean = nullptr;
    setName("");
    setLocation("");
    setSize(0);
    setDepth(0);
    setSquare(0);
    setTemp(0);
}

Bay::Bay(string n, string l, double s, double d, double sq, double t) {
    fromOcean = false;
    fromSea = false;
    parent = nullptr;
    _ocean = nullptr;
    setName(n);
    setLocation(l);
    setSize(s);
    setDepth(d);
    setSquare(sq);
    setTemp(t);
}

Bay::Bay(Ocean& obj, string n) {
    fromOcean = true;
    fromSea = false;
    parent = nullptr;
    _ocean = (Ocean*)&obj;
    setName(n);
    setLocation(obj.getLocation());
    setSize(obj.getSize());
    setDepth(obj.getDepth());
    setSquare(obj.getSquare());
    setTemp(obj.getTemp());
}

Bay::Bay(Sea& obj, string n) {
    fromOcean = false;
    fromSea = true;
    parent = (Sea*)&obj;
    _ocean = nullptr;
    setName(n);
    setLocation(obj.getLocation());
    setSize(obj.getSize());
    setDepth(obj.getDepth());
    setSquare(obj.getSquare());
    setTemp(obj.getTemp());
}

void Bay::setName(string n) {
    setlocale(LC_ALL, "ru");
    bool error = true;
    if (getName() != n) {
        error = false;
        if (fromOcean) {
            if (_ocean->getName() == n) {
                error = true;
            }
        }
        else if (fromSea) {
            if (parent->getName() == n) {
                error = true;
            }
        }
    }

    if (error) {
        cout << "Указано некорректное название моря!" << endl;
    }
    else name = n;
}

string Bay::getName() {
    return name;
}

ostream& operator<<(ostream& stream, Bay obj) {
    setlocale(LC_ALL, "ru");
    stream << "Название залива: " << obj.getName() << endl;
    stream << "Расположение: " << obj.getLocation() << endl;
    stream << "Размер: " << obj.getSize() << endl;
    stream << "Глубина: " << obj.getDepth() << endl;
    stream << "Площадь поверхности " << obj.getSquare() << endl;
    stream << "Температура: " << obj.getTemp() << endl << endl;
    return stream;
}

istream& operator>>(istream& stream, Bay& obj) {
    setlocale(LC_ALL, "ru");
    string name;
    string location;
    double size;
    double depth;
    double square;
    double temp;

    cout << "Введите название моря: ";
    stream >> name;
    obj.setName(name);

    cout << "Укажите расположение: ";
    stream >> location;
    obj.setLocation(location);

    cout << "Укажите размер: ";
    stream >> size;
    obj.setSize(size);

    cout << "Укажите глубину: ";
    stream >> depth;
    obj.setDepth(depth);

    cout << "Укажите площадь поверхности: ";
    stream >> square;
    obj.setSquare(square);

    cout << "Укажите температуру: ";
    stream >> temp;
    obj.setTemp(temp);

    return stream;
}