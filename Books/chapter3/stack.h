#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int capacity;

public:
    Stack();
    Stack(int);
    ~Stack();
    void push(int);
    int pop();
    bool isFull();
    bool isEmpty();
    int count();
    void show();
};
Stack::Stack()
{
    capacity = 10;
    arr = new int[capacity];
    top = -1;
}
Stack::Stack(int cap)
{
    capacity = cap;
    arr = new int[capacity];
    top = -1;
}
Stack::~Stack()
{
    delete[] arr;
    cout << "Destructor called" << endl;
}
void Stack::push(int value)
{
    if (isFull())
    {
        cout << "Stack is full" << value << endl;
        return;
    }
    else
    {
        arr[++top] = value;
    }
}
int Stack::pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else
    {
        return arr[top--];
    }
}
bool Stack::isFull()
{
    return top == capacity - 1;
}
bool Stack::isEmpty()
{
    return top == -1;
}
void Stack::show()
{
    if (isEmpty())
    {
        cout << "Stack is empty!" << endl;
    }
    else
    {
        cout << "Stack elements : ";
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int Stack::count()
{
    return top + 1;
}

#endif // STACK_H