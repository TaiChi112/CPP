#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;
class Rectangle
{
    int width, length;
    static int count;

public:
    Rectangle();
    Rectangle(int, int);
    ~Rectangle();
    void set(int, int);
    void setWidth(int);
    void setLength(int);
    int findCircumference(int, int);
    int findArea(int, int);
    int getWidth();
    int getLength();
    int getArea();
    int getCircumference();
    void show();
    static int getCount();
};
Rectangle::Rectangle() : width(0), length(0)
{
    ++Rectangle::count;
}
Rectangle::Rectangle(int w, int l) : width(w), length(l)
{
    ++Rectangle::count;
}
Rectangle::~Rectangle()
{
    --Rectangle::count;
    cout << "destructuring Rectangle\n";
}
void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}
void Rectangle::setWidth(int w) { width = w; }
void Rectangle::setLength(int l) { length = l; }
int Rectangle::getWidth() { return width; }
int Rectangle::getLength() { return length; }
int Rectangle::findArea(int w, int l) { return w * l; }
int Rectangle::findCircumference(int w, int l) { return 2 * (w + l); }
int Rectangle::getArea() { return findArea(width, length); }
int Rectangle::getCircumference() { return findCircumference(width, length); }
void Rectangle::show()
{
    cout << "Rectangle : (" << getWidth() << ", " << getLength() << ") ";
    cout << "Area : " << findArea(getWidth(), getLength()) << " : ";
    cout << "Circumference : " << findCircumference(getWidth(), getLength()) << endl;
}
int Rectangle::count = 0;
int Rectangle::getCount() { return count; }

#endif // RECTANGLE_H