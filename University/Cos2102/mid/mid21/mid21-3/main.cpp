#include <iostream>
#include "dessert.h"
#include "cake.h"
#include "icecream.h"

using namespace std;

int main()
{
    Cake cake1, cake2(112, 2, 3, false);
    cout << "This is my first cake" << endl;
    cake1.showCake();
    cout << endl;
    cout << "This is my secound cake" << endl;
    cake2.showCake();
    cout << endl;

    Icecream icecream1, icecream2(1, 1, true);
    cout << endl;
    cout << "This is my first ice cream" << endl;
    icecream1.showIcecream();
    cout << endl;
    cout << "This is my secound ice cream" << endl;
    icecream2.showIcecream();
    cout << endl;
    return 0;
}