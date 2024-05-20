#include <iostream>

using namespace std;

int main()
{
    cout << endl;
    // heap memory & How to use it!
    cout << "This is part of dynamic allocate heap memory" << endl;
    cout << endl;
    int *x1 = new int;
    int *x2 = new int;
    int *x3 = new int;
    *x1 = 10;
    *x2 = 20;
    *x3 = 30;
    cout << "Value in varibale x1 : " << *x1 << endl;
    cout << "Value in varibale x2 : " << *x2 << endl;
    cout << "Value in varibale x3 : " << *x3 << endl;
    delete x1, x2, x3;
    cout << endl;

    // How to use dereference
    cout << "This is part of testing How to display address" << endl;
    cout << endl;
    int x4 = 10;
    int x5 = 14;
    int x6 = 112;
    cout << "Display address variable x4 : " << &x4 << endl;
    cout << "Display address variable x5 : " << &x5 << endl;
    cout << "Display address variable x6 : " << &x6 << endl;
    cout << endl;

    int *x7, *x8, *x9;

    x7 = &x4;
    x8 = &x5;
    x9 = &x6;

    cout << "This is part of How to dereference" << endl;
    cout << endl;

    cout << "Value pointer x7 & dereference value x4 : " << *x7 << endl;
    cout << "Value pointer x8 & dereference value x5 : " << *x8 << endl;
    cout << "Value pointer x9 & dereference value x9 : " << *x9 << endl;

    cout << endl;
    cout << "Display address pointer x7,x8,x9" << endl;
    cout << endl;

    cout << "Value pointer x7 : " << &x7 << endl;
    cout << "Value pointer x8 : " << &x8 << endl;
    cout << "Value pointer x9 : " << &x9 << endl;

    delete x7;
    delete x8;
    delete x9;
    return 0;
}