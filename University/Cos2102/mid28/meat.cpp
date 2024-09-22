#include <iostream>
using namespace std;

class Meat
{
    int type;

public:
    Meat()
    {
    }
    void setType(int type)
    {
        this->type = (type >= 1 && type <= 5) ? type : 1;
    }
    int getType()
    {
        return type;
    }
    void showType();
};
void Meat::showType()
{
    switch (this->type)
    {
    case 1:
        cout << "You have chosen the meat : Pork" << endl;
        break;
    case 2:
        cout << "You have chosen the meat : Chicken" << endl;
        break;
    case 3:
        cout << "You have chosen the meat : Fish" << endl;
        break;
    case 4:
        cout << "You have chosen the meat : Squid" << endl;
        break;
    case 5:
        cout << "You have chosen the meat : Shellfish" << endl;
        break;
    default:
        cout << "Invalid type" << endl;
        break;
    }
}