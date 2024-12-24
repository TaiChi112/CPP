#include <iostream>

using namespace std;
class Point
{
    int x, y;

public:
    Point() : x(0), y(0) {}
    Point(int x, int y) : x(x), y(y) {}
    void IPoint()
    {
        cout << "Enter x : ";
        cin >> x;
        cout << "Enter y : ";
        cin >> y;
    }
    void OPoint()
    {
        cout << "x : " << x << endl;
        cout << "y : " << y << endl;
    }
};
int main()
{
    Point *p1 = new Point[2];
    Point *p2 = new Point(3, 4);
    for (int i = 0; i < 2; i++)
    {
        p1[i].IPoint();
    }
    for (int i = 0; i < 2; i++){
        p1[i].OPoint();
    }
    delete p1;
    delete p2;
    return 0;
}