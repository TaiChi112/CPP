#include <iostream>
#include "class.h"
#include "mid.h"
#include "type.h"

using namespace std;

void show(int *x)
{
    cout << "int : " << *x << endl;
};
int main()
{
    int x1;
    x1 = 112;
    show(&x1);
    return 0;
};
