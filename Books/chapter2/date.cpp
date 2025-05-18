#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    int day, month, year;
    Date d1, d2(day, month, year);
    d2.IDate();
    d1.show();
    cout << endl;
    d2.show();
    return 0;
}