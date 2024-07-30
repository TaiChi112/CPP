#include <iostream>

using namespace std;
struct Node
{
    int data;
    Node *address;
    Node(){};
    Node(int data) : data(data), address(nullptr){};
    Node(int data, Node *address) : data(data), address(address){};
};

int main(){
    Node *node1{new Node()};
    node1->data = 100;
    node1->address = nullptr;

    Node node2;
    node2.data = 112;
    node2.address = nullptr;
    return 0;
}