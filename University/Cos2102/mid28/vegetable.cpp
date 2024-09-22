#include <iostream>
using namespace std;

class Vegetable
{
    string name;

public:
    Vegetable() {}
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    void showName()
    {
        cout << "Name of your vegetable : " << name << endl;
    }
};