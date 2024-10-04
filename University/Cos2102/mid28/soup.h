#ifndef SOUP_H
#define SOUP_H

#include "food.h"

#include <iostream>
using namespace std;

class Soup : public Food
{
    int type;
    int spicyLevel;

public:
    Soup(){}
    Soup(int type,int spicyLevel, double price) :Food(price) {
        setTypeSoup(type);
        setSpicyLevel(spicyLevel);
    }
    void setTypeSoup(int type)
    {
        this->type = type;
    }
    void setSpicyLevel(int spicyLevel)
    {
        this->spicyLevel = spicyLevel;
    }
    int getType()
    {
        return type;
    }
    int getSpicyLevel()
    {
        return spicyLevel;
    }
    void showTypeSoup();

    void showSpicyLevel();
};
void Soup::showTypeSoup()
{
    switch (this->type)
    {
    case 1:
        cout << "You have chosen the soup : TomYum Soup" << endl;
        break;
    case 2:
        cout << "You have chosen the soup : Sour Soup" << endl;
        break;
    case 3:
        cout << "You have chosen the soup : Tom Klong Soup" << endl;
        break;
    case 4:
        cout << "You have chosen the soup : Lampshaded Soup" << endl;
        break;
    default:
        break;
    }
}

void Soup::showSpicyLevel()
{
    switch (this->spicyLevel)
    {
    case 1:
        cout << "Spicy level 1 : Not spicy" << endl;
        break;
    case 2:
        cout << "Spicy level 2 : slightly spicy" << endl;
        break;
    case 3:
        cout << "Spicy level 3 : medium spicy" << endl;
        break;
    case 4:
        cout << "Spicy level 4 : very spicy" << endl;
        break;
    default:
        break;
    }
}
#endif // SOUP_H