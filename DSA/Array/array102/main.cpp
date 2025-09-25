#include <iostream>

using namespace std;

void displayarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "value index at " << i << " : " << arr[i] << endl;
    }
}
// void display1(int arr[5], int size) {}
// void display2(int arr[], int size) {}
// void display1(int *arr, int size) {}
// void display1(int *arr[], int size) {}
int main()
{

    int box0[1]{112};
    int box1[3]{1, 2, 3};
    int *box2[2]{box0, box1};
    cout << box2[0][0] << endl;
    cout << box2[1][1] << endl;
    int row(3);

    int *jaggedarray[row];
    jaggedarray[0] = new int[3]{1, 2, 3};
    jaggedarray[1] = new int[2]{4, 5};
    jaggedarray[2] = new int[4]{6, 7, 8, 9};

    for (int i = 0; i < row; i++)
    {
        // for (int j = 0; j < *(&jaggedarray[i] + 1) - jaggedarray[i]; j++)
        for (int j = 0; j < (i == 0 ? 3 : (i == 1 ? 2 : 4)); j++)
        {
            cout << jaggedarray[i][j] << " ";
        }
    }

    // int sizeofarray(5);
    // int boxarray[sizeofarray]{1, 2, 3, 4, 5};
    // displayarray(boxarray, sizeofarray);
    return 0;
}