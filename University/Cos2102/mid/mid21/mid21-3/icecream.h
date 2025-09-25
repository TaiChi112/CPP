#ifndef ICECREAM_H
#define ICECREAM_H
#include "dessert.h"

class Icecream : public Dessert{
    int flavor;//vanilla, chocolate, coconut
    bool topping;// add tooping, no topping
    public:
    Icecream();
    Icecream(int,int,bool);
    ~Icecream();
    void showIcecream();
    int getFlavor();
    bool getTopping();
};

#endif // ICECREAM_H