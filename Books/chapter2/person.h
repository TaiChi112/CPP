#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;
class Person
{
    static int count;
    int id;
    string firstname;
    string lastname;
    string date;

public:
    Person();
    Person(int, string, string, string);
    ~Person();
    void set(int, string, string, string);
    int getId();
    string getFirstname();
    string getLastname();
    string getDate();
    void show();
    static int getCount();
};
Person::Person() : id(0), firstname("undefined"), lastname("undefined"), date("undefined")
{
    set(id, firstname, lastname, date);
    ++Person::count;
};
Person::Person(int id, string firstname, string lastname, string date) : id(id), firstname(firstname), lastname(lastname), date(date)
{
    set(id, firstname, lastname, date);
    ++Person::count;
};
Person::~Person() { cout << "destructuring Person : " << firstname << endl; }
void Person::set(int id, string firstname, string lastname, string date)
{
    this->id = id;
    this->firstname = firstname;
    this->lastname = lastname;
    this->date = date;
}
int Person::getId() { return id; }
string Person::getFirstname() { return firstname; }
string Person::getLastname() { return lastname; }
string Person::getDate() { return date; }
void Person::show()
{
    cout << "ID : " << id << endl;
    cout << "Firstname : " << firstname << endl;
    cout << "Lastname : " << lastname << endl;
    cout << "Date : " << date << endl;
}
int Person::count = 0;
int Person::getCount() { return count; }

#endif // PERSON_H