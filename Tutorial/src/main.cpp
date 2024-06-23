#include <iostream>
#include "class.h"
#include "mid.h"

using namespace std;

int main()
{
    char char1;
    char1 = 'T';
    cout << "Value char1 : " << char1 << endl;
    cout << "Address char1 : " << static_cast<void *>(&char1) << endl;

    int int1;
    int1 = 112;
    cout << "Value int1 : " << int1 << endl;
    cout << "Address int1 : " << &int1 << endl;

    string string1;
    string1 = "Hello World!";
    cout << "Value string1 : " << string1 << endl;
    cout << "Value string1 : " << &string1 << endl;
    return 0;
}
