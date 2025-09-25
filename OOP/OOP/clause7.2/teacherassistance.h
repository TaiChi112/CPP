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
    TeacherAssistance(Person &person, Teacher &teacher, Student &student, int taId, int experience);
    ~TeacherAssistance();
    void set(Teacher &teacher, Student &student, int teacherAssistanceId, int experience);
    int getTeacherAssistanceId();
    int getExperience();
    void show();
};
TeacherAssistance::TeacherAssistance() : Person(), Teacher(), Student(), teacherAssistanceId(0), experience(0) {}
TeacherAssistance::TeacherAssistance(Person &person, Teacher &teacher, Student &student, int taId, int experience) : Person(person), Teacher(teacher), Student(student), teacherAssistanceId(taId), experience(experience) {}

TeacherAssistance::~TeacherAssistance() { cout << "destructuring Teacher Assistance : " << getTeacherAssistanceId() << " : " << getExperience() << endl; }
void TeacherAssistance::set(Teacher &teacher, Student &student, int teacherAssistanceId, int experience)
{
    Teacher::set(teacher.getTeacherId(), teacher.getSubject(), teacher.getSalary());
    Student::set(student.getStudentId(), student.getFaculty(), student.getBranch(), student.getAmountOfCourses());
    this->teacherAssistanceId = teacherAssistanceId;
    this->experience = experience;
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
    cout << "Teacher Asssistance Informaion : " << endl;
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