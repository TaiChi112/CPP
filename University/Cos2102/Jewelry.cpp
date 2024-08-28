#include <iostream>

using namespace std;

class Jewelry
{
private:
    double price;
    int madeForm; // 1. gold, 2. silver 3. platinum
public:
    Jewelry() : price(990) {}

    Jewelry(double price, int madeForm) : price(price), madeForm(madeForm) {}
};