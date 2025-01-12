#include <iostream>

using namespace std;
class Point
{
    int x, y;
    Point *data;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    bool operator==(const Point &p)
    {
        return x == p.x && y == p.y;
    }
    Point operator+(const Point &p)
    {
        return Point(x + p.x, y + p.y);
    }
    friend ostream &operator<<(ostream &out, const Point &p)
    {
        out << p.x << " " << p.y;
        return out;
    }
    friend istream &operator>>(istream &in, Point &p)
    {
        cout << "Input x" << endl;
        in >> p.x;
        cout << "Input y" << endl;
        in >> p.y;
        return in;
    }
    Point operator=(const Point &p)
    {
        if (this != &p)
        {
            x = p.x;
            y = p.y;
        }
        return *this;
    }
    Point operator++()
    {
        ++x;
        ++y;
        return *this;
    }
    Point operator++(int)
    {
        Point temp = *this;
        x++;
        y++;
        return temp;
    }
    Point &operator[](int index)
    {
        if (index < 0 || index > 1)
        {
            throw out_of_range("Index out of range");
        }
    }
    operator double()
    {
        return x;
    }
};
int main()
{
    Point p1(1, 2), p2(3, 8);
    cout << (p1 == p2) << endl;
    (p1 == p2) ? cout << "Equal" : cout << "Not Equal";
    Point p3 = p1 + p2;
    cout << endl;
    // cout << p3 << endl;
    // cin >> p1;
    // cout << p1 << endl;

    Point p4;
    p4 = p2;
    cout << p4 << endl;
    p4++;
    p4++;
    cout << p4 << endl;
    cout << p1[0] << " " << p4[1] << endl;
    double d = p2;
    cout << d << endl;
    return 0;
}