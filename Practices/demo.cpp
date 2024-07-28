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
      else
      {
            cerr << "Error : Invalid index " << index << " Valid range is 0 to " << (size - 1) << endl;
      }
}
void getValueStartIndexToEndIndex(int array[], int size, int startIndex, int endIndex)
{
      if (startIndex >= 0 && startIndex < size && endIndex >= 0 && endIndex < size)
      {
            for (int i = startIndex; i <= endIndex; i++)
            {
                  cout << array[i] << " : " << &array[i] << endl;
            }
      }
      else
      {
            cerr << "Error : Invalid index " << startIndex << " or " << endIndex << " Valid range is 0 to " << (size - 1) << endl;
      }
}
void separatorLine()
{
      cout << "--------------------------------" << endl;
}

int main()
{
      int *p(new int(10));     
      int myArray[5]{112, 113, 114, 112, 118};
      int size{sizeof(myArray) / sizeof(myArray[0])};
      gets(myArray, size);
      separatorLine();
      getByIndex(myArray, size, 9);
      separatorLine();
      getByIndex(myArray, size, 0);
      separatorLine();
      getValueStartIndexToEndIndex(myArray, size, 1, 2);
      cout<<"Hello world!"<<endl;
      return 0;
}