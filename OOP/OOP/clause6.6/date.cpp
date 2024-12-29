#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    int day(28), month(03), year(2004);
    Date d1, d2(day, month, year);
    d1.show();
    cout << endl;
    d2.show();
    return 0;
}