#include <iostream>
#include "dessert.h"

using namespace std;

Dessert::Dessert() : price(90) {}
// Dessert::Dessert(int price) : price(price) {}
Dessert::Dessert(int price)
{
    setPrice(price);
}
Dessert::~Dessert() { cout << "delete dessert" << endl; };
void Dessert::showDessert() { cout << "dessert price : " << this->price << endl; }
int Dessert::getPrice() { return this->price; }
void Dessert::setPrice(int price)
{
    if (price < 10)
    {
        this->price = 10;
    }
    else
    {
        this->price = price;
    }
}
