#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;

class Student
{
    int id;
    string firstname;
    string lastname;
    string date;
    int studentId;
    string faculty;
    string branch;
    double averageGrade;
    int amountOfCourses;

public:
    Student();
    Student(int, string, string, string, int, string, string, double, int);
    ~Student();
    void set(int, string, string, string, int, string, string, double, int);
    int getStudentId();
    string getFaculty();
    string getBranch();
    double getAverageGrade();
    void CalculateAverageGrade();
    void show();
};
Student::Student() : id(0), firstname("undefined"), lastname("undefined"), date("undefined"), studentId(0), faculty("undefined"), branch("undefined"), averageGrade(0.0), amountOfCourses(0) { set(id, firstname, lastname, date, studentId, faculty, branch, averageGrade, amountOfCourses); };
Student::Student(int id, string firstname, string lastname, string date, int studentId, string faculty, string branch, double averageGrade, int amountOfCourses) : id(id), firstname(firstname), lastname(lastname), date(date), studentId(studentId), faculty(faculty), branch(branch), averageGrade(averageGrade), amountOfCourses(amountOfCourses) { set(id, firstname, lastname, date, studentId, faculty, branch, averageGrade, amountOfCourses); };
Student::~Student() { cout << "destructuring Student : " << firstname << endl; }
void Student::set(int id, string firstname, string lastname, string date, int studentId, string faculty, string branch, double averageGrade, int amountOfCourses)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
    this->date = date;
    this->studentId = studentId;
    this->faculty = faculty;
    this->branch = branch;
    this->averageGrade = averageGrade;
    this->amountOfCourses = amountOfCourses;
}
int Student::getStudentId() { return studentId; }
string Student::getFaculty() { return faculty; }
string Student::getBranch() { return branch; }
double Student::getAverageGrade() { return averageGrade; }

void Student::show()
{
    cout << "id: " << id << endl;
    cout << "firstname: " << firstname << endl;
    cout << "lastname: " << lastname << endl;
    cout << "date: " << date << endl;
    cout << "Student id: " << studentId << endl;
    cout << "Faculty: " << faculty << endl;
    cout << "Branch: " << branch << endl;
    cout << "Average Grade: " << averageGrade << endl;
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
        cout << "Enter grade for course " << i + 1 << " : ";
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

#endif // STUDENT_H
