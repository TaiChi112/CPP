#ifndef CIECLE_H
#define CIRCLE_H
#include "point.h"
#include <iostream>
using namespace std;

class Circle
{
    Point center;
    double radius;

public:
    Circle();
    Circle(Point &, double);
    ~Circle();
    void set(Point &, double);
    void setRadius(double);
    Point getCenter();
    double getRadius();
    void show();
    friend bool isInside(Circle &, Point &);
};
Circle::Circle() : center(Point("center", 0.0, 0.0)), radius(1.0) {}
Circle::Circle(Point &c, double r) : center(c), radius(r) {}
void Circle::set(Point &c, double r)
{
    this->center = c;
    this->radius = r;
}
void Circle::setRadius(double r) { this->radius = r; }
Circle::~Circle() { cout << "Destructuring called radius of circle : " << getRadius() << endl; }
Point Circle::getCenter() { return center; }
double Circle::getRadius() { return radius; }
void Circle::show()
{
    cout << "Circle center : ";
    center.show();
    cout << "Radius = " << radius << "" << endl;
}
bool isInside(Circle &circle, Point &point)
{
    double dx = circle.center.getX() - point.getX();
    double dy = circle.center.getY() - point.getY();
    double distanceSquared = dx * dx + dy * dy;
    return distanceSquared <= circle.radius * circle.radius;
}
#endif /* CIRCLE_H */
