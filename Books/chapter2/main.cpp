#include <iostream>

using namespace std;
class Point
{
    string name;
    double x;
    double y;

public:
    Point();
    Point(string, double, double);
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
    return 0;
}
Point::Point() : name("undefined"), x(0.0), y(0.0) {}
Point::Point(string n, double xx, double yy) : name(n), x(xx), y(yy) {}
void Point::show()
{
    cout << "Point : " << name << " is at (" << x << ", " << y << ")\n";
}
