#include <iostream>
#include "person.h"

using namespace std;

int main(){
    int id;
    string firstname, lastname, date;
    cout << "Enter ID : ";
    cin >> id;
    cout << "Enter first name : ";
    cin >> firstname;
    cout << "Enter last name : ";
    cin >> lastname;
    cout << "Enter date : ";
    cin >> date;
    Person p3, p4(id, firstname, lastname, date);
    cout << endl;
    p3.show();
    cout << endl;
    p4.show();
    cout << endl;
    cout << "amount object : " << Person::getCount() << endl;
    cout << endl;
    return 0;
}