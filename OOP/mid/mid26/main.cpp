#include <iostream>
#include "prototype.h"

using namespace std;

int main()
{
    Size s1(10, 20, 30);
    Tops *t1 = new Tops[3];
    t1[0].setPrice(100);
    t1[0].setSize(1);
    t1[0].setType(1);
    t1[1].setPrice(200);
    t1[1].setSize(2);
    t1[1].setType(2);
    t1[2].setPrice(300);
    t1[2].setSize(3);
    t1[2].setType(3);

    Pants *p1 = new Pants[3];
    p1[0].setPrice(300);
    p1[0].setSize(3);
    p1[0].setLength(1);
    p1[1].setPrice(400);
    p1[1].setSize(4);
    p1[1].setLength(2);
    p1[2].setPrice(500);
    p1[2].setSize(1);
    p1[2].setLength(3);

    Wardrobe w1(s1, t1, 3, p1, 3);
    w1.show();
    return 0;
}