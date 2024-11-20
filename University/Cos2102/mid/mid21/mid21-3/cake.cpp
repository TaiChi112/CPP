#include "cake.h"
#include <iostream>
using namespace std;

Cake::Cake() : Dessert(112), flavor(1), type(1), topping(false) {}
Cake::Cake(int price, int flavor, int type, bool topping) : Dessert(price), flavor(flavor), type(type), topping(topping) {}
Cake::~Cake() { cout << "delete Cake" << endl; }

int Cake::getFlavor() { return this->flavor; }
int Cake::getType() { return this->type; }
bool Cake::getTopping() { return this->topping; }
void Cake::showCake()
{
    cout << "My cake is price : " << this->getPrice() << " my flavor is : " << this->getFlavor() << " my type is : " << this->getType() << " my topping is : " << this->getTopping() << endl;
}