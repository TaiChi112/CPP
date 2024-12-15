#include <iostream>
#include "main.h"

using namespace std;

int main()
{
    Person p1, p2(1, "John");
    p1.show();
    cout << endl;
    p2.show();
    Person p3[3]{Person(1, "John"), Person(2, "Doe"), Person(3, "Jane")};
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        p3[i].show();
    }
    Person *p4[3]{new Person(1, "John"), new Person(2, "Doe"), new Person(3, "Jane")};
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        p4[i]->show();
    }
    return 0;
}