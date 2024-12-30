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
    int findCircumference();
    int findArea();
    int getWidth();
    int getLength();
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
int Rectangle::findCircumference()
{
    return 2 * (width + length);
}
int Rectangle::findArea()
{
    return width * length;
}
void Rectangle::show()
{
    cout << "Rectangle : (" << getWidth() << ", " << getLength() << ") ";
    cout << "Area : " << findArea() << " : ";
    cout << "Circumference : " << findCircumference() << endl;
}
int Rectangle::count = 0;
int Rectangle::getCount() { return count; }

#endif // RECTANGLE_H