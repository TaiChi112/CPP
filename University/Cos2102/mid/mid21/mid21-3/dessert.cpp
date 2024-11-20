#include <iostream>
#include "dessert.h"

using namespace std;

Dessert::Dessert() : price(0) {}
Dessert::Dessert(int price) : price(price) {}
Dessert::~Dessert() { cout << "delete dessert" << endl; };
void Dessert::showDessert() { cout << "dessert price : " << this->price << endl; }
int Dessert::getPrice() { return this->price; }
