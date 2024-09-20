#include <iostream>
#include "meat.cpp"
#include "vegetable.cpp"
using namespace std;

class Food
{
    double price;
    Meat *meat;
    Vegetable *vegetable;
    int meatNum;
    int vegNum;

public:
    Food();
    ~Food();
    void setPrice(double price);
    double getPrice();
    void show();
};

Food::Food()
{
    this->setPrice(99.0);
}
void Food::setPrice(double price)
{
    if (price >= 0)
        this->price = price;
    else
        this->price = 0;
}
double Food::getPrice()
{
    return price;
}
void Food::show()
{
    cout << "price: " << getPrice() << endl;
}

class Soup
{
    int type;
    int spicyLevel;

public:
};
class Kaopad
{
    int type;

public:
};