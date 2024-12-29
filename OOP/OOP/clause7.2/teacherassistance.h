#ifndef TEACHERASSISTANCE_H
#define TEACHERASSISTANCE_H
#include "../chapter6/teacher.h"
#include "../chapter6/student.h"
#include <iostream>
using namespace std;
class TeacherAssistance : public Teacher, public Student
{
    int teacherAssistanceId;
    int experience;

public:
    TeacherAssistance();
    TeacherAssistance(int, string, string, Date, Address, int, string, double, int, string, string, int, int, int);
    ~TeacherAssistance();
    void set(int, int);
    int getTeacherAssistanceId();
    int getExperience();
    void show();
};
TeacherAssistance::TeacherAssistance() : Teacher(), Student(), teacherAssistanceId(0), experience(0) { set(teacherAssistanceId, experience); }
TeacherAssistance::TeacherAssistance(int personId, string firstname, string lastname, Date date, Address address, int teacherId, string subject, double salary, int studentId, string faculty, string branch, int amountOfCourses, int teacherAssistanceId, int experience) : Person(personId, firstname, lastname, date, address), Teacher(personId, firstname, lastname, date, address, teacherId, subject, salary), Student(personId, firstname, lastname, date, address, studentId, faculty, branch, amountOfCourses), teacherAssistanceId(teacherAssistanceId), experience(experience)
{
    set(teacherAssistanceId, experience);
}
TeacherAssistance::~TeacherAssistance() { cout << "destructuring Teacher Assistance : " << getTeacherAssistanceId() << " : " << getExperience() << endl; }
void TeacherAssistance::set(int teacherAssistanceId, int experience)
{
    teacherAssistanceId = teacherAssistanceId;
    experience = experience;
}

int TeacherAssistance::getTeacherAssistanceId()
{
    return teacherAssistanceId;
}

int TeacherAssistance::getExperience()
{
    return experience;
}

void TeacherAssistance::show()
{
    Person::show();

    cout << "\n[Teacher Details]\n";
    cout << "Teacher ID : " << getTeacherId() << endl;
    cout << "Subject : " << getSubject() << endl;
    cout << "Salary : " << getSalary() << endl;

    cout << "\n[Student Details]\n";
    cout << "Student ID: " << getStudentId() << endl;
    cout << "Faculty (Science): " << getFaculty() << endl;
    cout << "Branch (CS):  " << getBranch() << endl;
    cout << "Average Grade: " << getAverageGrade() << endl;
    cout << "Amount of Courses: " << getAmountOfCourses() << endl;

    cout << "\n[Teacher Assistance Details]\n";
    cout << "Teacher Assistance ID : " << getTeacherAssistanceId() << endl;
    cout << "experience : " << getExperience() << " years" << endl;
}
void ITeacherAssistance(int &teacherAssistanceId, int &experience)
{
    cout << "Enter teacher assistance ID : ";
    cin >> teacherAssistanceId;
    cout << "Enter experience (years): ";
    cin >> experience;
    cout << "--------------" << endl;
}
#endif // TEACHERASSISTANCE_H