#include <iostream>

using namespace std;

int main()
{
      int myArray[5]{0, 1, 2, 3, 4};
      int size{sizeof(myArray) / sizeof(myArray[0])};
      return 0;
}