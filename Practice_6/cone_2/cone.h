#include <ostream>

using namespace std;

class Cone {
private:
	double x, y, z;
	double radius;
	double height;

public:
	Cone();
	Cone(double r, double h);
	Cone(double a, double b, double c, double r, double h);
	void setCoords(double a, double b, double c);
	void setRadius(double r);
	void setHeight(double h);
	double getRadius();
	double getHeight();
	virtual double square();
	virtual double volume();
	friend ostream& operator<<(ostream& stream, Cone obj);
	double get_x();
	double get_y();
	double get_z();
};
