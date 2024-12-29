#include <iostream>
#include "person.h"
#include "date.h"
#include "address.h"

using namespace std;

int main()
{
    Date date(28, 03, 2004);
    Address address("Ramkhamheang", "Bangkok", "Thailand");
    int id(1);
    string firstname("Alice"), lastname("Wonderland");

    Person p1(id, firstname, lastname, date, address);

    cout << endl;
    p1.show();
    cout << endl;
    return 0;
}