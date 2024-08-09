#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head(new Node{112, nullptr});
    cout << head->data << endl;
    cout << head->next << endl;
    return 0;
}