#include <iostream>

using namespace std;

struct Node
{
      int data;
};

int main()
{
      int node1(112);
      cout << node1 << endl;
      Node node2{112};
      cout << node2.data << endl;
      return 0;
}