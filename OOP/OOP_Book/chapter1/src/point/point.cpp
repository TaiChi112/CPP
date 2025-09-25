#include <point/point.h>
#include <iostream>
using namespace std;

Point::Point() : x(0), y(0), name("default")
{
    amount_points++;
    cout << "Point created: " << name << endl;
}

Point::Point(float x, float y, std::string name) : x(x), y(y), name(name)
{
    amount_points++;
    cout << "Point created: " << name << endl;
}

Point::~Point()
{
    amount_points--;
    cout << "Point destroyed: " << name << endl;
}
int Point::amount_points = 0;
float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

std::string Point::getName()
{
    return name;
}

void Point::set_point(float x, float y, std::string name)
{
    this->x = x;
    this->y = y;
    this->name = name;
}

void Point::show()
{
    cout << "Point " << name << ": (" << x << ", " << y << ")" << endl;
}
