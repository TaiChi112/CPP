#include <iostream>
#include "circle.h"
#include "point.h"
using namespace std;

int main()
{
    Point P("Center", 0, 0);
    Point R("Inside", 1, 1);
    Point Q("Outside", 3, 3);

    double radius(2.0);
    Circle C1(P, radius);
    C1.show();
    cout << endl;

    cout << "P : ";
    P.show();
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

    cout << "Try to set attribute radius of object C1" << endl;
    C1.setRadius(5.0);
    cout << endl;

    cout << "Try to get attribute radius of object C1" << endl;
    cout << "Radius of C1 : " << C1.getRadius() << endl;
    cout << endl;

    cout << "After new set radius of C1 : " << endl;
    cout << "P : ";
    P.show();
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