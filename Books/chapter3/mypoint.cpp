#include <iostream>
#include "mypoint.h"
using namespace std;

int main()
{
    MyPoint mp1, mp2(3);
    mp1.show();
    mp2.show();

    mp2.setPoint(0, "Alice", 0.1, 0.2);
    mp2.setPoint(1, "Bob", 1.1, 1.2);
    mp2.setPoint(2, "Charlie", 2.1, 2.2);

    mp2.show();

    cout << "Try to reset point..." << endl;
    mp2.reset(2);
    mp2.show();

    mp2.setPoint(0, "Alex", 0.1, 0.2);
    mp2.setPoint(1, "Well", 1.1, 1.2);

    cout << "After reset point..." << endl;
    mp2.show();
    return 0;
}