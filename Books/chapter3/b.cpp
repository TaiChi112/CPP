#include <iostream>

using namespace std;

class Point
{
    int x, y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    int getX() const { return x; }
    int getY() const { return y; }
    void show()
    {
        cout << "this : " << this << endl; // output the address of default object
        cout << "x : " << getX() << endl;
        cout << "y : " << getY() << endl;
    }
};
int main()
{
    Point p1, p2(10, 20), p3(30, 40);
    cout << &p1 << endl;
    cout << &p2 << endl;
    cout << &p3 << endl;
    p1.show();
    p2.show();

    Point *p;
    p = &p1;
    p->show();
    
    Point *q = new Point(50, 60);
    q->show();
    delete q;

    return 0;
}