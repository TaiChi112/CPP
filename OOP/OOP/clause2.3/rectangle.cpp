#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    int width(5), length(10);

    cout << "get amount object before create object : " << Rectangle::getCount() << endl;
    cout << endl;

    // create object of rectangle class

    Rectangle r1, r2(width, length);
    r1.show();
    cout << endl;
    r2.show();
    cout << endl;

    // set attribute of object r1
    
    cout << "try to set attribute of object r1 : " << endl;
    cout << endl;
    r1.set(10, 20);
    r1.show();
    cout << endl;

    cout << "get attribute Length of object r1 :  " << r1.getLength() << endl;
    cout << "get attribute Width of object r1 :  " << r1.getWidth() << endl;
    cout << "get area of object r1 : " << r1.findArea() << endl;
    cout << "get circumference of object r1 : " << r1.findCircumference() << endl;
    cout << endl;

    cout << "get amount object after create object : " << Rectangle::getCount() << endl;
    cout << endl;

    return 0;
}