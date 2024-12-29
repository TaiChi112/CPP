#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include "date.h"
#include "address.h"
using namespace std;
class Person
{
    static int count;
    int id;
    string firstname;
    string lastname;
    Date date;
    Address address;

public:
    Person();
    Person(int, string, string, Date, Address);
    ~Person();
    void set(int, string, string, Date, Address);
    int getId();
    string getFirstname();
    string getLastname();
    void show();
    static int getCount();
};
Person::Person() : id(0), firstname("undefined"), lastname("undefined"), date(00, 00, 0000), address("undefined", "undefined", "undefined")
{
    set(id, firstname, lastname, date, address);
    ++Person::count;
};
Person::Person(int id, string firstname, string lastname, Date date, Address address) : id(id), firstname(firstname), lastname(lastname), date(date), address(address)
{
    set(id, firstname, lastname, date, address);
    ++Person::count;
};
Person::~Person() { cout << "Destructuring Person : " << getId() << " : " << getFirstname() << " : " << getLastname() << endl; }
void Person::set(int id, string firstname, string lastname, Date date, Address address)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
    this->date = date;
    this->address = address;
}
int Person::getId() { return id; }
string Person::getFirstname() { return firstname; }
string Person::getLastname() { return lastname; }
void Person::show()
{
    cout << "ID : " << id << endl;
    cout << "Firstname : " << firstname << endl;
    cout << "Lastname : " << lastname << endl;
    date.show();
    address.show();
}
int Person::count = 0;
int Person::getCount() { return count; }

void IPerson(int &personId, string &firstname, string &lastname, Date &date, Address &address)
{
    cout << "Enter ID : ";
    cin >> personId;
    cout << "Enter Firstname : ";
    cin >> firstname;
    cout << "Enter Lastname : ";
    cin >> lastname;
    cout << "\nDate of Birth: ";
    date.IDate();
    cout << "\nAddress: ";
    address.IAddress();
}
// void OPerson(int &personId, string &firstname, string &lastname, Date &date, Address &address)
// {
//     cout << "ID : " << personId << endl;
//     cout << "Firstname : " << firstname << endl;
//     cout << "Lastname : " << lastname << endl;
//     date.show();
//     address.show();
// }

#endif // PERSON_H