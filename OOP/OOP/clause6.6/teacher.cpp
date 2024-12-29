#include <iostream>
#include "teacher.h"

using namespace std;

int main()
{
    int personId(1), teacherId(1), day(28), month(03), year(2004);
    string firstname("TaiChi"), lastname("Master"), street("Ramkhamheang"), city("Bangkok"), country("Thailand"), subject("DSA");
    double salary(112112);
    Date date(day, month, year);
    Address address(street, city, country);
    Teacher t1(personId, firstname, lastname, date, address, teacherId, subject, salary);
    cout << endl;
    t1.show();
    cout << endl;
    return 0;
}