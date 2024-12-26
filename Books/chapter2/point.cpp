#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    string name;
    double x, y;
    cout << endl;
    cout << "Enter Point name : ";
    cin >> name;
    cout << "Enter x coordinate : ";
    cin >> x;
    cout << "Enter y coordinate : ";
    cin >> y;
    cout << endl;
    Point p1, p2(name, x, y);
    p1.show();
    p2.show();
    cout << endl;
    cout << "amount object : " << Point::getCount() << endl;
    cout << endl;
    return 0;
}