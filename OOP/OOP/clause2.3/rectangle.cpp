#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    int width(5), length(10);
    // create object of rectangle class

    Rectangle r1, r2(width, length);
    r1.show();
    cout << endl;
    r2.show();

    cout << endl;

    // set attribute of object r1
    cout << "set attribute Length and Width of object r1 : " << endl;
    cout << endl;
    r1.setLength(20);
    r1.setWidth(10);
    r1.show();
    cout << endl;

    cout << "get attribute Length of object r1 :  " << r1.getLength() << endl;
    cout << "get attribute Width of object r1 :  " << r1.getWidth() << endl;
    cout << endl;

    cout << "amount object : " << Rectangle::getCount() << endl;
    cout << endl;

    return 0;
}