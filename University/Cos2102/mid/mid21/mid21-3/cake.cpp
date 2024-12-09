#include "cake.h"
#include <iostream>
using namespace std;

Cake::Cake() : flavor(1), type(1), topping(true), Dessert(120) {}
Cake::Cake(int price, int flavor, int type, bool topping) : Dessert(price), flavor(flavor), type(type), topping(topping) {}
Cake::~Cake() { cout << "delete Cake" << endl; }

int Cake::getFlavor() { return this->flavor; }
int Cake::getType() { return this->type; }
bool Cake::getTopping() { return this->topping; }
void Cake::showCake()
{
    cout << "cake price : " << this->getPrice() << endl
         << "flavor : " << this->getFlavor() << endl
         << "topping : " << this->getTopping() << endl;
}

Cake Cake::addCake(Cake cake1, Cake cake2){
    return Cake(cake1.getPrice() + cake2.getPrice(), cake1.getFlavor(), cake1.getType(), cake1.getTopping());
}