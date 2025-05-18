#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <iostream>

class PencilSharpener
{
    int color;
    double price;
    int num;

public:
    PencilSharpener();
    PencilSharpener(int, double, int);
    ~PencilSharpener();
    void set(int, double, int);
    void setColor(int);
    void setPrice(double);
    void setNum(int);
    int getColor();
    double getPrice();
    int getNum();
    void show();
};

class EletricSharpener : public PencilSharpener
{
    int type;

public:
    EletricSharpener();
    EletricSharpener(int, int, double, int);
    ~EletricSharpener();
    void set(int, int, double, int);
    void setType(int);
    int getType();
    void show();
};

class ManualPencilSharpener : public PencilSharpener
{
    bool box;

public:
    ManualPencilSharpener();
    ManualPencilSharpener(bool, int, double, int);
    ~ManualPencilSharpener();
    void set(bool, int, double, int);
    void setBox(bool);
    bool getBox();
    void show();
};
class PrismSharpener : public ManualPencilSharpener
{
    int hand;

public:
    PrismSharpener();
    PrismSharpener(int, bool, int, double, int);
    ~PrismSharpener();
    void set(int, bool, int, double, int);
    void setHand(int);
    int getHand();
    void show();
};
class PlanetarySharpener : public ManualPencilSharpener
{
    bool mount;

public:
    PlanetarySharpener();
    PlanetarySharpener(bool, bool, int, double, int);
    ~PlanetarySharpener();
    void set(bool, bool, int, double, int);
    void setMount(bool);
    bool getMount();
    void show();
};
#endif // PROTOTYPE_H