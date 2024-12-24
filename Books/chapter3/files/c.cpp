#include <iostream>

using namespace std;
class Person
{
    string firstname;
    string lastname;

public:
    Person()
    {
        cout << "Person constructor " << firstname << endl;
    }
    Person(string fname, string lname) : firstname(fname), lastname(lname) {}
    ~Person()
    {
        cout << "Person destructor " << firstname << endl;
    }
};

int main()
{
    int amountObj;
    cout << "Input amount object which you want ";
    cin >> amountObj;
    Person p[amountObj];
    for (int i = 0; i < amountObj; i++)
    {
        string fname, lname;
        cout << "Input first name: ";
        cin >> fname;
        cout << "Input last name: ";
        cin >> lname;
        p[i] = Person(fname, lname);
    }

    return 0;
}
