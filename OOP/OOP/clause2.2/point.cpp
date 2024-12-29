#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    // copy this CLI for run code -> g++ point.cpp -o point.exe && ./point.exe
    string name("A");
    double x(4.0), y(5.0);

    Point p1, p2(name, x, y);
    cout << endl;
    p1.show();
    cout << endl;
    p2.show();
    cout << endl;
    cout << "amount object : " << Point::getCount() << endl;
    cout << endl;

    return 0;
}