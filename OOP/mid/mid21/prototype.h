#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <iostream>
class Dessert
{
    int price;

public:
    Dessert();
    Dessert(int);
    ~Dessert();
    void show();
    int getPrice();
    void setPrice(int);
};
class Cake : public Dessert
{
    int flavor;
    int type;
    bool topping;

public:
    Cake();
    Cake(int, int, bool, int);
    ~Cake();
    void show();
    int getFlavor();
    int getType();
    bool getTopping();
    void setFlavor(int);
    void setType(int);
    void setTopping(bool);
    void set(int, int, bool);
};
class IceCream : public Dessert
{
    int flavor;
    bool topping;

public:
    IceCream();
    IceCream(int, bool, int);
    ~IceCream();
    void show();
    int getFlavor();
    bool getTopping();
    void setFlavor(int);
    void setTopping(bool);
};
#endif // PROTOTYPE_H