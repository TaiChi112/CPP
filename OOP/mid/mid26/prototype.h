#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <iostream>
using namespace std;

class Clothes
{
    double price;
    int size; // S, M, L, XL,

public:
    Clothes();
    Clothes(double, int);
    ~Clothes();
    double getPrice();
    int getSize();
    void setPrice(double);
    void setSize(int);
    void show();
};
class Tops : public Clothes
{
    int type; // T-shirts, shirts, polo shirts

public:
    Tops();
    Tops(double, int, int);
    ~Tops();
    int getType();
    void setType(int);
    void show();
};
class Pants : public Clothes
{
    int length; // Shorts, three-quarters pants, four-quarters pants, long pants

public:
    Pants();
    Pants(double, int, int);
    ~Pants();
    int getLength();
    void setLength(int);
    void show();
};
class Size
{
    int width;
    int length;
    int height;

public:
    Size();
    Size(int, int, int);
    ~Size();
    int getWidth();
    int getLength();
    int getHeight();
    void setWidth(int);
    void setLength(int);
    void setHeight(int);
    void show();
};
class Wardrobe
{
    Size size;
    Tops *tops;
    int numTops;
    Pants *pants;
    int numPants;

public:
    Wardrobe();
    Wardrobe(Size, Tops *, int, Pants *, int);
    void setSize(Size);
    void setTops(Tops *, int);
    void setPants(Pants *, int);
    Size getSize();
    Tops *getTops();
    Pants *getPants();
    int getNumTops();
    int getNumPants();
    void addTop(Tops);
    void addPants(Pants);
    void removeTop(int);
    void removePants(int);
    ~Wardrobe();
    void show();
};

#endif // PROTOTYPE_H