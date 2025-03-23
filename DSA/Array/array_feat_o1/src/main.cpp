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
    vector<Person> arr6 = {Person(1, "A"), Person(2, "B")};
    arr6.push_back(Person(3, "C"));
    arr6.push_back(Person(4, "D"));
    for (int i(0); i < arr6.size(); i++)
    {
        arr6[i].display();
    }

    vector<vector<Person>> arr7 = {{Person(1, "A"), Person(2, "B")}, {Person(3, "C"), Person(4, "D")}};
    for (int i(0); i < arr7.size(); i++)
    {
        for (int j(0); j < arr7[i].size(); j++)
        {
            cout << arr7[i].size() << endl;
            arr7[i][j].display();
        }
    }

    vector<vector<Person>> arr8(3, vector<Person>(1, Person(0, "Default")));
    for (vector<Person> row : arr8)
    {
        for (Person data : row)
        {
            data.display();
        }
    }

    vector<int> arr9(5, 112);
    for (int data : arr9)
    {
        cout << data << " ";
    }
    cout << endl;

    // initialization & assignment of vector
    vector<int> arr10;
    arr10 = {1, 2, 3, 4, 5};
    vector<int> arr11 = {1, 2, 3, 4, 5};
    vector<int> arr12(arr11);
    for (size_t i = 0; i < arr11.size(); i++)
    {

        cout << arr11[i] << " \n";
    }

    vector<int> arr13(5, 21);
    vector<int> arr14;
    arr14.assign(5, 100);
    for (size_t i = 0; i < arr14.size(); i++)
    {
        cout << arr14[i] << " ";
    }
    cout << endl;
    return 0;
}