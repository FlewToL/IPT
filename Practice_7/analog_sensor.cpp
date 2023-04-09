#include <string>
#include "analog_sensor.h"

using namespace std;

AnalogSensor::AnalogSensor(int sensor_pin) {
    this->sensor_pin = sensor_pin;
}

int AnalogSensor::getSensorVal() {
    return sensor_val;
}

int AnalogSensor::getSensorPin() {
    return sensor_pin;
}

void AnalogSensor::setSensorPin(int p) {
    this->sensor_pin = p;
}

void AnalogSensor::readSensor() {
    sensor_val = 0;
}