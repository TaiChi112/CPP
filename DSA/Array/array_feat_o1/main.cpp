#include <iostream>
#include <vector>
using namespace std;
class Person
{
    int id;
    string name;

public:
    Person(int _id, string _name) : id(_id), name(_name) {}
    void display()
    {
        cout << "id: " << id << " name: " << name << endl;
    }
};
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
    for (int i = 0; i < rows; i++)
    {
        delete[] arr2[i];
    }
    delete[] arr2;

    vector<int> arr3 = {1, 2, 3, 4, 5};
    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << endl;
    }
    vector<vector<int>> arr4 = {{112, 211}, {314, 415}};
    for (int i = 0; i < arr4.size(); i++)
    {
        for (int j = 0; j < arr4[i].size(); j++)
        {
            cout << "row " << i << " col " << j << ": " << arr4[i][j] << endl;
        }
    }
    vector<vector<int>> arr5(rows, vector<int>(cols, 0));
    int datas2 = 112;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr5[i][j] = datas2++;
        }
    }
    for (const auto &row : arr5)
    {
        for (int data : row)
        {
            cout << data << " ";
        }
        cout << endl;
    }
    return 0;
}