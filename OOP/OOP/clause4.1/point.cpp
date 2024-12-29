#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    string name("B");
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
    cout << endl;

    // set attribute of object p1

    cout << "try to set attribute of object p1 : " << endl;
    cout << endl;
    p1.setName("A");
    p1.setX(6.0);
    p1.setY(7.0);
    p1.show();

    string name1("C");
    double x1(4.0), y1(5.0);

    string name2("D");
    double x2(6.0), y2(8.0);

    Point p3(name1, x1, y1);
    Point p4(name2, x2, y2);
    p3.show();
    p4.show();
    cout << "Point A & Point B Dot product : " << p3.dot(p4) << endl;
    cout << endl;
    Point mid = Point::midpoint(p3, p4);
    mid.show();
    cout << endl;

    cout << "get amount of oject : " << Point::getCount() << endl;
    cout << endl;
    return 0;
}