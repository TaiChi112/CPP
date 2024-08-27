#include <iostream>

using namespace std;

struct Node2
{
      int data;
};
class Node3
{
      int data;

public:
      Node3(int data) : data(data) {}
      int get_data()
      {
            return data;
      }
};
int main()
{
      int node1(112);
      cout << node1 << endl;
      Node2 node2{112};
      cout << node2.data << endl;
      Node3 node{113};
      cout << node.get_data() << endl;
      return 0;
}