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
    int getDay();
    int getMonth();
    int getYear();
    void show();
    bool isLeapYear();
    int getDaysInMonth();
};
Date::Date() : day(0), month(0), year(0) {}
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}
Date::~Date() { cout << "Destructuing Date" << endl; }
void Date::setDay(int d) { day = d; }
void Date::setMonth(int m) { month = m; }
void Date::setYear(int y) { year = y; }
int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }
void Date::show()
{
    cout << day << "/" << month << "/" << year << endl;
    getDaysInMonth();
    if (isLeapYear())
        cout << "Leap Year" << endl;
    else
        cout << "Not Leap Year" << endl;
}
bool Date::isLeapYear()
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    return false;
}
int Date::getDaysInMonth()
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        return isLeapYear() ? 29 : 28;
    default:
        cout << "Invalid month!" << endl;
        return -1; // Invalid month
    }
}
void IODate(int &day, int &month, int &year)
{
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
}
#endif
