#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    int size;
    int top;
    vector<int> *stack;

public:
    Stack(int size) : size(size)
    {
        top = -1;
        stack = new vector<int>(size);
    }
    void push(int data)
    {
        (*stack)[++top] = data;
    }
    int pop()
    {
        return (*stack)[top--];
    }
};
int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "pop: " << s.pop() << endl;
    return 0;
}