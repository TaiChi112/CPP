#include <iostream>
#include "vector.h"
using namespace std;

int main()
{
    Vector v1;
    cout << "Length of v1 : " << v1.length() << endl;

    Vector v2(5);
    v2.show();
    return 0;
}