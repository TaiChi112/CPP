#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    int width, length;
    IRectangle(width, length);
    cout << endl;
    Rectangle r1, r2(width, length);
    r1.show();
    cout << endl;
    r2.show();
    cout << endl;
    cout << "amount object : " << Rectangle::getCount() << endl;
    cout << endl;
    return 0;
}