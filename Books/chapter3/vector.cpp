#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector v1;
    cout << "Length of v1 : " << v1.length() << endl;

    Vector v2(5);
    v2.show();

    v2.set(0, 10);
    v2.set(1, 20);
    v2.set(2, 30);
    v2.set(3, 40);
    v2.set(4, 50);
    v2.show();

    cout << "Get element at index : " << v2.get(2) << endl;

    v2.resize(7);
    v2.show();

    v2.resize(3);
    v2.show();

    return 0;
}