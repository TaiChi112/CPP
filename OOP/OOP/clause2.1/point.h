#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
class Point
{
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
};
Point::Point() : name("undefined"), x(0.0), y(0.0) { set(name, x, y); }
Point::Point(string n, double xx, double yy) : name(n), x(xx), y(yy)
{
    set(name, x, y);
}
Point::~Point() { cout << "destructuring Point : " << getName() << "\n"; }
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
    cout << "Point : " << name << " is at (" << getX() << ", " << getY() << ")\n";
}

#endif // POINT_H