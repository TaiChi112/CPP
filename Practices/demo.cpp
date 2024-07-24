#include <iostream>

using namespace std;

struct Node
{
      int data;
      Node() {}
      Node(int data) : data(data) {}
};

int main()
{
      int data1(112);

      cout << "assign value data1 : " << data1 << " successfully" << endl;

      Node data2(113);

      cout << "assign value data2 : " << data2.data << " successfully" << endl;

      return 0;
}