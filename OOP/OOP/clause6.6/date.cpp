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
    cout << endl;

    cout << "Try to set new Date for ad1 object" << endl;
    cout << endl;
    d1.set(29, 05, 2004);
    d1.show();
    cout << endl;

    cout << "Try to get attribute of ad1 object" << endl;
    cout << endl;
    cout << "Day: " << d1.getDay() << endl;
    cout << "Month: " << d1.getMonth() << endl;
    cout << "Year: " << d1.getYear() << endl;
    cout << endl;

    return 0;
}