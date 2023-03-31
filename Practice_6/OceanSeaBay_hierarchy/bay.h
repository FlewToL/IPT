#include "sea.h"

class Bay : 
    public Ocean {
private:
    bool fromOcean;
    bool fromSea;
    Sea* parent;
    Ocean* _ocean;
    string name;
public:
    Bay();
    Bay(string n, string l, double s, double d, double sq, double t);
    Bay(Ocean& obj, string n);
    Bay(Sea& obj, string n);
    void setName(string n);
    string getName() override;
    friend ostream& operator << (ostream& stream, Bay obj);
    friend istream& operator >> (istream& stream, Bay& obj);
};