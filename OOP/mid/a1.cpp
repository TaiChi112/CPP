#include <iostream>

using namespace std;
class Dessert
{
    int price;
    static int count;

public:
    Dessert();
    Dessert(int);
    ~Dessert();
    void show();
    int getPrice();
    void setPrice(int);
    static int getCount();
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
    Cake add(Cake &, Cake &);
    void show();
    int getFlavorCake();
    void setFlavorCake(int);
};
class IceCream : public Dessert
{
    int flavor;
    int type;
    bool topping;

public:
    IceCream();
    IceCream(int, int, bool, int);
    ~IceCream();
    void show();
    int getFlavorIceCreame();
    void setFlavorIceCreame(int);
    bool swapTopping(int);
};
int main()
{
    cout << "Get amount of object before : " << Dessert::getCount() << endl;
    Cake a(1, 2, true, 250), b(2, 3, false, 540);
    IceCream c(3, 4, true, 45);
    cout << "Cake a" << endl;
    a.show();
    cout << endl;
    cout << "Cake a" << endl;
    b.show();
    cout << endl;
    cout << "IceCream" << endl;
    c.show();
    cout << endl;
    cout << "Get amount of object after : " << Dessert::getCount() << endl;
    cout << endl;

    cout << "Change flavor between Cake a and IceCream" << endl;
    cout << endl;
    (c.getFlavorIceCreame()) != (a.getFlavorCake()) ? (a.setFlavorCake(c.getFlavorIceCreame())) : (c.setFlavorIceCreame(a.getFlavorCake()));
    a.show();
    cout << endl;
    cout << "IceCream flavor" << endl;
    c.show();
    cout << endl;

    cout << "Add Cake a and Cake b" << endl;
    cout << endl;
    Cake d = a.add(a, b);
    d.show();
    cout << endl;

    cout << "Sum of all dersert price : " << endl;
    cout << a.getPrice() + b.getPrice() + c.getPrice() + d.getPrice() << endl;
    cout << endl;
    return 0;
}
int Dessert::count = 0;
int Dessert::getCount() { return count; };
Dessert::Dessert() : price(90) { ++Dessert::count; }
Dessert::Dessert(int p) : price((p > 10 ? p : 10)) { ++Dessert::count; }
Dessert::~Dessert()
{
    --Dessert::count;
    cout << "Destructor Dessert : " << price << endl;
}
void Dessert::show() { cout << "Price : " << price << endl; }
int Dessert::getPrice() { return price; }
void Dessert::setPrice(int p) { price = p; }

Cake::Cake() : Dessert(120), flavor(1), type(1), topping(true) {}
Cake::Cake(int f, int ty, bool t, int p) : Dessert(p), flavor(f), type(ty), topping(t) {}
Cake::~Cake() { cout << "Destructor Cake : " << getPrice() << endl; }
void Cake::show()
{
    cout << "Flavor : " << flavor << endl;
    cout << "Type : " << type << endl;
    if (topping)
        cout << "Topping : Yes" << endl;
    else
        cout << "Topping : No" << endl;
    Dessert::show();
}
Cake Cake::add(Cake &a, Cake &b)
{
    Cake c;
    int average = (a.getPrice() + b.getPrice()) / 2;
    c.setPrice(average);
    c.flavor = b.flavor;
    c.type = a.type;
    c.topping = true;
    return c;
}
int Cake::getFlavorCake() { return flavor; }
void Cake::setFlavorCake(int f) { flavor = f; }

IceCream::IceCream() : Dessert(30), flavor(1), type(1), topping(true) {}
IceCream::IceCream(int f, int ty, bool t, int p) : Dessert(p), flavor(f), type(ty), topping(t) {}
IceCream::~IceCream() { cout << "Destructor IceCream : " << getPrice() << endl; }

void IceCream::show()
{
    cout << "Flavor : " << flavor << endl;
    cout << "Type : " << type << endl;
    if (topping)
        cout << "Topping : Yes" << endl;
    else
        cout << "Topping : No" << endl;
    Dessert::show();
}
int IceCream::getFlavorIceCreame() { return flavor; }
void IceCream::setFlavorIceCreame(int f) { flavor = f; }