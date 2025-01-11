#include <iostream>
#include "prototype.h"

using namespace std;

int main()
{
    PencilSharpener p1, p2(1, 2.0);
    p1.show();
    cout << endl;
    p2.show();
    return 0;
}