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
class Meat
{
    int type;
};

class Vegetable
{
    int type;
};