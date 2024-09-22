#include <iostream>
#include "meat.cpp"
#include "vegetable.cpp"

using namespace std;

class Food
{
    double price;
    Meat *meat;

public:
    Food()
    {
        setPrice(99.00);
    }
    void setMeat(Meat *meat)
    {
        this->meat = meat;
    }
    Meat *getMeat()
    {
        return meat;
    }

    void setPrice(double price)
    {
        this->price = price;
    }
    double getPrice()
    {
        return price;
    }
    void showPrice()
    {
        cout << "Price of your food : " << price << endl;
    }
};