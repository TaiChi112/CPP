#include <iostream>
#include "teacherassistance.h"

using namespace std;

int main()
{
    int personId(1), teacherId(1), studentId(1), day(28), month(03), year(2004), amountOfCourses(3), teacherAssistanceId(1), experience(9);
    string firstname("Charlie"), lastname("Chaplin"), street("Ramkhamhaeng"), city("Bangkok"), country("Thailand"), faculty("Science"), branch("CS"), subject("OOP");
    double salary(112112), averageGrade(4.0);
    Date date(day, month, year);
    Address address(street, city, country);
    TeacherAssistance ta(personId, firstname, lastname, date, address, teacherId, subject, salary, studentId, faculty, branch, amountOfCourses, teacherAssistanceId, experience);
    cout << endl;
    ta.show();
    cout << endl;
    return 0;
}