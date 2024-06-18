#include <iostream>
#include "class.h"
#include "mid.h"

using namespace std;

int main()
{
    int x1 = 5;
    int x2(5);
    cout << "value var x1 : " << x1 << endl;
    cout << "value var x2 : " << x2 << endl;
    cout << "address var x1 : " << &x1 << endl;
    cout << "address var x2 : " << &x2 << endl;
    int *y1 = &x1;
    int *y2 = &x2;
    cout << "value pointer y1 which keeping address of x1 : " << *y1 << endl;
    cout << "value pointer y1 which keeping address of x1 : " << *y2 << endl;
    cout << "address of x1 :" << y1 << endl;
    cout << "address of x1 :" << y2 << endl;
    cout << "address pointer y1 : " << &y1 << endl;
    cout << "address pointer y1 : " << &y2 << endl;

    delete y1;
    delete y2;

    return 0;
}