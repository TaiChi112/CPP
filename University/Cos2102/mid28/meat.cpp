#include <iostream>
using namespace std;
class Meat
{
    int type;

public:
    Meat();
    ~Meat();
    void setType(int type);
    int getType();
    void show();
};
Meat::Meat()
{
    this->setType(0);
}
void Meat::setType(int type)
{
    this->type = type;
}
int Meat::getType()
{
    return type;
}
void Meat::show()
{
    cout << "meat type: " << getType() << endl;
}