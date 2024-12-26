#include <iostream>
#include "circle.h"
#include "../chapter2/point.h"
using namespace std;

int main()
{
    Point P("Center", 0, 0);
    Point R("Inside", 1, 1);
    Point Q("Outside", 3, 3);
    cout << endl;
    Circle C1(P, 2);
    C1.show();
    R.show();
    Q.show();
    cout << endl;

    cout << "Point ";
    R.show();
    cout << (isInside(C1, R) ? "is inside the circle." : "is outside the circle.") << endl;
    cout << endl;

    cout << "Point ";
    Q.show();
    cout << (isInside(C1, Q) ? "is inside the circle." : "is outside the circle.") << endl;
    cout << endl;
    return 0;
}