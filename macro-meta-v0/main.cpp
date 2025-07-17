#include <iostream>
#define i int
#define f float
#define s string
#define v void
#define c class
#define st struct
#define b bool
#define pb public
#define oi cout <<
#define io cin >>

using namespace std;

st Point
{
    i x, y;
    Point(i x, i y) : x(x), y(y) {}
    v display()
    {
        oi "Point coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};
c Person
{
    i id;
    s name;
pb:
    Person(i id, s name) : id(id), name(name) {}
    v display()
    {
        oi "Person ID: " << id << ", Name: " << name << std::endl;
    }
};
i main()
{
    Point p(5, 10);
    p.display();

    Person person(1, "Alice");
    person.display();
    return 0;
}