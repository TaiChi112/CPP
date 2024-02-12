#include <iostream>

using namespace std;

int main()
{
    int sizeOfArray;
    cout << "Create size of array : ";
    cin >> sizeOfArray;
    cout << "Size of array your input : " << sizeOfArray << endl;
    int ArrayOfNumbers[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Input number of array : ";
        cin >> ArrayOfNumbers[i];
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << "Display value in the Array of numbers : " << ArrayOfNumbers[i] << endl;
    }

    return 0;
}