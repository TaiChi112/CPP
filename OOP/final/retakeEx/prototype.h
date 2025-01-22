#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <iostream>
using namespace std;
class Appliance
{
    double price;

public:
    Appliance();
    Appliance(double);
    ~Appliance();
    virtual string getType() = 0;
    void setPrice(double);
    double getPrice();
    virtual void show();
};
class Fan : public Appliance
{
    int type; // 1. ตั้งโต๊ะ 2.ตั้งพื้น 3.ดูดอากาศ
public:
    Fan();
    Fan(int, double);
    ~Fan();
    void setType(int);
    string getType();
    void show();
};
class AirConditioner : public Appliance
{
    int type; // 1.ติดผนัง 2.ติดพื้น

public:
    AirConditioner();
    AirConditioner(int, double);
    ~AirConditioner();
    string getType();
    void setType(int);
    void show();
};
class Refrigerator : public Appliance
{
    static int count;
    int type; // 1.ตู้เย็นเล็ก 2.ตู้เย็นหนึ่งประตู 3.ตู้เย็นสองประตู

public:
    Refrigerator();
    Refrigerator(int, double);
    ~Refrigerator();
    string getType();
    void setType(int);
    void show();
    static int getcount();
};
class Room
{
    int num;

protected:
    Appliance **ap;

public:
    Room();
    Room(int, Appliance **);
    virtual ~Room();
    int getNum();
    virtual string getType() = 0;
    void setNum(int);
    // void setAppliance(int, Appliance **);
    virtual void show() = 0;
};
class Bedroom : public Room
{
    int type; // 1. เตียงเเฝด 2.เตียงคู่ 3.เตียงใหญ่ 4.เตียงเดี่ยว

public:
    Bedroom();
    Bedroom(int, int, Appliance **);
    ~Bedroom();
    string getType();
    void show();
};
class Kitchen : public Room
{
    int type; // 1. ครัวไทย 2.ครัวฝรั่ง

public:
    Kitchen();
    Kitchen(int, int, Appliance **);
    ~Kitchen();
    string getType();
    void show();
};
class Address
{
    int id;
    string province; // จังหวัด

public:
    Address();
    Address(int, string);
    ~Address();
    void show();
};
class Building
{
    Room **room;
    int num;
    Address *address;

public:
    Building();
    Building(Address *, int, Room **);
    ~Building();
    void setNum(int);
    void show();
    void addOneRoom(Room *);
    void setAddress(Address *);
    Address *getAddress();
};

#endif // PROTOTYPE_H