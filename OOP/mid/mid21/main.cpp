#include <iostream>
#include "prototype.h"

using namespace std;

int main()
{
    Dessert d1, d2(112);
    d1.setPrice(113);
    cout << "price of object d1 : ";
    d1.show();
    cout << "price of object d2 : ";
    d2.show();
    cout << "Try to set price of d2 to 118" << endl;
    d2.setPrice(118);
    cout << "price of object d2 after use method set : ";
    d2.show();
    return 0;
}