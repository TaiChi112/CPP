#ifndef VEGETABLE_H
#define VEGETABLE_H

#include <iostream>
using namespace std;
class Vegetable
{
    string name;

public:
    Vegetable() {}
    Vegetable(string name)
    {
        setNameVegetable(name);
    }
    void setNameVegetable(string name)
    {
        this->name = name;
    }
    string getNameVegetable()
    {
        return name;
    }
    void showNameVegetable()
    {
        cout << "You have chosen vegetable : " << name << endl;
    }
};

#endif // VEGETABLE_H