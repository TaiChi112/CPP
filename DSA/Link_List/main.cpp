#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int data) : data(data), next(NULL) {}
};
Node *createLinkedList()
{
    return NULL;
}
Node *insertNode(Node *headNode, int data) //
{
    Node *newNode = new Node(data);
    if (headNode == NULL)
    {
        return newNode;
    }
    Node *current = headNode;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return headNode;
}
void displayLinkedList(Node *LinkedList)
{
    Node *current = LinkedList;
    while (current != NULL)
    {
        cout << current->data << " next Node ->> ";
        current = current->next;
    }
    cout << " Null " << endl;
}
int main()
{
    Node *LinkedList1 = createLinkedList();
    LinkedList1 = insertNode(LinkedList1, 5);
    LinkedList1 = insertNode(LinkedList1, 112);
    LinkedList1 = insertNode(LinkedList1, 8);
    displayLinkedList(LinkedList1);
    return 0;
}