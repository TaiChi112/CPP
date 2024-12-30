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
    Teacher(Person &, Date &, Address &, int, string, double);
    ~Teacher();
    void set(Person &, int, string, double);
    int getTeacherId();
    string getSubject();
    double getSalary();
    void show();
};
Teacher::Teacher() : Person(), teacherId(0), subject("Unknown"), salary(0.0) {};

Teacher::Teacher(Person &person, Date &date, Address &address, int teacherId, string subject, double salary) : Person(person), teacherId(teacherId), subject(subject), salary(salary) {};

Teacher::~Teacher() { cout << "destructuring Teacher : " << getTeacherId() << " : " << getSubject() << " : " << getSalary() << endl; }
void Teacher::set(Person &person, int teacherId, string subject, double salary)
{
    Person::set(person.getId(), person.getFirstname(), person.getLastname(), person.getDate(), person.getAddress());
    this->teacherId = teacherId;
    this->subject = subject;
    this->salary = salary;
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