#include <iostream>
#include "employee.h"

using namespace std;

int main()
{
    int id;
    string firstname, lastname;
    double salary, taxOfRate;
    IOEmployee(id, firstname, lastname, salary, taxOfRate);
    Employee em1, em2(id, firstname, lastname, salary, taxOfRate);
    em1.show();
    cout << endl;
    em2.show();
    cout << "Amount of object : " << Employee::getCount() << endl;
    return 0;
}