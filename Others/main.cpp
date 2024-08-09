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
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}
Node *append(Node *node, int data)
{
    Node *newNode(new Node{data, nullptr});
    if (node == nullptr)
    {
        node = newNode;
        return node;
    }
    Node *temp = node;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    return node;
}
Node *update(Node *node, int old_data, int new_data)
{
    Node *temp = node;
    while (temp != nullptr)
    {
        if (temp->data == old_data)
        {
            temp->data = new_data;
            return node;
        }
        temp = temp->next;
    }
    return node;
}
Node *delete_node(Node *node, int data)
{
    Node *temp = node;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp->data == data)
        {
            if (prev == nullptr)
            {
                node = temp->next;
                delete temp;
                return node;
            }
            prev->next = temp->next;
            delete temp;
            return node;
        }
        prev = temp;
        temp = temp->next;
    }
    return node;
}

int main()
{
    Node *node(new Node{112, nullptr});
    display_node(node);
    cout<<"-------"<<endl;
    node = append(node, 123);
    node = append(node, 124);
    display_node(node);
    cout<<"-------"<<endl;
    node = update(node, 123, 125);
    node = update(node, 112, 999);
    display_node(node);
    cout<<"-------"<<endl;
    node = delete_node(node, 999);
    display_node(node);
    return 0;
}