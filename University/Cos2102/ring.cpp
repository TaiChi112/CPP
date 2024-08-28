#include <iostream>
#include "gem.cpp"
#include "jewelry.cpp"

using namespace std;

class Ring : public Jewelry
{
private:
    Gem **gems;
    int num;

public:
    Ring() : Jewelry(3000, false), gems(nullptr), num(0) {}
};