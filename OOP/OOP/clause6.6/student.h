#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "person.h"
using namespace std;

class Student : virtual public Person
{
    int studentId;
    string faculty;
    string branch;
    double averageGrade;
    int amountOfCourses;

public:
    Student();
    Student(Person&, Date &, Address &, int, string, string, int);
    ~Student();
    void set(Person&, int, string, string, int);
    int getStudentId();
    string getFaculty();
    string getBranch();
    double getAverageGrade();
    int getAmountOfCourses();
    void CalculateAverageGrade();
    void show();
};
Student::Student() : Person(), studentId(0), faculty("undefined"), branch("undefined"), amountOfCourses(0), averageGrade(0.0) {};
Student::Student(Person &p, Date &date, Address &address, int studentId, string faculty, string branch, int amountOfCourses) : Person(p), studentId(studentId), faculty(faculty), branch(branch), amountOfCourses(amountOfCourses), averageGrade(0.0) {};
Student::~Student()
{
    cout << "destructuring Student : " << getStudentId() << " : " << getFaculty() << " : " << getBranch() << endl;
}
void Student::set(Person &p, int studentId, string faculty, string branch, int amountOfCourses)
{
    Person::set(p.getId(), p.getFirstname(), p.getLastname(), p.getDate(), p.getAddress());
    this->studentId = studentId;
    this->faculty = faculty;
    this->branch = branch;
    this->amountOfCourses = amountOfCourses;
}
int Student::getStudentId()
{
    return studentId;
}
string Student::getFaculty()
{
    return faculty;
}
string Student::getBranch()
{
    return branch;
}
double Student::getAverageGrade()
{
    return averageGrade;
}
int Student::getAmountOfCourses()
{
    return amountOfCourses;
}

void Student::show()
{
    Person::show();
    cout << "Student id: " << getStudentId() << endl;
    cout << "Faculty : " << getFaculty() << endl;
    cout << "Branch :  " << getBranch() << endl;
    cout << "Average Grade: " << getAverageGrade() << endl;
    cout << "Amount of Courses: " << amountOfCourses << endl;
    cout << "--------------" << endl;
}
void Student::CalculateAverageGrade()
{
    if (amountOfCourses <= 0)
    {
        cout << "Invalid number of courses.\n";
        return;
    }
    double summation(0.0), grade(0.0);
    for (int i = 0; i < amountOfCourses; i++)
    {
        cout << "Enter grade for course (1.0 - 4.0) " << i + 1 << " : ";
        cin >> grade;
        if (grade < 0.0 || grade > 4.0)
        {
            cout << "Invalid grade! Please Enter a value between 0.0 and 4.0\n";
            i--;
            continue;
        }
        summation += grade;
    }
    averageGrade = summation / amountOfCourses;
}
void IStudent(int &studentId, string &faculty, string &branch, int &amountOfCourses)
{
    cout << "Enter student ID : ";
    cin >> studentId;
    cout << "Enter faculty (Science): ";
    cin >> faculty;
    cout << "Enter branch (CS): ";
    cin >> branch;
    cout << "Enter amount of courses : ";
    cin >> amountOfCourses;
    cout << "--------------" << endl;
}

#endif // STUDENT_H
