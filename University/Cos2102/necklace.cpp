#include <iostream>
#include "Jewelry.cpp"

using namespace std;

class Necklace: public Jewelry{
    private:
        bool pendant;
    public:
    Necklace() : Jewelry(22000, 1), pendant(true){}    
};