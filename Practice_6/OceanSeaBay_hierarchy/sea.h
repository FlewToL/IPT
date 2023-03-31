#include "ocean.h"

class Sea :
    
    public Ocean {
private:
    bool fromOcean;
    bool fromSea;
    Sea* parent;
    Ocean* _ocean;
    string name;
public:
    Sea();
    Sea(string n, string l, double s, double d, double sq, double t);
    Sea(Sea* obj, string n);
    Sea(Ocean* obj, string n);
    void setName(string n);
    string getName() override;
    friend ostream& operator << (ostream& stream, Sea obj);
    friend istream& operator >> (istream& stream, Sea& obj);
};