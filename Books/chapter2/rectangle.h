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
    int getWidth();
    int getLength();
    int areaReatangle(int, int);
    int circumference(int, int);
    void show();
    static int getCount();
};
Rectangle::Rectangle() : width(0), length(0)
{
    ++Rectangle::count;
    set(width, length);
}
Rectangle::Rectangle(int w, int l) : width(w), length(l)
{
    ++Rectangle::count;
    set(width, length);
}
Rectangle::~Rectangle() { cout << "destructuring Rectangle\n"; }
void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}
int Rectangle::getWidth() { return width; }
int Rectangle::getLength() { return length; }
int Rectangle::areaReatangle(int w, int l) { return w * l; }
int Rectangle::circumference(int w, int l) { return 2 * (w + l); }
void Rectangle::show()
{
    cout << "Rectangle : (" << width << ", " << length << ")\n";
    cout << "Area : " << areaReatangle(width, length) << endl;
    cout << "Border : " << circumference(width, length) << endl;
}
int Rectangle::count = 0;
int Rectangle::getCount() { return count; }
void IRectangle(int &width, int &length)
{
    cout << "Enter width : ";
    cin >> width;
    cout << "Enter length : ";
    cin >> length;
}
#endif // RECTANGLE_H