#include <iostream>
#include "student.h"
#include "person.h"

using namespace std;

int main()
{
    int personId(1), studentId(1), day(28), month(03), year(2004), amountOfCourses(3);
    double averageGrade(0.0);
    string firstname("Bob"), lastname("Bobsky"), street("Ramkhamheang"), city("Bangkok"), country("Thailand"), faculty("Science"), branch("CS");
    Date date(day, month, year);
    Address address(street, city, country);
    Person p1(personId, firstname, lastname, date, address);
    Student s1, s2(p1, date, address, studentId, faculty, branch, amountOfCourses);

    s1.show();
    s1.CalculateAverageGrade();
    cout << endl;
    s2.CalculateAverageGrade();
    cout << endl;
    s2.show();
    cout << endl;

    // set attribute object s1

    cout << "Try to set new Student for s1 object" << endl;
    cout << endl;
    date.set(29, 03, 2003);
    address.set("Sukhumvit", "Bangkok", "Thailand");
    p1.set(2, "Alice", "Alicia", date, address);
    s1.set(p1, 2, "Engineering", "Software Engineering", 0);
    s1.show();
    cout << endl;

    cout << "Try to get attribute of  Student for s1 object" << endl;
    cout << endl;
    cout << "Id: " << p1.getId() << endl;
    cout << "Firstname: " << p1.getFirstname() << endl;
    cout << "Lastname: " << p1.getLastname() << endl;
    cout << "Date: ";
    p1.getDate().show();
    cout << "Address: ";
    p1.getAddress().show();
    cout << "Faculty:" << s1.getFaculty() << endl;
    cout << "Branch:" << s1.getBranch() << endl;
    cout << "Average Grade:" << s1.getAverageGrade() << endl;
    cout << "Amount of Courses:" << s1.getAmountOfCourses() << endl;
    cout << endl;

    return 0;
}
