#ifndef MYRECT_H
#define MYRECT_H
#include <iostream>
using namespace std;
class Rectangle
{
    int width, length;
    static int count;

public:
    Rectangle() : width(0), length(0) { count++; }
    Rectangle(int w, int l) : width(w), length(l) { count++; }
    ~Rectangle() { count--; }

    void set(int w, int l)
    {
        width = w;
        length = l;
    }
    int getWidth() { return width; }
    int getLength() { return length; }
    int areaRectangle() { return width * length; }
    int circumference() { return 2 * (width + length); }
    void show()
    {
        cout << "Rectangle: " << "Width = " << width
             << ", Length = " << length
             << ", Area = " << areaRectangle()
             << ", Circumference = " << circumference() << endl;
    }

    static int getCount() { return count; }
};
int Rectangle::count = 0;
class MyRect
{

public:
};

#endif // MYRECT_H