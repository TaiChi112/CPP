#include <iostream>
#include "class.h"
#include "mid.h"

using namespace std;

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
void displayNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);

    insertNode(head, 3);
    insertNode(head, 113);
    insertNode(head, 112);
    displayNode(head);

    return 0;
}