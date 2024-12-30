#include <iostream>
#include "teacher.h"
#include "../chapter2/person.h"

using namespace std;

int main()
{
    int personId, teacherId, day, month, year;
    string firstname, lastname, street, city, country, subject;
    double salary;
    Date date;
    Address address;
    IPerson(personId, firstname, lastname, date, address);
    cout << endl;
    ITeacher(teacherId, subject, salary);
    Teacher t1(personId, firstname, lastname, date, address, teacherId, subject, salary);
    cout << endl;
    t1.show();
    cout << endl;
    return 0;
}