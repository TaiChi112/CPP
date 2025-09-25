#include <iostream>
#include "teacherassistance.h"

using namespace std;

int main()
{
    int personId(1), teacherId(1), studentId(1), teacherAssistanceId(1), day(28), month(03), year(2004), amountOfCourses(3), experience(9);
    string firstname("Charlie"), lastname("Chaplin"), street("Ramkhamhaeng"), city("Bangkok"), country("Thailand"), faculty("Science"), branch("CS"), subject("OOP");
    double salary(112112), averageGrade(0.0);

    Date date(day, month, year);
    Address address(street, city, country);
    Person person(personId, firstname, lastname, date, address);
    Student student(personId, firstname, lastname, date, address, studentId, faculty, branch, averageGrade);
    Teacher teacher(personId, firstname, lastname, date, address, teacherId, subject, salary);
    TeacherAssistance ta1, ta2(person, teacher, student, teacherAssistanceId, experience);

    cout << endl;
    ta1.show();
    cout << endl;
    ta2.show();
    cout << endl;
    return 0;
}