#include <iostream>

using namespace std;

class Person1
{
    string name;
    int age;

public:
    Person1() {}
    Person1(string name, int age) : name(name), age(age) {}
    void setName(string name) { this->name = name; }
    void setAge(int age) { this->age = age; }
    string getName() { return name; }
    int getAge() { return age; }
    ~Person1() { cout << "Destructor called" << endl; }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    Person1 person1("John", 30);
    person1.show();
    return 0;
}