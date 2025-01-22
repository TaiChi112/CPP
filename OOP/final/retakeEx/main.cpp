#include <iostream>
#include "prototype.h"
using namespace std;

int main()
{
    Fan fan[5]{Fan(1, 800.00), Fan(2, 900.00), Fan(3, 1000.00), Fan(4, 1100.00), Fan(5, 1200.00)};
    for (int i = 0; i < 5; i++)
    {
        fan[i].show();
    }
    cout << "-------------------------------------------------------------" << endl;
    AirConditioner *air = new AirConditioner[3]{
        AirConditioner(1, 25000.00),
        AirConditioner(2, 26000.00),
        AirConditioner(3, 27000.00)};
    for (int i = 0; i < 3; i++)
    {
        air[i].show();
    }
    cout << "-------------------------------------------------------------" << endl;
    Refrigerator r1(1, 5000.00), r2(2, 6000.00);
    r1.show();
    r2.show();
    cout << "-------------------------------------------------------------" << endl;
    Room *room[3];
    room[0] = new Bedroom(1, 2, new Appliance *[2]{&fan[0], &fan[1]});
    room[1] = new Bedroom(1, 3, new Appliance *[3]{&fan[4], &air[0], &r1});
    room[2] = new Kitchen(2, 2, new Appliance *[2]{&fan[2], &fan[3]});

    cout << endl;
    cout << "show room" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        room[i]->show();
    }

    Address *ads[4]{
        new Address(1, "Bangkok"),
        new Address(2, "Krabi"),
        new Address(3, "Phuket"),
        new Address(4, "Chiangmai")};

    Building b1(ads[0], 3, room);
    b1.show();
    cout << "-------------------------------------------------------------" << endl;

    cout << endl;
    cout << "Add room" << endl;
    b1.addOneRoom(room[0]);
    b1.show();
    cout << "-------------------------------------------------------------" << endl;

    Building b2(ads[2], 1, room);

    Building *myBuildings[2]{&b1, &b2};

    for (int i = 0; i < 2; i++)
    {
        myBuildings[i]->getAddress() == ads[1] ? cout << "Yes" << endl : cout << "No" << endl;
    }

    cout << "Total all price appliance  : " << fan[0].getPrice() + fan[1].getPrice() + fan[2].getPrice() + fan[3].getPrice() + fan[4].getPrice() + air[0].getPrice() + air[1].getPrice() + air[2].getPrice() + r1.getcount() + r2.getcount() << endl;

    for (int i = 0; i < 4; i++)
    {
        delete ads[i];
    }

    for (int i = 0; i < 3; i++)
    {
        delete room[i];
    }
    delete[] air;
    return 0;
}