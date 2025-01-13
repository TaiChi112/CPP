#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <iostream>

class PencilSharpener
{
    enum Color
    {
        BLUE = 1,
        WHITE,
        GREEN,
        PINK,
        BLACK
    };
    double price;

public:
    PencilSharpener();
    PencilSharpener(int, double);
    ~PencilSharpener();
    void set(int, double);
    void setColor(int);
    void setPrice(double);
    int getColor();
    double getPrice();
    void show();
};

class ElectricPencilSharpener : public PencilSharpener
{
    int type;

public:
    ElectricPencilSharpener();
    ElectricPencilSharpener(int, int, double);
    ~ElectricPencilSharpener();
    void set(int, int, double);
    void setType(int);
    int getType();
    void show();
};

class ManualPencilSharpener : public PencilSharpener
{
    bool box;

public:
    ManualPencilSharpener();
    ManualPencilSharpener(bool, int, double);
    ~ManualPencilSharpener();
    void set(bool, int, double);
    void setBox(bool);
    bool getBox();
    void show();
};
class PrismSharpener : public ManualPencilSharpener
{
    int hand;

public:
    PrismSharpener();
    PrismSharpener(int, bool, int, double);
    ~PrismSharpener();
    void set(int, bool, int, double);
    void setHand(int);
    int getHand();
    void show();
};
class PlanetarySharpener : public ManualPencilSharpener
{
    bool mount;

public:
    PlanetarySharpener();
    PlanetarySharpener(bool, bool, int, double);
    ~PlanetarySharpener();
    void set(bool, bool, int, double);
    void setMount(bool);
    bool getMount();
    void show();
};
#endif // PROTOTYPE_H