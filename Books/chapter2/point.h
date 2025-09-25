#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;
// Homework 1
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
    int getX();
    int getY();
    void show();
    static int getCount();
    double dot(Point &p);
    static Point midpoint(Point &p1, Point &p2);
};
Point::Point() : name("undefined"), x(0.0), y(0.0) { ++Point::count; }
Point::Point(string n, double xx, double yy) : name(n), x(xx), y(yy)
{
    set(name, x, y);
    ++Point::count;
}
Point::~Point() { cout << "destructuring Point : " << getName() << "\n"; }
int Point::count = 0;
int Point::getCount() { return count; }
void Point::set(string n, double xx, double yy)
{
    this->name = n;
    this->x = xx;
    this->y = yy;
}
string Point::getName() { return name; }
int Point::getX() { return x; }
int Point::getY() { return y; }
void Point::show()
{
    cout << "Point : " << name << " is at (" << getX() << ", " << getY() << ")\n";
}
// Homework 4
double Point::dot(Point &p) { return (this->x * p.x) + (this->y * p.y); }
Point Point::midpoint(Point &p1, Point &p2)
{
    double midX = (p1.x + p2.x) / 2.0;
    double midY = (p1.y + p2.y) / 2.0;
    return Point("Midpoint", midX, midY);
}
void IPoint(string &name, double &x, double &y)
{
    cout << "Enter Point name : ";
    cin >> name;
    cout << "Enter x coordinate : ";
    cin >> x;
    cout << "Enter y coordinate : ";
    cin >> y;
    cout << endl;
}
#endif // POINT_H