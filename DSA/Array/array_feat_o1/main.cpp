#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int *arr = new int[5]{1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i(0); i < size; i++)
    {
        cout << "index: " << i << ": " << arr[i] << " \n";
    }
    int rows(2), cols(2);
    int **arr2 = new int *[rows];
    int datas[rows][cols] = {{112, 211}, {314, 415}};
    for (int i = 0; i < rows; i++)
    {
        arr2[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            arr2[i][j] = datas[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "row " << i << " col " << j << ": " << arr2[i][j] << endl;
        }
    }
    return 0;
}