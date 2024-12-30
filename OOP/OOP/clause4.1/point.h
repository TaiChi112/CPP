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
    string getName();
    double getX();
    double getY();
    void show();
    static int getCount();
    double dot(Point &p);
    Point midpoint(Point &p);
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
    cout << "destructuring Point : " << getName() << "\n";
}
int Point::count = 0;
int Point::getCount() { return count; }
void Point::set(string n, double xx, double yy)
{
    this->name = n;
    this->x = xx;
    this->y = yy;
}
string Point::getName() { return name; }
double Point::getX() { return x; }
double Point::getY() { return y; }
void Point::show()
{
    cout << "Point : " << name << " is at (" << getX() << ", " << getY() << ")\n";
}

double Point::dot(Point &p) { return (this->x * p.x) + (this->y * p.y); }

Point Point::midpoint(Point &p)
{
    double midX = (this->x + p.x) / 2.0;
    double midY = (this->y + p.y) / 2.0;
    return Point("Midpoint", midX, midY);
}
#endif // POINT_H