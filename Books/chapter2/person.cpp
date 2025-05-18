#include <iostream>
#include "person.h"
#include "date.h"
#include "address.h"

using namespace std;

int main()
{
    Date date(28, 03, 2004);
    Address address("Ramkhamheang", "Bangkok", "Thailand");
    int id;
    string firstname, lastname;
    
    IPerson(id, firstname, lastname, date, address);
    Person p1(id, firstname, lastname, date, address);
    cout << endl;
    OPerson(id, firstname, lastname, date, address);
    
    cout << endl;
    p1.show();
    cout << endl;
    cout << "amount object Person : " << p1.getCount() << endl;
    cout << endl;
    return 0;
}