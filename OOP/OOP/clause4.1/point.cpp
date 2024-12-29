#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    string name1("A");
    double x1(4.0), y1(5.0);

    string name2("B");
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
    return 0;
}