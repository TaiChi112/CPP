#include <iostream>

using namespace std;

struct Node
{
      int data;
      Node *next;
      Node() {}
      Node(int value) : data(value), next(nullptr) {}
};
class Stack
{
private:
      Node *top;

public:
      Stack() : top(nullptr) {}

      void push(int value)
      {
            Node *newNode = new Node(value);
            if (top == nullptr)
            {
                  top = newNode;
            }
            else
            {
                  newNode->next = top;
                  top = newNode;
            }
            cout << "Pushed : " << value << endl;
      }
      void pop()
      {
            if (top == nullptr)
            {
                  cout << "Stack is empty" << endl;
                  return;
            }
            Node *temp = top;
            top = top->next;
            cout << "Popped : " << temp->data << endl;
            delete temp;
      }
};
int main()
{

      return 0;
}