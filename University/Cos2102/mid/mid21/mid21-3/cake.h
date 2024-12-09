#ifndef CAKE_H
#define CAKE_H
#include "dessert.h"

class Cake : public Dessert
{
    int flavor;
    int type;
    bool topping;

public:
    Cake();
    Cake(int,int,int,bool);
    ~Cake();
    Cake addCake(Cake,Cake);
    void showCake();
    int getFlavor();
    int getType();
    bool getTopping();
};

#endif // CAKE_H