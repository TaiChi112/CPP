#include <iostream>
#include "prototype.h"

using namespace std;

int main()
{
    EletricSharpener a(1, 2, 100.0, 2);             // type, color, price
    PrismSharpener b(3, true, 4, 150.0, 2);         // hand, box, color, price
    PlanetarySharpener c(true, false, 2, 500.0, 2); // box, color, price
    PencilSharpener d(5, 200.0, 2), p(3, 112.0, 2); // color, price
    cout << a.getPrice() << endl;
    cout << b.getPrice() << endl;
    cout << c.getPrice() << endl;
    cout << d.getPrice() << endl;

    return 0;
}