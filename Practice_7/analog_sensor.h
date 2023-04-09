class AnalogSensor {
private:
    int sensor_pin;
    int sensor_val;

public:
    AnalogSensor(int sensor_pin);
    void setSensorPin(int pin);
    int getSensorPin();
    int getSensorVal();
    void readSensor();
};
