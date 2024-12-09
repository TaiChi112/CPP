#ifndef DEMO1_H
#define DEMO1_H
#include <iostream>

using namespace std;

int Addition(int *value1, int *value2)
{
    return *value1 + *value2;
}
int Subtraction(int *value1, int *value2)
{
    return *value1 - *value2;
}
int Multiplication(int *value1, int *value2)
{
    return *value1 * *value2;
}
int Division(int *value1, int *value2)
{
    if (*value2 == 0)
    {
        cout << "Math not defineds" << endl;
    }
    return *value1 / *value2;
}
void Input(int *value)
{
    cout << "Enter value : ";
    cin >> *value;
}
void Output(int *value)
{
    cout << "Value : " << *value << endl;
}

#endif 