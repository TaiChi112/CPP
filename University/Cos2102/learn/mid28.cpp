#include <iostream>
using namespace std;

class Food
{
    double price;
    int meatNum;
    int vegNum;
    Meat *meat;
    Vegetable *veg;
};
class Soup : public Food
{
    int type;
    int spicyLevel;
};
class Kaopada : public Food
{
    int type;
};
class Meat
{
    int type;
};

class Vegetable
{
    int type;
};
