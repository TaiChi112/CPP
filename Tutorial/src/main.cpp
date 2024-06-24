#include <iostream>
#include "class.h"
#include "mid.h"
#include "type.h"

using namespace std;

int main()
{
    Types char1;
    char1.setChar('A');
    char1.showChar();

    MyInt int1;
    int1.setInt(112);
    int1.showInt();

    MyString string1;
    string1.setString("Hi C++");
    string1.showString();
    // int1 = 112;
    // cout << "Value int1 : " << int1 << endl;
    // cout << "Address int1 : " << &int1 << endl;

    // string1 = "Hello World!";
    // cout << "Value string1 : " << string1 << endl;
    // cout << "Value string1 : " << &string1 << endl;
    return 0;
}
