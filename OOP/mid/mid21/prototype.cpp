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
Cake::~Cake() {}
int Cake::getFlavor() { return flavor; }
int Cake::getType() { return type; }
bool Cake::getTopping() { return topping; }
void Cake::setFlavor(int f) { flavor = (f >= 1 && f <= 3 ? f : 1); }
void Cake::setType(int ty) { type = (ty >= 1 && ty <= 2 ? ty : 1); }
void Cake::setTopping(bool t) { topping = t; }
void Cake::set(int f, int ty, bool t)
{
    flavor = (f >= 1 && f <= 3 ? f : 1);
    type = (ty >= 1 && ty <= 2 ? ty : 1);
    topping = t;
}
void Cake::show()
{
    std::cout << "Flavor : ";
    switch (flavor)
    {
    case 1:
        std::cout << "Vanilla";
        break;
    case 2:
        std::cout << "Chocolate";
        break;
    case 3:
        std::cout << "Coconut";
        break;
    }
    std::cout << std::endl
              << "Type : ";
    switch (type)
    {
    case 1:
        std::cout << "Butter";
        break;
    case 2:
        std::cout << "Foam";
        break;
    case 3:
        std::cout << "Mousse";
        break;
    }
    std::cout << std::endl
              << "Topping : " << (topping ? "Yes" : "No") << std::endl;
    Dessert::show();
}
