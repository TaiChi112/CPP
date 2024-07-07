#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int value;
    Node() {}
    Node(int value) : value(value) {}
};

int main()
{
    int x1(112);  //{}
    Node x2(112); //{}

    int *x3 = &x1;
    Node *x4 = &x2;

    int *x9 = new int(114);
    Node *x10 = new Node(114);

    vector<int> x5(112, 113);  //{}
    vector<Node> x6(112, 113); //{}

    vector<int> *x7 = &x5;
    vector<Node> *x8 = &x6;

    vector<int> *x11 = new vector<int>(112, 113);
    vector<Node> *x12 = new vector<Node>(112, 113);

    cout << "Value x1 : " << x1 << endl;
    cout << "Value x2 : " << x2.value << endl;

    cout << "Value x3 : " << *x3 << endl;
    cout << "Value x4 : " << x4->value << endl;

    cout << "Value x5 : " << x5[1] << endl;
    cout << "Value x6 : " << x6[1].value << endl;

    cout << "Value x7 : " << (*x7)[1] << endl;
    cout << "Value x8 : " << (*x8)[1].value << endl;

    cout << "Value x9 : " << *x9 << endl;
    cout << "Value x10 : " << x10->value << endl;

    cout << "Value x11 : " << (*x11)[1] << endl;
    cout << "Value x12 : " << (*x12)[1].value << endl;
    return 0;
}