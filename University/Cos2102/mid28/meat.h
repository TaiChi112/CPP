#ifndef MEAT_H
#define MEAT_H

#include <iostream>
using namespace std;

class Meat
{
    int type;

public:
    Meat() {}
    Meat(int type)
    {
        setTypeMeat(type);
    }
    void setTypeMeat(int type)
    {
        this->type = type;
    }
    int getTypeMeat()
    {
        return type;
    }
    void showTypeMeat();
};
void Meat::showTypeMeat()
{
    switch (this->type)
    {
    case 1:
        cout << "You have chosen the meat : Pork" <<endl;
        break;
    case 2:
        cout << "You have chosen the meat : Chicken" <<endl;
        break;
    case 3:
        cout << "You have chosen the meat : Fish" <<endl;
        break;
    case 4:
        cout << "You have chosen the meat : Squid" <<endl;
        break;
    case 5:
        cout << "You have chosen the meat : ShellFish" <<endl;
        break;
    default:
        break;
    }
}
#endif // MEAT_H
