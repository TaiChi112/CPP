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
    Person p1(personId, firstname, lastname, date, address);
    Teacher t1, t2(p1, date, address, teacherId, subject, salary);

    t1.show();
    cout << endl;
    t2.show();
    cout << endl;

    // set attribute object t1

    cout << "Try to set new Teacher for t1 object" << endl;
    cout << endl;
    date.set(29, 03, 2003);
    address.set("Sukhumvit", "Bangkok", "Thailand");
    p1.set(2, "Alice", "Alicia", date, address);
    t1.set(p1, 2, "Math", 112112);
    t1.show();
    cout << endl;

    cout << "Try to get new Teacher for t1 object" << endl;
    cout << endl;
    cout << "Id: " << p1.getId() << endl;
    cout << "Firstname: " << p1.getFirstname() << endl;
    cout << "Lastname: " << p1.getLastname() << endl;
    cout << "Date: ";
    p1.getDate().show();
    cout << "Address: ";
    p1.getAddress().show();
    cout << "Teacher ID:" << t1.getTeacherId() << endl;
    cout << "Subject:" << t1.getSubject() << endl;
    cout << "Salary:" << t1.getSalary() << endl;
    cout << endl;

    return 0;
}