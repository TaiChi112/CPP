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
    void setName(string);
    void setX(double);
    void setY(double);
    string getName();
    double getX();
    double getY();
    void show();
    static int getCount();
};
Point::Point() : name("undefined"), x(0.0), y(0.0)
{
    ++Point::count;
}
Point::Point(string n, double xx, double yy) : name(n), x(xx), y(yy)
{
    ++Point::count;
}
Point::~Point()
{
    --Point::count;
    cout << "Destructuring Point : " << getName() << "\n";
}
void Point::set(string n, double xx, double yy)
{
    this->name = n;
    this->x = xx;
    this->y = yy;
}
void Point::setName(string n) { name = n; }
void Point::setX(double xx) { x = xx; }
void Point::setY(double yy) { y = yy; }
string Point::getName() { return name; }
double Point::getX() { return x; }
double Point::getY() { return y; }
void Point::show()
{
    cout << "Point : " << getName() << " is at (" << getX() << ", " << getY() << ")\n";
}
int Point::count = 0;
int Point::getCount() { return count; }
#endif // POINT_H