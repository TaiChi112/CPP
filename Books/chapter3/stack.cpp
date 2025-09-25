#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack s1, s2(5);
    s1.show();
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(30);
    s1.push(30);
    s1.push(30);
    cout << "is full : " << s1.isFull() << endl;
    s1.push(30);
    s1.push(30);
    s1.push(30);
    s1.push(30);
    s1.show();
    cout << "Pop : " << s1.pop() << endl;
    s1.show();

    s2.push(10);
    s2.push(20);
    s2.push(30);
    s2.show();

    cout << "Pop : " << s2.pop() << endl;
    s2.show();
    cout << "Stack size : " << s2.count() << endl;
    return 0;
}