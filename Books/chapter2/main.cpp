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
    int getX();
    int getY();
    void show();
    static int getCount();
};
class Rectangle
{
    int width, length;

public:
    Rectangle();
    Rectangle(int, int);
    ~Rectangle();
    void show();
};
int main()
{
    string name;
    double x, y;
    cout << "Enter Point name : ";
    cin >> name;
    cout << "Enter x coordinate : ";
    cin >> x;
    cout << "Enter y coordinate : ";
    cin >> y;
    Point p1, p2(name, x, y);
    p1.show();
    cout << endl;
    p2.show();
    cout << "amount object : " << Point::getCount() << endl;
    int width, length;
    cout << "Enter width : ";
    cin >> width;
    cout << "Enter length : ";
    cin >> length;
    Rectangle r1, r2(width, length);
    r1.show();
    cout << endl;
    r2.show();
    return 0;
}
Point::Point() : name("undefined"), x(0.0), y(0.0) { ++Point::count; }
Point::Point(string n, double xx, double yy) : name(n), x(xx), y(yy)
{
    set(name, x, y);
    ++Point::count;
}
Point::~Point() { cout << "destructuring Point : " << name << "\n"; }
int Point::count = 0;
int Point::getCount() { return count; }
void Point::set(string n, double xx, double yy)
{
    this->name = n;
    this->x = xx;
    this->y = yy;
}
int Point::getX() { return x; }
int Point::getY() { return y; }
void Point::show()
{
    cout << "Point : " << name << " is at (" << getX() << ", " << getY() << ")\n";
}
Rectangle::Rectangle() : width(0), length(0) {}
Rectangle::Rectangle(int w, int l) : width(w), length(l) {}
Rectangle::~Rectangle() { cout << "destructuring Rectangle\n"; }
