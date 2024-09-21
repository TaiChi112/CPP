#include <iostream>

using namespace std;

class Person
{
    int height;
    int weight;

public:
    Person():height(0),weight(0) {}
    Person(int h, int w) : height(h), weight(w) {}
    void show()
    {
        cout << "This person is height  : " << height << " weight : " << weight << endl;
    }
};
int main()
{
    Person p1;
    p1.show();
    Person p2(180, 80);
    p2.show();
    Person p3(160, 50);
    p3.show();
    return 0;
}