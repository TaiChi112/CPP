#include <iostream>

using namespace std;
class PencilSharpener
{
    int color;
    int num;
    double price;

public:
    PencilSharpener();
    PencilSharpener(int, int, double);
    int getColor();
    int getNum();
    double getPrice();
    void show();
};
class ElectricPencilSharpener : public PencilSharpener
{
    static int count;
    int type;

public:
    ElectricPencilSharpener();
    ElectricPencilSharpener(int, int, double, int);
    void show();
    static int getCount();
};
class ManualSharpener : public PencilSharpener
{
    bool box;

public:
    ManualSharpener();
    ManualSharpener(int, int, double, bool);
    void show();
};
class PrismSharpener : public ManualSharpener
{
    int hand;

public:
    PrismSharpener();
    PrismSharpener(int, int, double, bool, int);
    void show();
};
class PlanetSharpener : public ManualSharpener
{
    bool mount;

public:
    PlanetSharpener();
    PlanetSharpener(int, int, double, bool, bool);
    void show();
};
int main()
{
    cout << "Create Object \n";
    int color, channel, type, input, hand;
    double price;
    bool box, mount;

    cout << "Enter PencilSharpener color : ";

    while (color < 1 || color > 5)
    {
        cin >> color;
        if (color < 1 || color > 5)
        {
            cout << "color must be between 1 and 5 \n";
            cout << "Enter PencilSharpener color : ";
        }
    }
    cout << "Enter PencilSharpener channel : ";
    cin >> channel;
    cout << "Enter PencilSharpener price : ";
    cin >> price;
    cout << "Enter ElectricPencilSharpener type : ";
    cin >> type;
    cout << "Enter ManualSharpener box (1/2) : ";
    cin >> input;
    box = (input == 1) ? true : false;
    cout << "Enter PrsimSharpener hand (1/2) : ";
    cin >> hand;
    cout << "Enter PlanetSharpener mount (1/2) : ";
    cin >> input;
    mount = (input == 1) ? true : false;

    cout << endl;
    PencilSharpener p1, p2(color, channel, price);
    cout << "PencilSharpener 1" << endl;
    p1.show();
    cout << endl;
    cout << "PencilSharpener 2" << endl;
    p2.show();

    ElectricPencilSharpener e1, e2(color, channel, price, type);
    cout << endl;
    cout << "EletricPencilSharpener 1" << endl;
    e1.show();
    cout << endl;
    cout << "EletricPencilSharpener 2" << endl;
    e2.show();
    cout << ElectricPencilSharpener::getCount() << endl;

    ManualSharpener m1, m2(color, channel, price, box);
    cout << endl;
    cout << "ManualSharpener 1" << endl;
    m1.show();
    cout << endl;
    cout << "ManualSharpener 2" << endl;
    m2.show();

    PrismSharpener pr1, pr2(color, channel, price, box, hand);
    cout << endl;
    cout << "PrismSharpener 1" << endl;
    pr1.show();
    cout << endl;
    cout << "PrismSharpener 2" << endl;
    pr2.show();

    PlanetSharpener pl1, pl2(color, channel, price, box, mount);
    cout << endl;
    cout << "PlanetSharpener 1" << endl;
    pl1.show();
    cout << endl;
    cout << "PlanetSharpener 2" << endl;
    pl2.show();

    return 0;
}
PencilSharpener::PencilSharpener() : color(1), num(3), price(112.5) {}
PencilSharpener::PencilSharpener(int c, int num, double p) : color((c >= 1 && c <= 5) ? c : 1), num((num > 0) ? num : 3), price((p > 0) ? p : 112.5) {}

void PencilSharpener::show()
{
    switch (this->getColor())
    {
    case 1:
        cout << "color : You have (Blue) pencil sharpener" << endl;
        break;
    case 2:
        cout << "color : You have (White) pencil sharpener" << endl;
        break;
    case 3:
        cout << "color : You have (Green) pencil sharpener" << endl;
        break;
    case 4:
        cout << "color : You have (Pink) pencil sharpener" << endl;
        break;
    case 5:
        cout << "color : You have (Black) pencil sharpener" << endl;
        break;
    default:
        cout << "color : You have (Blue) pencil sharpener" << endl;
        break;
    }
    switch (this->getNum())
    {
    case 1:
        cout << "channel : You select pencil 1 channel" << endl;
        break;
    case 2:
        cout << "channel : You select pencil 2 channel" << endl;
        break;
    case 3:
        cout << "channel : You select pencil 3 channel" << endl;
        break;
    default:
        cout << "channel : You select pencil 1 channel" << endl;
        break;
    }
    cout << "price: " << this->getPrice() << "$" << endl;
}
int PencilSharpener::getColor()
{
    return this->color;
}
int PencilSharpener::getNum()
{
    return this->num;
}
double PencilSharpener::getPrice()
{
    return this->price;
}

ElectricPencilSharpener::ElectricPencilSharpener() : PencilSharpener(2, 1, 280), type(1)
{
    ++ElectricPencilSharpener::count;
}
ElectricPencilSharpener::ElectricPencilSharpener(int c, int num, double p, int t) : PencilSharpener(c, num, p), type((t >= 1 && t <= 3) ? t : 1)
{
    ++ElectricPencilSharpener::count;
}
void ElectricPencilSharpener::show()
{
    PencilSharpener::show();
    switch (type)
    {
    case 1:
        cout << "type: use plug-in" << endl;
        break;
    case 2:
        cout << "type: use battery" << endl;
        break;
    case 3:
        cout << "type: use charging USB " << endl;
        break;

    default:
        break;
    }
}
int ElectricPencilSharpener::count = 0;
int ElectricPencilSharpener::getCount()
{
    return ElectricPencilSharpener::count;
}
ManualSharpener::ManualSharpener() : PencilSharpener(5, 1, 20.0), box(false) {}
ManualSharpener::ManualSharpener(int c, int num, double p, bool b) : PencilSharpener(c, num, p), box(b) {}
void ManualSharpener::show()
{
    PencilSharpener::show();
    if (box)
    {
        cout << "box: storing pencil scraps" << endl;
    }
    else
    {
        cout << "box: not storing pencil scraps" << endl;
    }
}
PrismSharpener::PrismSharpener() : ManualSharpener(5, 1, 20.0, false), hand(2) {}
PrismSharpener::PrismSharpener(int c, int num, double p, bool b, int h) : ManualSharpener(c, num, p, b), hand(h) {}
void PrismSharpener::show()
{
    ManualSharpener::show();
    switch (this->hand)
    {
    case 1:
        cout << "hand: left hand" << endl;
        break;
    case 2:
        cout << "hand: right hand" << endl;
        break;
    default:
        cout << "hand: left hand" << endl;
        break;
    }
}
PlanetSharpener::PlanetSharpener() : ManualSharpener(1, 1, 180.0, true), mount(false) {}
PlanetSharpener::PlanetSharpener(int c, int num, double p, bool b, bool m) : ManualSharpener(c, num, p, b), mount((m = true) ? true : false) {}
void PlanetSharpener::show()
{
    ManualSharpener::show();
    if (mount)
    {
        cout << "mount: mounting" << endl;
    }
    else
    {
        cout << "mount: not mounting" << endl;
    }
}