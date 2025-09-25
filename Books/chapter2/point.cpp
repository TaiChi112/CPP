#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    string name;
    double x, y;
    cout << endl;
    IPoint(name, x, y); 
    cout << endl;
    Point p1, p2(name, x, y);
    p1.show();
    p2.show();
    cout << endl;
    cout << "amount object : " << Point::getCount() << endl;
    cout << endl;

    Point p3("A", 4.0, 5.0);
    Point p4("B", 6.0, 8.0);
    p3.show();
    p4.show();
    cout << "Point A & Point B Dot product : " << p3.dot(p4) << endl;
    cout << endl;
    Point mid = Point::midpoint(p3, p4);
    mid.show();
    cout << endl;
    return 0;
}