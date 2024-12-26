#include <iostream>
#include "student.h"

using namespace std;

int main()
{
    int id,studentId;
    string firstname, lastname, date, faculty, branch;
    double averageGrade(0.00), amountOfCourses;
    cout << "Enter ID : ";
    cin >> id;
    cout << "Enter first name : ";
    cin >> firstname;
    cout << "Enter last name : ";
    cin >> lastname;
    cout << "Enter date : ";
    cin >> date;
    cout << "Enter Student ID : ";
    cin >> studentId;
    cout << "Enter faculty : ";
    cin >> faculty;
    cout << "Enter branch : ";
    cin >> branch;
    cout << "Enter amount of courses : ";
    cin >> amountOfCourses;
    Student s1, s2(id, firstname, lastname, date, studentId, faculty, branch, averageGrade, amountOfCourses);
    s2.CalculateAverageGrade();
    cout << endl;
    s1.show();
    cout << endl;
    s2.show();
    return 0;
}
