#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};
void display_node(Node *node)
{
    while (node != nullptr)
    {
        cout << node->data << " -> ";
        node = node->next;
    }
}
Node *append(Node *node, int data){
    Node *newNode(new Node{data, nullptr});
    if(node == nullptr){
        node = newNode;
        return node;
    }
    Node *temp = node;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
    return node;
}

int main()
{
    Node *node(new Node{112, nullptr});
    display_node(node);
    node = append(node, 123);
    node = append(node, 124);
    display_node(node);
    
    return 0;
}