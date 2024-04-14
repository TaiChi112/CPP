#include <iostream>

using namespace std;

struct Employee
{
    string id;
    string fullname;
    int sex;
    int age;
    int salary;
    Employee() {};
    Employee(string id, string fullname, int sex, int age, int salary) : id(id), fullname(fullname), sex(sex), age(age), salary(salary) {};
};

int main()
{
    Employee e;
    e.id = "001";
    e.fullname = "John Doe";
    e.sex = 1;
    e.age = 20;
    e.salary = 10000;

    cout << "Employee ID : " << e.id << endl;
    cout << "fullname : " << e.fullname << endl;
    cout << "sex : " << e.sex << endl;
    cout << "age : " << e.age << endl;
    cout << "salary : " << e.salary << endl;
    return 0;
}