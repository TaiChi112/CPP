#include <iostream>

using namespace std;

int main()
{
    int *a;
    a = new int(112);
    // int *b;
    cout << "this value when you allocated memory : " << *a << endl;
    cout << &a << endl;
    cout << a << endl;
    return 0;
}