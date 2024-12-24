#ifndef MYPOINT_H
#define MYPOINT_H
#include <iostream>
using namespace std;
class Point
{
    static int count;
    string name;
    double x, y;

public:
    Point() : name(""), x(0), y(0) { count++; }
    Point(string name, double x, double y) : name(name), x(x), y(y) { count++; }
    ~Point() { count--; }

    void set(string name, double x, double y)
    {
        this->name = name;
        this->x = x;
        this->y = y;
    }

    double getX() { return x; }
    double getY() { return y; }

    void show()
    {
        cout << "Point(" << name << "): (" << x << ", " << y << ")" << endl;
    }

    static int getCount() { return count; }
};

int Point::count = 0;

class MyPoint
{
    Point *points;
    int size;

public:
    MyPoint();
    MyPoint(int size);
    ~MyPoint();
    void reset(int);
    void setPoint(int, string, double, double);
    Point getPoint(int);
    void show();
};
MyPoint::MyPoint() : points(nullptr), size(0) {}
MyPoint::MyPoint(int n) : size(n) { points = new Point[n]; }
MyPoint::~MyPoint()
{
    delete[] points;
    points = nullptr;
    size = 0;
}
void MyPoint::reset(int newSize)
{
    delete[] points;
    size = newSize;
    points = new Point[size];
}
void MyPoint::setPoint(int index, string name, double x, double y)
{
    if (index >= 0 && index < size)
    {
        points[index].set(name, x, y);
    }
    else
    {
        cout << "Index out of bounds." << endl;
    }
}
Point MyPoint::getPoint(int index)
{
    if (index >= 0 && index < size)
    {
        return points[index];
    }
    else
    {
        cout << "Index out of bounds." << endl;
        return Point();
    }
}
void MyPoint::show()
{
    for (int i = 0; i < size; i++)
    {
        cout << "Index " << i << " : " << endl;
        points[i].show();
    }
}
#endif // MYPOINT_H