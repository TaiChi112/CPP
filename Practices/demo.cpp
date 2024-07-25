#include <iostream>

using namespace std;

void display(int array[], int size)
{
      for (int i = 0; i < size; i++)
      {
            cout << array[i] << " : " << &array[i] << endl;
      }
}
int main()
{
      int myArray[5]{0, 1, 2, 3, 4};
      int size{sizeof(myArray) / sizeof(myArray[0])};
      return 0;
}