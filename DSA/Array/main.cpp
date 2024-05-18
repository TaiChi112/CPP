#include <iostream>

using namespace std;

// int lenght(int data[], int size)
// {
//     return sizeof(data) / sizeof(data[0]);
// }
// void display(int data[])
// {
//     for (int i = 0; i < lenght(data); i++)
//     {
//         cout << "Data in array index : " << data[i] << endl;
//     }
// }
int main()
{
    int data[5] = {1, 2, 3, 4, 5};
    cout << "size of array : " << sizeof(data) << " bytes" << endl;
    cout << "size of array element : " << sizeof(data[0]) << " bytes" << endl;
    // display(data);
    return 0;
}