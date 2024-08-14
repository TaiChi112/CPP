#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *node1 = new Node{112, NULL};
    cout << node1->data << endl;
    cout << node1->next << endl;
    return 0;
}