#include <iostream>
#include "address.h"

using namespace std;

int main()
{
    int id, day, month, year;
    string firstname, lastname, street, city, country;
    IOBirthday(day, month, year);
    IOIdentityCard(id, firstname, lastname);
    IOAddress(street, city, country);
    Birthday bd1(day, month, year);
    IdentityCard idc1(id, firstname, lastname, bd1);
    Address ad1, ad2(idc1, street, city, country);
    cout << endl;
    ad1.display();
    cout << endl;
    ad2.display();
    return 0;
}