#include <iostream>
#include "teacherassistance.h"

using namespace std;

int main()
{
    int personId, teacherId, studentId, day, month, year, amountOfCourses, teacherAssistanceId, experience;
    string firstname, lastname, street, city, country, faculty, branch, subject;
    double salary, averageGrade(0.0);
    Date date(28, 3, 2004);
    Address address("Ramkhamhaeng", "Bangkok", "Thailand");
    IPerson(personId, firstname, lastname, date, address);
    cout << endl;
    ITeacher(teacherId, subject, salary);
    cout << endl;
    IStudent(studentId, faculty, branch, amountOfCourses);
    cout << endl;
    ITeacherAssistance(teacherAssistanceId, experience);
    cout << endl;
    TeacherAssistance ta(personId, firstname, lastname, date, address, teacherId, subject, salary, studentId, faculty, branch, amountOfCourses, teacherAssistanceId, experience);
    ta.show();
    cout << endl;
    return 0;
}