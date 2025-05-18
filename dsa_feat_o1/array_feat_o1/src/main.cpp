#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Person{
    vector<char> name;
    public:
    Person(const char* n) : name(n, n + strlen(n)) {
        cout << "Name: " << string(name.begin(), name.end()) << endl;
    }
    ~Person() {
        cout << "Destructor called for: " << string(name.begin(), name.end()) << endl;
    }
    Person(const Person& other) : name(other.name) {
        cout << "Copy constructor called for: " << string(name.begin(), name.end()) << endl;
    }
    Person& operator=(const Person& other) {
        if (this != &other) {
            name = other.name;
            cout << "Copy assignment operator called for: " << string(name.begin(), name.end()) << endl;
        }
        return *this;
    }
    Person(Person&& other) noexcept : name(move(other.name)) {
        cout << "Move constructor called for: " << string(name.begin(), name.end()) << endl;
    }
    Person& operator=(Person&& other) noexcept {
        if (this != &other) {
            name = move(other.name);
            cout << "Move assignment operator called for: " << string(name.begin(), name.end()) << endl;
        }
        return *this;
    }
    void printName() const {
        cout << "Name: " << string(name.begin(), name.end()) << endl;
    }
};
int main()
{
    Person p("John");
    p.printName();

    Person p2 = p; // Copy constructor
    p2.printName();

    Person p3("Doe");
    p3.printName();

    p3 = p; // Copy assignment operator
    p3.printName();

    Person p4 = move(p3); // Move constructor
    p4.printName();

    Person p5("Smith");
    p5.printName();

    p5 = move(p4); // Move assignment operator
    p5.printName();

    // Destructor will be called automatically when objects go out of scope
    return 0;
}