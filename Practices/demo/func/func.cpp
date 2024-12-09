#include <iostream>

using namespace std;

void printValue(int value)
{
      value = 112;
      cout << "Value : " << value << "is keeping Address : " << &value << endl;
}

int main()
{
      printValue(111);
      return 0;
}