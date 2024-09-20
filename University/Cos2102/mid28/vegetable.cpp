#include <iostream>
using namespace std;

class Vegetable
{
    string name;

public:
    Vegetable();
    ~Vegetable();
    void setName(string name);
    string getName();
    void show();
};
Vegetable::Vegetable()
{
    this->setName("null");
}
void Vegetable::setName(string name)
{
    this->name = name;
}
string Vegetable::getName()
{
    return name;
}
void Vegetable::show()
{
    cout << "Vegetable name : " << getName() << endl;
}