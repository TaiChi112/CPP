#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
    int id;
    string firstname;
    string lastname;
    double salary;
    double taxOfRate;

public:
    Employee();
    Employee(int, string, string, double, double);
    ~Employee();
    void setId(int id);
    void setFirstname(string);
    void setLastname(string);
    void setSalary(double);
    void setTaxOfRate(double);
    int getId();
    string getFirstname();
    string getLastname();
    double getSalary();
    double getTaxOfRate();
    void show();
};
Employee::Employee() : id(0), firstname(""), lastname(""), salary(0), taxOfRate(0) {}
Employee::Employee(int id, string firstname, string lastname, double salary, double taxOfRate) : id(id), firstname(firstname), lastname(lastname), salary(salary), taxOfRate(taxOfRate) {}
Employee::~Employee() { cout << "Destructuring Employee : " << getFirstname() << endl; }
void Employee::setId(int id) { this->id = id; }
void Employee::setFirstname(string firstname) { this->firstname = firstname; }
void Employee::setLastname(string lastname) { this->lastname = lastname; }
void Employee::setSalary(double salary) { this->salary = salary; }
void Employee::setTaxOfRate(double taxOfRate) { this->taxOfRate = taxOfRate; }
int Employee::getId() { return id; }
string Employee::getFirstname() { return firstname; }
string Employee::getLastname() { return lastname; }
double Employee::getSalary() { return salary; }
double Employee::getTaxOfRate() { return taxOfRate; }
void Employee::show()
{
    cout << "ID : " << getId() << endl;
    cout << "Firstname : " << getFirstname() << endl;
    cout << "Lastname : " << getLastname() << endl;
    cout << "Salary : " << getSalary() << endl;
    cout << "Tax of Rate : " << getTaxOfRate() << endl;
}

#endif // EMPLOYEE_H