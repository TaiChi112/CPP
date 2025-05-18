#include "prototype.h"
#include <iostream>
using namespace std;

Clothes::Clothes() : price(99.00), size(2) {}
Clothes::Clothes(double p, int s) : price(p), size(s) {}
Clothes::~Clothes() {}
double Clothes::getPrice() { return price; }
int Clothes::getSize() { return size; }
void Clothes::setPrice(double p) { price = p; }
void Clothes::setSize(int s) { size = s; }
void Clothes::show()
{
    switch (this->getSize())
    {
    case 1:
        cout << "Size: S ";
        break;
    case 2:
        cout << "Size: M ";
        break;
    case 3:
        cout << "Size: L ";
        break;
    case 4:
        cout << "Size: XL ";
        break;
    default:
        cout << "Size: M ";
        break;
    }
    cout << "Price: " << getPrice() << " ]" << endl;
}

Tops::Tops() : Clothes(199.00, 2), type(1) {}
Tops::Tops(double p, int s, int t) : Clothes(p, s), type(t) {}
Tops::~Tops() {}
int Tops::getType() { return type; }
void Tops::setType(int t) { type = t; }
void Tops::show()
{
    switch (this->getType())
    {
    case 1:
        cout << "Type: T-Shirt ";
        break;
    case 2:
        cout << "Type: Shirt ";
        break;
    case 3:
        cout << "Type: Polo Shirt ";
        break;
    default:
        cout << "Type: T-Shirt ";
        break;
    }
    Clothes::show();
}

Pants::Pants() : Clothes(259.00, 3), length(1) {}
Pants::Pants(double p, int s, int l) : Clothes(p, s), length(l) {}
Pants::~Pants() {}
int Pants::getLength() { return length; }
void Pants::setLength(int l) { length = l; }
void Pants::show()
{
    switch (this->getLength())
    {
    case 1:
        cout << "Length: Short ";
        break;
    case 2:
        cout << "Length: Three-quarters ";
        break;
    case 3:
        cout << "Length: Four-quarters ";
        break;
    case 4:
        cout << "Length: Long ";
        break;
    default:
        cout << "Length: Short ";
        break;
    }
    Clothes::show();
}

Size::Size() : width(60), length(80), height(180) {}
Size::Size(int w, int l, int h) : width(w), length(l), height(h) {}
Size::~Size() {}
int Size::getWidth() { return width; }
int Size::getLength() { return length; }
int Size::getHeight() { return height; }
void Size::setWidth(int w) { width = w; }
void Size::setLength(int l) { length = l; }
void Size::setHeight(int h) { height = h; }
void Size::show()
{
    cout << "Size of your Wardrobe" << endl;
    cout << endl;
    cout << "[ Size : " << width << "x" << getLength() << "x" << getHeight() << " m^2 ]" << endl;
    cout << endl;
}
Wardrobe::Wardrobe() : size(), numTops(1), numPants(1)
{
    tops = new Tops[numTops]{Tops(199.00, 2, 1)};
    pants = new Pants[numPants]{Pants(256.00, 3, 1)};
}

Wardrobe::Wardrobe(Size s, Tops *t, int nt, Pants *p, int np) : size(s), tops(t), numTops(nt), pants(p), numPants(np) {
    // tops = new Tops[nt];
    // for (int i = 0; i < nt; i++)
    // {
    //     tops[i] = t[i];
    // }
    // numTops = nt;
    // pants = new Pants[np];
    // for (int i = 0; i < np; i++)
    // {
    //     pants[i] = p[i];
    // }
    // numPants = np;

}

Wardrobe::~Wardrobe()
{
    delete[] tops;
    delete[] pants;
}
void Wardrobe::setSize(Size s) { size = s; }
void Wardrobe::setTops(Tops *t, int nt)
{
    delete[] tops;
    tops = new Tops[nt];
    for (int i = 0; i < nt; i++)
    {
        tops[i] = t[i];
    }
    numTops = nt;
}
void Wardrobe::setPants(Pants *p, int np)
{
    delete[] pants;
    pants = new Pants[np];
    for (int i = 0; i < np; i++)
    {
        pants[i] = p[i];
    }
    numPants = np;
}
Size Wardrobe::getSize() { return size; }
Tops *Wardrobe::getTops() { return tops; }
Pants *Wardrobe::getPants() { return pants; }
int Wardrobe::getNumTops() { return numTops; }
int Wardrobe::getNumPants() { return numPants; }
void Wardrobe::addPants(Pants p)
{
    Pants *temp = new Pants[numPants + 1];
    for (int i = 0; i < numPants; i++)
    {
        temp[i] = pants[i];
    }
    temp[numPants] = p;
    numPants++;
    delete[] pants;
    pants = temp;
}
void Wardrobe::addTop(Tops t)
{
    Tops *temp = new Tops[numTops + 1];
    for (int i = 0; i < numTops; i++)
    {
        temp[i] = tops[i];
    }
    temp[numTops] = t;
    numTops++;
    delete[] tops;
    tops = temp;
}
void Wardrobe::removePants(int index)
{
    Pants *temp = new Pants[numPants - 1];
    for (int i = 0; i < numPants; i++)
    {
        if (i < index)
        {
            temp[i] = pants[i];
        }
        else if (i > index)
        {
            temp[i - 1] = pants[i];
        }
    }
    numPants--;
    delete[] pants;
    pants = temp;
}
void Wardrobe::removeTop(int index)
{
    Tops *temp = new Tops[numTops - 1];
    for (int i = 0; i < numTops; i++)
    {
        if (i < index)
        {
            temp[i] = tops[i];
        }
        else if (i > index)
        {
            temp[i - 1] = tops[i];
        }
    }
    numTops--;
    delete[] tops;
    tops = temp;
}

void Wardrobe::show()
{
    size.show();
    cout << "Amount of tops in wardrobe " << endl;
    cout << endl;
    for (int i = 0; i < numTops; i++)
    {
        cout << "[ " << i + 1 << ". ";
        tops[i].show();
    }
    cout << endl;
    cout << "Amount of pants in wardrobe " << endl;
    for (int i = 0; i < numPants; i++)
    {
        cout << "[ " << i + 1 << ". ";
        pants[i].show();
    }
}
void Wardrobe::setNumTops(int nt)
{
    delete[] tops;
    tops = new Tops[nt];
    numTops = nt;
}
void Wardrobe::setNumPants(int np)
{
    delete[] pants;
    pants = new Pants[np];
    numPants = np;
}