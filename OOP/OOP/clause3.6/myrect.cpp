#include <iostream>
#include "myrect.h"

using namespace std;

int main()
{
    MyRect mr2(2, 3);
    mr2.setRect(0, 0, 3, 4); // set Rectangle at index col(0), row(0) with width(3), height(4)
    mr2.setRect(0, 1, 5, 6);
    mr2.setRect(0, 2, 7, 8);
    mr2.setRect(1, 0, 9, 10);
    mr2.setRect(1, 1, 11, 12);
    mr2.setRect(1, 2, 13, 14);
    cout << endl;
    mr2.show();
    cout << endl;

    cout << "Try to get my Rectangle at index : " << endl;
    mr2.getRect(1, 0).show();
    cout << endl;

    cout << "try to get Rows of object mr2 : " << mr2.getRow() << endl;
    cout << "try to get Cols of object mr2 : " << mr2.getCol() << endl;
    cout << endl;
    
    cout << "Try to reset array myRect to 2 row and 2 col" << endl;
    cout << endl;
    mr2.reset(2, 2); // reset array to 2 row and 2 col
    mr2.setRect(0, 0, 3, 4);
    mr2.setRect(0, 1, 5, 6);
    mr2.setRect(1, 0, 7, 8);
    mr2.setRect(1, 1, 9, 10);
    cout << endl;
    mr2.show();
    cout << endl;

    return 0;
}