#include <iostream>
#include <string>
#include "point/point.h"

using namespace std;

int main(){
    Point p1;
    p1.show();

    Point p2(3.0, 4.0, "Point 2");
    p2.show();

    p2.set_point(5.0, 6.0, "Point 2 Updated");
    p2.show();
    cout << "X coordinate of p2: " << p2.getX() << endl;
    cout << "Y coordinate of p2: " << p2.getY() << endl;    
    cout << "Name of p2: " << p2.getName() << endl;
    
    return 0;
}
