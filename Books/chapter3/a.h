#ifndef MAIN_H
#define MAIN_H
#include <iostream>
using namespace std;

class Person
{
    int id;
    string name;

public:
    Person();
    Person(int, string);
    int getId();
    string getName();
    void show();
};
Person::Person() : id(0), name("No Name") {}
Person::Person(int i, string n) : id(i), name(n) {}
int Person::getId() { return this->id; }
string Person::getName() { return this->name; }
void Person::show()
{
    cout << "ID: " << this->id << endl;
    cout << "Name: " << this->name << endl;
}

#endif // MAIN_H