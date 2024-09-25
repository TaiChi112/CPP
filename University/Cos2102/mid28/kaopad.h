#ifndef KAOPAD_H
#define KAOPAD_H
#include "food.h"

#include <iostream>
using namespace std;

class Kaopad : public Food
{
    int type;

public:
    void setTypeKaopad(int type)
    {
        this->type = type;
    }
    int getTypeKaopad()
    {
        return type;
    }
    void showTypeKaopad();
};
void Kaopad::showTypeKaopad()
{
    switch (this->type)
    {
    case 1:
        cout << "You have chosen a small plate " << endl;
        break;
    case 2:
        cout << "You have chosen a big plate " << endl;
        break;
    default:
        break;
    }
}
#endif // KAOPAD_H