#include <iostream>
#include "myrect.h"

using namespace std;

int main()
{
    MyRect mr(2, 3);
    mr.setRect(0, 0, 3, 4); // set Rectangle at index col(0), row(0) with width(3), height(4)
    mr.setRect(0, 1, 5, 6);
    mr.setRect(0, 2, 7, 8);
    mr.setRect(1, 0, 9, 10);
    mr.setRect(1, 1, 11, 12);
    mr.setRect(1, 2, 13, 14);
    cout << endl;
    mr.show();

    cout << endl;
    cout << "Try to get myReact" << endl;
    mr.getRect(0, 0).show();

    cout << endl;
    cout << "Try to reset array myRect to 2 row and 2 col" << endl;
    cout << endl;
    mr.reset(2, 2); // reset array to 2 row and 2 col
    mr.setRect(0, 0, 3, 4);
    mr.setRect(0, 1, 5, 6);
    mr.setRect(1, 0, 7, 8);
    mr.setRect(1, 1, 9, 10);
    cout << endl;
    mr.show();
    cout << endl;

    return 0;
}