#ifndef TEACHER_H
#define TEACHER_H
#include <iostream>
#include "person.h"

using namespace std;
class Teacher : virtual public Person

{
    int teacherId;
    string subject;
    double salary;

public:
    Teacher();
    Teacher(int, string, string, Date, Address, int, string, double);
    ~Teacher();
    void set(int, string, double);
    int getTeacherId();
    string getSubject();
    double getSalary();
    void show();
};
Teacher::Teacher() : Person(), teacherId(0), subject("Unknow"), salary(0.0)
{
    set(teacherId, subject, salary);
};

Teacher::Teacher(int id, string firstname, string lastname, Date date, Address address, int teacherId, string subject, double salary) : Person(id, firstname, lastname, date, address), teacherId(teacherId), subject(subject), salary(salary)
{
    set(teacherId, subject, salary);
};

Teacher::~Teacher() { cout << "destructuring Teacher : " << getTeacherId() << " : " << getSubject() << " : " << getSalary() << endl; }
void Teacher::set(int id, string subject, double sal)
{
    teacherId = id;
    this->subject = subject;
    salary = sal;
}

int Teacher::getTeacherId() { return teacherId; }
string Teacher::getSubject() { return subject; }
double Teacher::getSalary() { return salary; }
void Teacher::show()
{
    Person::show();
    cout << "Teacher ID : " << getTeacherId() << endl;
    cout << "Subject : " << getSubject() << endl;
    cout << "Salary : " << getSalary() << endl;
}
void ITeacher(int &teacherId, string &subject, double &salary)
{
    cout << "Enter teacher ID : ";
    cin >> teacherId;
    cout << "Enter subject : ";
    cin >> subject;
    cout << "Enter salary : ";
    cin >> salary;
    cout << "--------------" << endl;
}
#endif /* TEACHER_H */