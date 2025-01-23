#include "prototype.h"
#include <iostream>
using namespace std;

Appliance::Appliance() : price(99.00) {}
Appliance::Appliance(double p) : price((p >= 0.00 ? p : 0.00)) {}
Appliance::~Appliance() {}
void Appliance::setPrice(double p) { price = (p >= 0.00 ? p : 0.00); }
double Appliance::getPrice() { return price; }
void Appliance::show()
{
    cout << "Price: " << getPrice() << endl;
}

Fan::Fan() : type(1), Appliance(800.00) {}
Fan::Fan(int t, double p) : type((t >= 1 && t <= 3 ? t : 1)), Appliance(p) {}
Fan::~Fan() {}
void Fan::setType(int t) { this->type = (t >= 1 && t <= 3 ? t : 1); }
string Fan::getType()
{
    switch (this->type)
    {
    case 1:
        return "table fan";
        break;
    case 2:
        return "floor fan";
        break;
    case 3:
        return "exhaust  fan";
        break;
    default:
        return "undefined type";
        break;
    }
}
void Fan::show()
{
    cout << "Fan, Type: " << getType() << endl;
    cout << "Price: " << getPrice() << endl;
}

AirConditioner::AirConditioner() : type(1), Appliance(25000.00) {}
AirConditioner::AirConditioner(int t, double p) : type((t >= 1 && t <= 2 ? t : 1)), Appliance(p) {}
AirConditioner::~AirConditioner() {}
void AirConditioner::setType(int t) { this->type = (t >= 1 && t <= 2 ? t : 1); }
string AirConditioner::getType()
{
    switch (this->type)
    {
    case 1:
        return "Wall mounted air conditioner";
        break;
    case 2:
        return "Floor mounted air conditioner";
        break;
    default:
        return "undefined type";
        break;
    }
}
void AirConditioner::show()
{
    cout << "AirConditioner, Type: " << getType() << endl;
    cout << "Price: " << getPrice() << endl;
}

Refrigerator::Refrigerator() : type(2), Appliance(12000.00)
{
    ++Refrigerator::count;
}
Refrigerator::Refrigerator(int t, double p) : type((t >= 1 && t <= 3 ? t : 2)), Appliance(p)
{
    ++Refrigerator::count;
}
Refrigerator::~Refrigerator()
{
    --Refrigerator::count;
}
void Refrigerator::setType(int t) { this->type = (t >= 1 && t <= 3 ? t : 2); }
string Refrigerator::getType()
{
    switch (this->type)
    {
    case 1:
        return "small refrigerator";
        break;
    case 2:
        return "one door refrigerator";
        break;
    case 3:
        return "two door refrigerator";
        break;
    default:
        return "undefined type";
        break;
    }
}
void Refrigerator::show()
{
    cout << "Refrigerator, Type: " << getType() << endl;
    cout << "Price: " << getPrice() << endl;
}
int Refrigerator::getcount() { return count; }
int ::Refrigerator::count = 0;

Room::Room() : num(0), ap(0)
{
}
Room::Room(int n, Appliance **a)
{
    num = n;
    ap = new Appliance *[num];
    for (int i = 0; i < num; i++)
    {
        ap[i] = a[i];
    }
}

Room::~Room()
{
    for (int i = 0; i < num; i++)
    {
        delete ap[i];
    }
    delete[] ap;
}
int Room::getNum() { return num; }
void Room::setNum(int n)
{
    delete[] ap;
    (this->num = (n >= 0 ? n : 0));
}

Bedroom::Bedroom() : type(3), Room() {}
Bedroom::Bedroom(int type, int n, Appliance **a) : type(type), Room(n, a) {}
Bedroom::~Bedroom() {}
string Bedroom::getType()
{
    switch (this->type)
    {
    case 1:
        return "Twin bed";
        break;
    case 2:
        return "double bed";
        break;
    case 3:
        return "big bed";
        break;
    case 4:
        return "Single bed";
        break;
    default:
        return "undefined type";
        break;
    }
}
void Bedroom::show()
{
    cout << "Bedroom " << endl;
    cout << "Type: " << getType() << ", Appliances: " << getNum() << endl;
    for (int i = 0; i < getNum(); i++)
    {
        if (ap[i])
            ap[i]->show();
    }
}

Kitchen::Kitchen() : type(2), Room() {}
Kitchen::Kitchen(int type, int n, Appliance **a) : type(type), Room(n, a) {}
Kitchen::~Kitchen() {}
string Kitchen::getType()
{
    switch (this->type)
    {
    case 1:
        return "Thai kitchen";
        break;
    case 2:
        return "western kitchen";
        break;
    default:
        return "undefined type";
        break;
    }
}
void Kitchen::show()
{
    cout << "Kichen " << endl;

    cout << "Type: " << getType() << ", Appliances: " << getNum() << endl;
    for (int i = 0; i < getNum(); i++)
    {
        if (ap[i])
            ap[i]->show();
    }
}

Address::Address() : id(1), province("Bangkok") {}
Address::Address(int id, string province) : id(id), province(province) {}
Address::~Address() {}
void Address::show()
{
    cout << "Address ID: " << id << ", Province: " << province << endl;
}

Building::Building() : num(0)
{
    room = new Room *[num];
}
Building::Building(Address *a, int n, Room **r) : address(a), num(n)
{
    room = new Room *[num];
    for (int i = 0; i < num; i++)
    {
        room[i] = r[i];
    }
}
Building::~Building()
{
    delete address;
    for (int i = 0; i < num; i++)
    {
        delete room[i];
    }
    delete[] room;
}

void Building::show()
{
    cout << "Building Details:" << endl;
    if (address)
    {
        address->show();
    }
    for (int i = 0; i < num; i++)
    {
        if (room[i])
        {
            cout << endl;
            room[i]->show();
        }
    }
}
void Building::addOneRoom(Room *newRoom)
{
    Room **newRoomArray = new Room *[num + 1];
    for (int i = 0; i < num; i++)
    {
        newRoomArray[i] = room[i];
    }
    newRoomArray[num] = newRoom;
    delete[] room;
    room = newRoomArray;
    num++;
}
void Building::setNum(int n)
{
    delete[] room;
    (this->num = (n >= 0 ? n : 0));
}

void Building::setAddress(Address *a) { address = a; }
Address *Building::getAddress() { return address; }
