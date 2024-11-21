#include "icecream.h"
#include "dessert.h"
#include <iostream>
using namespace std;

Icecream::Icecream() : flavor(3), topping(false), Dessert(30) {};
Icecream::Icecream(int price, int flavor, bool topping) : Dessert(price), flavor(flavor), topping(topping) {}
Icecream::~Icecream() { cout << "delete Icecream" << endl; }
void Icecream::showIcecream()
{
    cout << "| icecream price : " << this->getPrice() << endl
         << "| flavor : " << this->getFlavor() << endl
         << "| topping : " << this->getTopping() << endl;
}
int Icecream::getFlavor() { return this->flavor; }
bool Icecream::getTopping() { return this->topping; }