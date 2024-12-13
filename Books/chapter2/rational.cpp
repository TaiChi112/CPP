#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
    double numerator, denominator;
    IORational(numerator, denominator);
    Rational r1, r2(numerator, denominator);
    r1.calculateRational();
    r2.calculateRational();
    r1.show();
    r2.show();
    return 0;
}