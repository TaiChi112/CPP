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
    int type; //
public:
    ElectricPencilSharpener();
    ElectricPencilSharpener(int, int, double, int);
    void show();
};
int main()
{
    cout << "Create PencilSharpener object \n";
    int color, channel;
    double price;
    cout << "enter PencilSharpener color : ";

    while (color < 1 || color > 5)
    {
        cin >> color;
        if (color < 1 || color > 5)
        {
            cout << "color must be between 1 and 5 \n";
            cout << "enter PencilSharpener color : ";
        }
    }

    cout << "enter PencilSharpener channel : ";
    cin >> channel;
    cout << "enter PencilSharpener price : ";
    cin >> price;
    PencilSharpener p1, p2(color, channel, price);
    p1.show();
    p2.show();
    return 0;
}
PencilSharpener::PencilSharpener() : color(1), num(3), price(112.5) {}
PencilSharpener::PencilSharpener(int c, int num, double p)
{
    if (c >= 1 && c <= 5)
    {
        this->color = c;
    }
    if (num <= 0)
    {
        this->num = num;
    }
    if (price < 0)
    {
        this->price = 112;
    }
    else
    {
        this->price = p;
    }
}
void PencilSharpener::show()
{

    cout << "color: " << color << endl;
    cout << "num: " << num << endl;
    cout << "price: " << price << endl;
}
int PencilSharpener::getColor()
{
    return color;
}
int PencilSharpener::getNum()
{
    return num;
}
double PencilSharpener::getPrice()
{
    return price;
}

ElectricPencilSharpener::ElectricPencilSharpener() : PencilSharpener(), type(1) {}
ElectricPencilSharpener::ElectricPencilSharpener(int c, int num, double p, int t) : PencilSharpener(c, num, p), type(t) {}
void ElectricPencilSharpener::show()
{
    cout << "color: " << getColor() << endl;
    cout << "num: " << getNum() << endl;
    cout << "price: " << getPrice() << endl;
    cout << "type: " << type << endl;
}