#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *AdNextVal;
};

int main()
{

    Node *ptr1 = new Node;
    int *ptr2 = new int;
    Node node1;
    int node2;

    Node *ptr3 = &node1;
    int *ptr4 = &node2;
    Node ads = *ptr1;
    int ads2 = *ptr2;

    cout << "Struct Node ads1 keeping pointer ptr1 " << ptr1 << endl;

    delete ptr1, ptr2, &node1, &node2, ptr3, ptr4;
    cout << "Delete : " << "ptr1, ptr2, &node1, &node2, ptr3, ptr4" << endl;
    return 0;
}