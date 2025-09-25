#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <iostream>
using namespace std;

class Fabric
{
    int color; // white,green,brown,gray

public:
    Fabric();
    Fabric(int color);
    ~Fabric();
    void setColor(int color);
    int getColor();
    void show();
};
class Cotton : public Fabric
{
    int number; // 20,32,40
public:
    Cotton();
    Cotton(int color, int number);
    ~Cotton();
    void setNumber(int number);
    int getNumber();
    void show();
};
class Linen : public Fabric
{
    int grade; // good,medium,fair
public:
    Linen();
    Linen(int color, int grade);
    ~Linen();
    void setGrade(int grade);
    int getGrade();
    void show();
};
class Clothes
{
    double price;
    int size;
    Fabric *fabric;

public:
    Clothes();
    Clothes(double price, int size, Fabric *fabric);
    ~Clothes();
    void setPrice(double price);
    double getPrice();
    void setSize(int size);
    int getSize();
    void setFabric(Fabric *fabric);
    Fabric *getFabric();
    void show();
};
class Tops : public Clothes
{
    int type; // polo,shirt,t-shirt
public:
    Tops();
    Tops(double price, int size, Fabric *fabric, int type);
    ~Tops();
    void setType(int type);
    int getType();
    void show();
};
class Pants : public Clothes
{
    int lengtj; // short,three-quarter,four-quarter,long
public:
    Pants();
    Pants(double price, int size, Fabric *fabric, int lengtj);
    ~Pants();
    void setLengtj(int lengtj);
    int getLengtj();
    void show();
};
class Size
{
    int width;
    int length;
    int height;

public:
    Size();
    Size(int width, int length, int height);
    ~Size();
    void setWidth(int width);
    int getWidth();
    void setLength(int length);
    int getLength();
    void setHeight(int height);
    int getHeight();
    void show();
};
class Wardrobe
{
    Size size;
    int numDoor;
    Clothes **clothes;
    int numClothes;

public:
    Wardrobe();
    Wardrobe(Size size, int numDoor);
    ~Wardrobe();
    void setSize(Size size);
    Size getSize();
    void setNumDoor(int numDoor);
    int getNumDoor();
    void addClothes(Clothes *clothes);
    void show();
};
#endif // PROTOTYPE_H