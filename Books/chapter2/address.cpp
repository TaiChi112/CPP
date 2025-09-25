#include <iostream>
#include "address.h"

using namespace std;

int main()
{
    int id, day, month, year;
    string firstname, lastname, street, city, country;
    // IOBirthday(day, month, year);
    // IOIdentityCard(id, firstname, lastname);
    // Birthday bd1(day, month, year);
    // IdentityCard idc1(id, firstname, lastname, bd1);
    // Address ad1, ad2(idc1, street, city, country);
    // cout << endl;
    // ad1.display();
    Address ad2(street, city, country);
    ad2.IAddress();
    cout << endl;
    ad2.display();
    return 0;
}