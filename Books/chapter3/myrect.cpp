#include <iostream>
#include "myrect.h"

using namespace std;

int main()
{
    MyRect mr(2, 3);
    mr.setRect(0, 0, 3, 4);
    mr.setRect(0, 1, 5, 6);
    mr.setRect(0, 2, 7, 8);
    mr.setRect(1, 0, 9, 10);
    mr.setRect(1, 1, 11, 12);
    mr.setRect(1, 2, 13, 14);
    mr.show();

    cout << "\nResetting array to 2 rows and 2 columns:\n";
    mr.reset(2, 2);
    mr.setRect(0, 0, 3, 4);
    mr.setRect(0, 1, 5, 6);
    mr.setRect(1, 0, 7, 8);
    mr.setRect(1, 1, 9, 10);
    mr.show();

    return 0;
}