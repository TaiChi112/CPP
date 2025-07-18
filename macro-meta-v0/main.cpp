#include <iostream>
// Removed single-character macros and replaced them with standard C++ types.

using namespace std;

struct Point
{
    int x, y;
    Point(int x, int y) : x(x), y(y) {}
    void display()
    {
        std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};
class Person
{
    int id;
    std::string name;
public:
    Person(int id, std::string name) : id(id), name(name) {}
    void display()
    {
        std::cout << "Person ID: " << id << ", Name: " << name << std::endl;
    }
};
int main()
{
    Point p(5, 10);
    p.display();

    Person person(1, "Alice");
    person.display();
    return 0;
}