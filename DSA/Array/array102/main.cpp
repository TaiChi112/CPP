#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "please input size of array which you want : ";
    cin >> size;
    int arr1[size];
    for (int i = 0; i < size; i++)
    {
        cout << "please input element " << i + 1 << " : ";
        cin >> arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << "index : " << i + 1 << " element : ";
        cout << arr1[i] << endl;
    }
    // array 2D
    int row, col;
    cout << "input row of array : ";
    cin >> row;
    cout << "input col of array : ";
    cin >> col;
    int arr2[row][col];
   

    return 0;
}