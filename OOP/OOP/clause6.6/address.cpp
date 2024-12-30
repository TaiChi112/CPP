#include <iostream>
#include "address.h"

using namespace std;

int main()
{
    string street("Ramkhamheang"), city("Bangkok"), country("Thailand");
    Address ad1, ad2(street, city, country);
    ad1.show();
    cout << endl;
    ad2.show();
    cout << endl;

    cout << "Try to set new Address for ad1 object" << endl;
    cout << endl;
    ad1.set("Sukhumvit", "Bangkok", "Thailand");
    ad1.show();
    cout << endl;

    cout << "Try to get attribute of ad1 object" << endl;
    cout << endl;
    cout << "Street: " << ad1.getStreet() << endl;
    cout << "City: " << ad1.getCity() << endl;
    cout << "Country: " << ad1.getCountry() << endl;
    cout << endl;

    return 0;
}