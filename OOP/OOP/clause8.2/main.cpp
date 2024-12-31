#include <iostream>
#include "main.h"
using namespace std;

int main()
{
    Rectangle rect1(3, 4);
    Rectangle rect2(5, 6);
    Rectangle rect3(7, 8);
    cout << "Rectangle 1: " << rect1.getLength() << " x " << rect1.getWidth() << endl;
    cout << "Rectangle 2: " << rect2.getLength() << " x " << rect2.getWidth() << endl;
    cout << "Rectangle 3: " << rect3.getLength() << " x " << rect3.getWidth() << endl;
    cout << "Rectangle count: " << Rectangle::getCount() << endl;
    cout << "Rectangle 1 area: " << rect1.findArea() << endl;
    cout << "Rectangle 2 area: " << rect2.findArea() << endl;
    cout << "Rectangle 3 area: " << rect3.findArea() << endl;
    rect1++;
    cout << "Rectangle 1 after prefix increment: " << rect1.getLength() << " x " << rect1.getWidth() << endl;
    rect2++;
    cout << "Rectangle 2 after postfix increment: " << rect2.getLength() << " x " << rect2.getWidth() << endl;
    --rect3;
    cout << "Rectangle 3 after prefix decrement: " << rect3.getLength() << " x " << rect3.getWidth() << endl;

    return 0;
}