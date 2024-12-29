#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    string name("A");
    double x(4.0), y(5.0);

    // create Object of Point
    Point p1, p2(name, x, y);

    cout << endl;
    p1.show();
    cout << endl;
    p2.show();
    cout << endl;

    // get attribute of object p2

    cout << "get attribute Name of object p1 : " << p2.getName() << endl;
    cout << "get attribute X of object p1 : " << p2.getX() << endl;
    cout << "get attribute Y of object p1 : " << p2.getY() << endl;

    // set attribute of object p1

    p1.setName("B");
    p1.setX(6.0);
    p1.setY(7.0);
    p1.show();

    return 0;
}