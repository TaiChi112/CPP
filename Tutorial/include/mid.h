#ifndef MID_H
#define MID_H

#include <iostream>

using namespace std;

class A
{
private:
      int a;

protected:
      A f1(int i)
      {
            return *this;
      };

public:
      A() : a(0){};
      A(int i)
      {
            f1(i);
      }
      A f2(A i)
      {
            a = i.a;
            return *this;
      }

      int f3() { return a; }
      A f4(A &a, A b)
      {
            this->a = a.f1(b.a).a;
            return *this;
      }
};

void display()
{

      int x1 = 5;
      int x2(5);
      cout << "value var x1 : " << x1 << endl;
      cout << "value var x2 : " << x2 << endl;
      cout << "address var x1 : " << &x1 << endl;
      cout << "address var x2 : " << &x2 << endl;
      int *y1 = &x1;
      int *y2 = &x2;
      cout << "value pointer y1 which keeping address of x1 : " << *y1 << endl;
      cout << "value pointer y1 which keeping address of x1 : " << *y2 << endl;
      cout << "address of x1 :" << y1 << endl;
      cout << "address of x1 :" << y2 << endl;
      cout << "address pointer y1 : " << &y1 << endl;
      cout << "address pointer y1 : " << &y2 << endl;
      delete y1;
      delete y2;
}
void printNumber1(int *numPtr)
{
      cout << *numPtr << endl;
}
void printChar1(char *charPtr)
{
      cout << *charPtr << endl;
}

void printAnything(void *ptr, char type)
{
      switch (type)
      {
      case 'i':
            cout << *(int *)ptr << endl;
            break;
      case 'c':
            cout << *(char *)ptr << endl;
            break;
      }
}
void arrayPointer()
{
      int luckNumber[5];
      // cout << luckNumber << endl;
      // cout << &luckNumber[0] << endl;
      // cout << &luckNumber[1] << endl;
      // cout << &luckNumber[2] << endl;
      // cout << &luckNumber[3] << endl;
      // cout << luckNumber[3] << endl;
      // cout << *(luckNumber + 3) << endl;

      for (int i = 0; i <= 4; i++)
      {
            cout << "Number : ";
            cin >> luckNumber[i];
      }
      for (int i = 0; i <= 4; i++)
      {
            cout << *luckNumber + i << endl;
      }
}
int getMin(int number[], int size)
{
      int min = number[0];

      for (int i = 0; i < size; i++)
      {
            if (number[i] < min)
            {
                  min = number[i];
            }
      }
      return min;
}
int getMax(int number[], int size)
{
      int max = number[0];

      for (int i = 1; i < size; i++)
      {
            if (number[i] > max)
            {
                  max = number[i];
            }
      }
      return max;
}
void getMinAndMax(int number[], int size, int *min, int *max)
{

      for (int i = 0; i < size; i++)
      {

            if (number[i] < *min)
            {
                  *min = number[i];
            }
            if (number[i] > *max)
            {
                  *max = number[i];
            }
      }
}
//     int number[5] = {5, 4, -2, 29, 6};
//     cout << "Min is : " << getMin(number, 5) << endl;
//     cout << "Max is : " << getMax(number, 5) << endl;

//     int min = number[0], max = number[0];
//     getMinAndMax(number, 5, &min, &max);
//     cout << "Min is : " << min << endl;
//     cout << "Max is : " << max << endl;
struct Node
{
      int data;
      Node *next;
      Node(){};
      Node(int data) : data(data), next(NULL){};
};
Node *insertNode(Node *head, int data)
{
      Node *newNode = new Node(data);
      if (head == NULL)
      {
            head = newNode;
      }
      else
      {
            Node *temp = head;
            while (temp->next != NULL)
            {
                  temp = temp->next;
            }
            temp->next = newNode;
      }
      return head;
}
void findNode(Node *head, int data)
{
      Node *temp = head;
      while (temp != NULL)
      {
            if (temp->data == data)
            {
                  cout << "Found" << endl;
                  return;
            }
            temp = temp->next;
      }
      cout << "Not Found" << endl;
}
void displayNode(Node *head)
{
      Node *temp = head;
      while (temp != NULL)
      {
            cout << temp->data << " ";
            temp = temp->next;
      }
}
#endif