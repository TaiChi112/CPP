#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;

class Address
{
    string street;
    string city;
    string country;

public:
    Address();
    Address(string, string, string);
    ~Address();
    void set(string, string, string);
    string getStreet();
    string getCity();
    string getCountry();
    void show();
    void IAddress();
};
Address::Address() : street("undefind"), city("undefind"), country("undefind") {}
Address::Address(string st, string c, string co) : street(st), city(c), country(co) {}
Address::~Address() { cout << "Desctructuring Address : " << getStreet() << " : " << getCity() << " : " << getCountry() << endl; }
string Address::getStreet() { return street; }
string Address::getCity() { return city; }
string Address::getCountry() { return country; }
void Address::set(string st, string c, string co)
{
    street = st;
    city = c;
    country = co;
}
void Address::show()
{
    cout << "Address Information: " << endl;
    cout << "Street: " << getStreet() << endl;
    cout << "City: " << getCity() << endl;
    cout << "Country: " << getCountry() << endl;
}
void Address::IAddress()
{
    cout << "Enter your address information (street city country)\n";
    cout << "street (Ramkhamheang): ";
    cin >> street;
    cout << "city (Bangkok): ";
    cin >> city;
    cout << "country (Thailand): ";
    cin >> country;
}

#endif