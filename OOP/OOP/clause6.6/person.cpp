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

    Person p1, p2(id, firstname, lastname, date, address);
    cout << endl;
    p1.show();
    cout << endl;
    p2.show();
    cout << endl;

    cout << "Try to set new Person for p1 object" << endl;
    date.set(29, 03, 2003);
    address.set("Sukhumvit", "Bangkok", "Thailand");
    p1.set(2, "Bob", "Builder", date, address);
    cout << endl;
    p1.show();
    cout << endl;

    cout << "Try to get attribute of p1 object" << endl;
    cout << endl;
    cout << "Id: " << p1.getId() << endl;
    cout << "Firstname: " << p1.getFirstname() << endl;
    cout << "Lastname: " << p1.getLastname() << endl;
    cout << "Date: ";
    p1.getDate().show();
    cout << "Address: ";
    p1.getAddress().show();
    cout << endl;
    return 0;
}