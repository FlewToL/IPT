#include "Cone.h"

class Conoid : public Cone {
private:
    double radius_2;

public:
    Conoid();
    Conoid(double r1, double r2, double h);
    Conoid(double a, double b, double c, double r1, double r2, double h);
    Conoid(Cone _cone, double r2);
    double getRadius_2();
    void setRadius_2(double r2);
    double square() override;
    double volume() override;
    friend ostream& operator << (ostream& stream, Conoid obj);
    friend istream& operator >> (istream& stream, Conoid obj);
    bool operator == (const Conoid obj);
    bool operator != (const Conoid obj);
    bool operator > (const Conoid obj);
    bool operator < (const Conoid obj);
    bool operator >= (const Conoid obj);
    bool operator <= (const Conoid obj);
};
