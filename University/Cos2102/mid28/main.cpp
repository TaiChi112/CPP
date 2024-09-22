#include <iostream>
#include "food.cpp"
// #include "meat.cpp"
// #include "vegetable.cpp"

using namespace std;

int main()
{
    Food f1,f2;
    f1.setPrice(100);
    f1.showPrice();
    f1.setMeat(new Meat());
    f1.getMeat()->setType(1);
    f1.getMeat()->showType();
    f2.showPrice();

    // Meat m;
    // m.setType(0);
    // m.showType();

    // Vegetable v;
    // v.setName("Potato");
    // v.showName();
    return 0;
}