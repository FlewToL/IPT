#include <string>
#include "digital_sensor.h"
#include <iostream>
#include <cmath>

using namespace std;

DigitalSensor::DigitalSensor(int pin, double min_val, double max_val, double accuracy) {
    this->pin = pin;
    this->min_val = min_val;
    this->max_val = max_val;
    this->accuracy = accuracy;
}

void DigitalSensor::setPin(int pin) {
    this->pin = pin;
}

void DigitalSensor::setMinVal(double min_val) {
    this->min_val = min_val;
}

void DigitalSensor::setMaxVal(double max_val) {
    this->max_val = max_val;
}

void DigitalSensor::setAccuracy(double accuracy) {
    this->accuracy = accuracy;
}

int DigitalSensor::getPin() {
    return pin;
}

double DigitalSensor::getMinVal() {
    return min_val;
}

double DigitalSensor::getMaxVal() {
    return max_val;
}


double DigitalSensor::getAccuracy() {
    return accuracy;
}

double DigitalSensor::range(double min_val, double max_val) {
    double range = max_val - min_val;
    return range;
}

double DigitalSensor::read(double val) {
    if ((val >= min_val) && (val <= max_val) && (fmod(val, accuracy) == 0)) {
        return val;
    }
    else if (fmod(val, accuracy) != 0) {
        cout << "”казано число с неверной точностью " << "(" << val << ")" << endl;
    }
    else {
        cout << "¬не диапазона " << "(" << val << ")" << endl;
    }
}