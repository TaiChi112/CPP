#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;
class Birthday
{
    int day, month, year;

public:
    Birthday();
    Birthday(int, int, int);
    ~Birthday();
    int getDay();
    int getMonth();
    int getYear();
};

class IdentityCard
{
    int id;
    string firstname;
    string lastname;
    Birthday birthday;

public:
    IdentityCard();
    IdentityCard(int, string, string, Birthday);
    ~IdentityCard();
    int getId();
    string getFirstname();
    string getLastname();
    Birthday getBirthday();
};
class Address
{
    // IdentityCard identityCard;
    string street;
    string city;
    string country;

public:
    Address();
    Address(string, string, string);
    // Address(IdentityCard, string, string, string);// original
    ~Address();
    // IdentityCard getIdentityCard();
    string getStreet();
    string getCity();
    string getCountry();
    void display();
    void show();
    void IAddress();
};
Birthday::Birthday() : day(0), month(0), year(0) {}
Birthday::Birthday(int d, int m, int y) : day((d <= 31 ? d : 1)), month((m <= 12 ? m : 1)), year(y) {}
Birthday::~Birthday() { cout << "desctructuring Birthday" << endl; }
int Birthday::getDay() { return day; };
int Birthday::getMonth() { return month; };
int Birthday::getYear() { return year; };
IdentityCard::IdentityCard() : birthday(), id(0), firstname(""), lastname("") {}
IdentityCard::IdentityCard(int id, string fn, string ln, Birthday bd) : id(id), firstname(fn), lastname(ln), birthday(bd) {}
IdentityCard::~IdentityCard() { cout << "desctructuring IdentityCard" << endl; }
int IdentityCard::getId() { return id; }
string IdentityCard::getFirstname() { return firstname; }
string IdentityCard::getLastname() { return lastname; }
Birthday IdentityCard::getBirthday() { return birthday; }
// Address::Address() : identityCard(), street(""), city(""), country("") {}// original
Address::Address() : street("undefind"), city("undefind"), country("undefind") {}
// Address::Address(IdentityCard idCard, string st, string c, string co) : identityCard(idCard), street(st), city(c), country(co) {}//original
Address::Address(string st, string c, string co) : street(st), city(c), country(co) {} // #
Address::~Address() { cout << "Desctructuring Address : " << getStreet() << " : " << getCity() << " : " << getCountry() << endl; }
// IdentityCard Address::getIdentityCard() { return identityCard; }
string Address::getStreet() { return street; }
string Address::getCity() { return city; }
string Address::getCountry() { return country; }
void Address::display()
{
    // cout << "Identity Card Information: " << endl;
    // cout << "ID: " << getIdentityCard().getId() << endl;
    // cout << "Name: " << getIdentityCard().getFirstname() << " " << getIdentityCard().getLastname() << endl;
    // cout << "Birthday: " << getIdentityCard().getBirthday().getDay() << "/" << getIdentityCard().getBirthday().getMonth() << "/" << getIdentityCard().getBirthday().getYear() << endl;
    cout << "Address Information: " << endl;
    cout << "Street: " << getStreet() << endl;
    cout << "City: " << getCity() << endl;
    cout << "Country: " << getCountry() << endl;
}
void Address::show()
{
    cout << "Street: " << getStreet() << endl;
    cout << "City: " << getCity() << endl;
    cout << "Country: " << getCountry() << endl;
}

void IOBirthday(int &day, int &month, int &year)
{
    cout << "Enter your birthday (dd mm yyyy)\n";
    cout << "day : ";
    cin >> day;
    cout << "month : ";
    cin >> month;
    cout << "year : ";
    cin >> year;
}
void IOIdentityCard(int &id, string &firstname, string &lastname)
{
    cout << "Enter your identity card information (id firstname lastname)\n";
    cout << "id : ";
    cin >> id;
    cout << "firstname : ";
    cin >> firstname;
    cout << "lastname : ";
    cin >> lastname;
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