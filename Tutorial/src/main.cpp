#include <iostream>
#include "class.h"
#include "mid.h"

using namespace std;

void printNumber1(int *numPtr)
{
    cout << *numPtr << endl;
}
void printChar1(char *charPtr)
{
    cout << *charPtr << endl;
}
void printNumber2(int numPtr)
{
    cout << numPtr << endl;
}
void printChar2(char charPtr)
{
    cout << charPtr << endl;
}

int main()
{
    int number = 5;
    printNumber1(&number);
    char character = 'a';
    printChar2(&character);
    return 0;
}