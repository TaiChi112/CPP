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
    cout << endl;
    Student s1(personId, firstname, lastname, date, address, studentId, faculty, branch, amountOfCourses);
    cout << endl;
    s1.CalculateAverageGrade();
    cout << endl;
    s1.show();
    return 0;
}
