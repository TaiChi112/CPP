#ifndef DATE_H
#define DATE_H
#include <iostream>
using namespace std;

class Date
{
    int day, month, year;

public:
    Date();
    Date(int, int, int);
    ~Date();
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    void show();
};
Date::Date() : day(0), month(0), year(0) {}
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}
Date::~Date() { cout << "Destructuing Date" << endl; }
void Date::setDay(int d) { day = d; }
void Date::setMonth(int m) { month = m; }
void Date::setYear(int y) { year = y; }
void Date::show()
{
    cout << day << "/" << month << "/" << year << endl;
}

#endif
