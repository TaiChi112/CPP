#include <iostream>

using namespace std;

void gets(int array[], int size)
{
      for (int i = 0; i < size; i++)
      {
            cout << array[i] << " : " << &array[i] << endl;
      }
}

int main()
{
      int myArray[5]{112, 113, 114, 112, 118};
      int size{sizeof(myArray) / sizeof(myArray[0])};
      gets(myArray, size);
      return 0;
}