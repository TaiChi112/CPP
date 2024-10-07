#include <iostream>

using namespace std;

class MyArray
{
    int value;

public:
    MyArray() {}
    MyArray(int v) : value(v) {}

    void setValue(int v) { value = v; }
    void show()
    {
        cout << "value: " << value << endl;
    }
    void setA(int *a, int *b)
    {
        ++*a;
        ++*b;
        a = new int(5);
        b = new int(6);
        delete a, b;
    };
};
int f1()
{
    int x(3);
    return x;
}
// int &f2()
// {
//     static int y(3);
//     return y;
// }
int *f3()
{
    int *z = new int(4);
    return z;
}
int main()
{
    int a;
    a = f1();
    cout << "a: " << a << endl;

    // int b(f2());
    // cout << "b: " << b << endl;

    int *c;
    cout << &c << endl;
    c = f3();
    cout << "c: " << c << endl;
    delete c;

    // MyArray arr[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     int input;
    //     cout << "Enter value for arr[" << i << "]: ";
    //     cin >> input;
    //     arr[i].setValue(input);
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "arr[" << i << "].value: ";
    //     arr[i].show();
    // }
    // MyArray a;
    // int *p = new int(3);
    // int *q = new int(5);
    // cout << "p: " << *p << " q: " << *q << endl;

    // a.setA(p, q);
    // cout << "p: " << *p << " q: " << *q << endl;

    // delete p, q;

    return 0;
}
