#include <iostream>

using namespace std;

struct Electric
{
    string current;
    int volts;
    Electric() {}
    Electric(string current, int volts) : current(current), volts(volts) {}
};

int main()
{
    Electric *ele1 = new Electric("10A", 220);
    cout << "value current : " << ele1->current << endl;
    cout << "value volts : " << ele1->volts << endl;
    Electric *ele4 = new Electric;
    Electric ele2("10A", 220);
    cout << "-------------------------------------" << endl;
    int a(5);
    int xo = 5;
    cout << a << endl;
    cout << xo << endl;

    float *b = new float(3.14);
    cout << b << endl;
    cout << *b << endl;
    cout << &b << endl;
    int *man1;
    char *man2;
    string *man3;
    double *man4;
    cout << sizeof(man1) << endl;
    cout << sizeof(man2) << endl;
    cout << sizeof(man3) << endl;
    cout << sizeof(man4) << endl;
    // cout << man1 << endl;
    // cout << man2 << endl;
    // cout << man3 << endl;
    // cout << man4 << endl;
    cout << &man1 << endl;
    cout << &man2 << endl;
    cout << &man3 << endl;
    cout << &man4 << endl;

    return 0;
}