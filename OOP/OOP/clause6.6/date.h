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
    void set(int, int, int);
    int getDay();
    int getMonth();
    int getYear();
    void show();
    void IDate();
};
Date::Date() : day(0), month(0), year(0) {}
Date::Date(int d, int m, int y) : day(d), month(m), year(y) {}
Date::~Date() { cout << "Destructuing Date : " << getDay() << " : " << getMonth() << " : " << getYear() << endl; }
void Date::set(int d, int m, int y)
{
    day = d;
    month = m;
    year = y;
}
int Date::getDay() { return day; }
int Date::getMonth() { return month; }
int Date::getYear() { return year; }

void Date::show()
{
    cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
}
void Date::IDate()
{
    cout << "Enter your Date information (day month year)\n";
    do
    {
        cout << "Enter day (1-31) : ";
        cin >> day;
    } while (day < 1 || day > 31);

    do
    {
        cout << "Enter month (1-12) : ";
        cin >> month;
    } while (month < 1 || month > 12);

    cout << "Enter year : ";
    cin >> year;
}

#endif // DATE_H
