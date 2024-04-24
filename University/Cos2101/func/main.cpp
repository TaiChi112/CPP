#include <iostream>

using namespace std;

struct Node1
{
    int data;
    Node1 *next;
    Node1(int data) : data(data), next(NULL) {}
};
struct Node2
{
    int data;
    Node2 *next;
};
struct Node3
{
    int data;
    Node3 *next;
};

Node1 *insertNode1(Node1 *headNode, int data)
{
    Node1 *newNode = new Node1(data);
    if (headNode == NULL)
    {
        headNode = newNode;
    }
    else
    {
        Node1 *current = headNode;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    return headNode;
}

Node2 *create(int data)
{
    return new Node2;
}
Node2 *insertNode2(Node2 *headNode, int data)
{
    Node2 *newNode = create(data);
    newNode->data = data;
    newNode->next = NULL;
    if (headNode == NULL)
    {
        headNode = newNode;
    }
    else
    {
        Node2 *current = headNode;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    return headNode;
}
Node3 *insertNode3(Node3 *headNode, int data)
{
    Node3 *newNode = new Node3;
    newNode->data = data;
    newNode->next = NULL;

    if (headNode == NULL)
    {
        headNode = newNode;
    }
    else
    {
        Node3 *current = headNode;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
    return headNode;
}
void displaynode1(Node1 *test1)
{
    while (test1 != NULL)
    {
        cout << test1->data << " -> ";
        test1 = test1->next;
    }
    cout << "NULL" << endl;
}
void displaynode2(Node2 *test1)
{
    while (test1 != NULL)
    {
        cout << test1->data << " -> ";
        test1 = test1->next;
    }
    cout << "NULL" << endl;
}
void displaynode3(Node3 *test1)
{
    while (test1 != NULL)
    {
        cout << test1->data << " -> ";
        test1 = test1->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node1 *test1 = new Node1(1);
    insertNode1(test1, 1);
    displaynode1(test1);

    cout << "=====================" << endl;

    Node2 *test2 = new Node2;
    test2->data = 1;
    test2->next = NULL;
    test2 = insertNode2(test2, 1);
    displaynode2(test2);

    cout << "=====================" << endl;

    Node3 *test3 = NULL;
    test3 = insertNode3(test3, 1);
    test3 = insertNode3(test3, 1);
    displaynode3(test3);
    return 0;
}