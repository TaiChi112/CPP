#include <iostream>
#include "address.h"

using namespace std;

int main()
{
    string street("Ramkhamheang"), city("Bangkok"), country("Thailand");
    Address ad2(street, city, country);
    cout << endl;
    ad2.display();
    return 0;
}