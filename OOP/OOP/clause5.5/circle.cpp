#include <iostream>
#include "circle.h"
#include "point.h"
using namespace std;

int main()
{
    Point P("Center", 0, 0);
    Point R("Inside", 1, 1);
    Point Q("Outside", 3, 3);
    Circle C1(P, 2.0);
    C1.show();
    cout << endl;

    cout << "R : ";
    R.show();
    cout << "Q : ";
    Q.show();
    cout << endl;

    cout << "Point R : ";
    cout << (isInside(C1, R) ? "is inside the circle." : "is outside the circle.") << endl;
    cout << endl;

    cout << "Point Q : ";
    cout << (isInside(C1, Q) ? "is inside the circle." : "is outside the circle.") << endl;
    cout << endl;
    return 0;
}