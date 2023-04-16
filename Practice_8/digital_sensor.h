class DigitalSensor {
private:
    int pin;
    double min_val;
    double max_val;
    double accuracy;

public:
    DigitalSensor(int pin, double min_val, double max_val, double accuracy);
    void setPin(int pin);
    void setMinVal(double min_val);
    void setMaxVal(double max_val);
    void setAccuracy(double accuracy);
    int getPin();
    double getMinVal();
    double getMaxVal();
    double getAccuracy();
    double range(double min_val, double max_val);
    double read(double val);
};
