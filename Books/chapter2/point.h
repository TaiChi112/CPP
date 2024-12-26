#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point
{
    static int count;
    string name;
    double x, y;

public:
    Point();
    Point(string, double, double);
    ~Point();
    void set(string, double, double);
    int getX();
    int getY();
    void show();
    static int getCount();
};
Point::Point() : name("undefined"), x(0.0), y(0.0) { ++Point::count; }
Point::Point(string n, double xx, double yy) : name(n), x(xx), y(yy)
{
    set(name, x, y);
    ++Point::count;
}
Point::~Point() { cout << "destructuring Point : " << name << "\n"; }
int Point::count = 0;
int Point::getCount() { return count; }
void Point::set(string n, double xx, double yy)
{
    this->name = n;
    this->x = xx;
    this->y = yy;
}
int Point::getX() { return x; }
int Point::getY() { return y; }
void Point::show()
{
    cout << "Point : " << name << " is at (" << getX() << ", " << getY() << ")\n";
}

#endif // POINT_H