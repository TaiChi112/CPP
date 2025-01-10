#include <iostream>
#include "prototype.h"

Dessert::Dessert() : price(90) {}
Dessert::Dessert(int p) : price((p > 10 ? p : 10)) {}
Dessert::~Dessert() {}
void Dessert::show() { std::cout << "Price : " << getPrice() << std::endl; }
int Dessert::getPrice() { return price; }
void Dessert::setPrice(int p) { price = (p > 10 ? p : 10); }

Cake::Cake() : Dessert(), flavor(1), type(1), topping(false) {}
Cake::Cake(int f, int ty, bool t, int p) : Dessert(p), flavor((f >= 1 && f <= 3 ? f : 1)), type((ty >= 1 && ty <= 2 ? ty : 1)), topping(t) {}