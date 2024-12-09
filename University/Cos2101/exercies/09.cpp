#include <iostream>

using namespace std;

struct node
{
    string word;
    int count;
    node *link;
};
node *create(node *currNode)
{
    if (currNode == NULL)
    {
        node *newNode = new node;
        newNode->link = NULL;
        return newNode;
    }
    else
    {
        currNode->link = create(currNode->link);
        return currNode;
    }
}

void display(node *node)
{
    while (node != NULL)
    {
        cout << node->word << " " << node->count << " -> ";
        node = node->link;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *p = new node, *q = new node, *r = new node, x, y, z;
    p->word = "Hi";
    p->count = 112;
    p->link = q;
    q->word = "Hey";
    q->count = 113;
    q->link = r;
    r->word = "Hello";
    r->count = 114;
    r->link = NULL;
    display(p);
    delete p, q;
    return 0;
}