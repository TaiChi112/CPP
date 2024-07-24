#include <iostream>

using namespace std;

struct Node1
{
      int data;
      Node1 *address;
};


int main(){
      Node1 node1,node2,node3;
      node1.data = 112;
      node1.address = &node2;
      node1.data = 113;
      node1.address = &node3;
      node1.data = 114;
      node1.address = nullptr;
      
      void display(Node1 *node){
            for (int i = 0; i < 3; i++)
            {
                  /* code */
            }
            

      }

           
    return 0;
}