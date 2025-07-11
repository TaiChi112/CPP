#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int val) : data(val), next(nullptr) {}
};
void printList(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
struct Node2
{
    int data;
    Node2 *prev;
    Node2 *next;
    Node2(int val) : data(val), prev(nullptr), next(nullptr) {}
};
void printList2(Node2 *head)
{
    Node2 *current = head;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
}
void printList2Reverse(Node2 *tail)
{
    Node2 *current = tail;
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->prev;
    }
}
void printCircularList(Node *head)
{
    if (head == nullptr) return;
    Node *current = head;
    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
}
int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    head->next = second;
    second->next = third;
    printList(head);

    cout << endl;
    Node2 *head2 = new Node2(1);
    Node2 *second2 = new Node2(2);
    Node2 *third2 = new Node2(3);
    head2->next = second2;
    second2->next = third2;
    second2->prev = head2;
    third2->prev = second2;
    printList2(head2);
    cout << endl;
    printList2Reverse(third2);
    cout<<endl;
    Node *circularHead = new Node(1);
    Node *circularSecond = new Node(2);
    Node *circularThird = new Node(3);
    circularHead->next = circularSecond;
    circularSecond->next = circularThird;
    circularThird->next = circularHead; // Making it circular
    printCircularList(circularHead);
    cout << endl;
    return 0;
}