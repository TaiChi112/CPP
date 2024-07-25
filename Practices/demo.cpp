#include <iostream>

using namespace std;

void gets(int array[], int size)
{
      for (int i = 0; i < size; i++)
      {
            cout << array[i] << " : " << &array[i] << endl;
      }
}
void getByIndex(int array[], int size, int index)
{
      if (index >= 0 && index < size)
      {
            cout << array[index] << " : " << &array[index] << endl;
      }
}
int main()
{
      int myArray[5]{112, 113, 114, 112, 118};
      int size{sizeof(myArray) / sizeof(myArray[0])};
      gets(myArray, size);
      getByIndex(myArray, size, 2);
      return 0;
}