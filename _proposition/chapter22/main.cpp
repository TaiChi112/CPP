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
    int type;

public:
    ElectricPencilSharpener();
    ElectricPencilSharpener(int, int, double, int);
    void show();
};
int main()
{
    cout << "Create PencilSharpener object \n";
    int color, channel, type;
    double price;
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
    cout << "enter PencilSharpener price : ";
    cin >> price;
    cout << "Enter PencilSharpener type : ";
    cin >> type;
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

ElectricPencilSharpener::ElectricPencilSharpener() : PencilSharpener(2, 1, 280), type(1) {}
ElectricPencilSharpener::ElectricPencilSharpener(int c, int num, double p, int t) : PencilSharpener(c, num, p), type(t)
{
    if (type < 1 || type > 3)
    {
        this->type = t;
    }
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