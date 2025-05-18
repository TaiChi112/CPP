#include <iostream>
#include "student.h"
#include "person.h"

using namespace std;

int main()
{
    int personId, studentId, day, month, year, amountOfCourses;
    double averageGrade(0.0);
    string firstname, lastname, street, city, country, faculty, branch;
    Date date;
    Address address;
    IPerson(personId, firstname, lastname, date, address);
    cout << endl;
    IStudent(studentId, faculty, branch, amountOfCourses);
    cout << endl;
    Student s1(personId, firstname, lastname, date, address, studentId, faculty, branch, amountOfCourses);
    cout << endl;
    s1.CalculateAverageGrade();
    cout << endl;
    s1.show();
    return 0;
}
