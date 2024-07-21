#include <iostream>

using namespace std;

class Node1
{
    int data;

public:
    Node1() {}
    Node1(int data) : data(data) {}
    int getData() { return data; }
};
struct Node2
{
    int data;
    Node2() {}
    Node2(int data) : data(data) {}
};

int main()
{
    int node0(112);
    Node1 node1(112);
    Node2 node2(112);

    node0 = 0;
    node1 = Node1(0);
    node2 = Node2(0);

    cout << node0 << endl;
    cout << node1.getData() << endl;
    cout << node2.data << endl;

    int *ptr0 = &node0;
    Node1 *ptr1 = &node1;
    Node2 *ptr2 = &node2;

    cout << *ptr0 << endl;
    cout << ptr1->getData() << endl;
    cout << ptr2->data << endl;
    return 0;
}