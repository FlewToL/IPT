#include "ostream"

using namespace std;

class Ocean {
    string name;
    string location;
    double size;
    double depth;
    double square;
    double temp;

public:
    Ocean();
    Ocean(string n, string l, double s, double d, double sq, double t);
    void setName(string name);
    void setLocation(string location);
    void setSize(double size);
    void setDepth(double depth);
    void setSquare(double square);
    void setTemp(double temp);

    virtual string getName();
    string getLocation();
    double getSize();
    double getDepth();
    double getSquare();
    double getTemp();

    friend ostream& operator << (ostream& stream, Ocean& obj);
    friend istream& operator >> (istream& stream, Ocean& obj);
};
