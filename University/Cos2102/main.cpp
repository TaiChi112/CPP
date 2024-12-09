#include <iostream>

using namespace std;
class Student
{
    int id;
    string name;

public:
    Student(int, string);
    void showStudent();
};
class Course
{
    int id;
    string name;

public:
    Course(int, string);
    void showCourse();
};
class Registration
{
    Student student;
    Course course;

public:
    Registration(Student, Course);
    void showRegistration();
};
Student::Student(int id, string name) : id(id), name(name) {}
void Student::showStudent()
{
    cout << "Id: " << id << endl;
    cout << "Name: " << name << endl;
}
Course::Course(int id, string name) : id(id), name(name) {}
void Course::showCourse()
{
    cout << "Course Id: " << id << endl;
    cout << "Course Name: " << name << endl;
}
Registration::Registration(Student student, Course course) : student(student), course(course) {}
void Registration::showRegistration()
{
    student.showStudent();
    course.showCourse();
}

int main()
{
    Student student1(1, "John Doe");
    student1.showStudent();
    Course course1(1, "Math");
    course1.showCourse();
    Registration registration1(student1, course1);
    registration1.showRegistration();
    return 0;
}