#include <iostream>

using namespace std;

struct Person
{
    string name;
    int age;
};

int main()
{
    const int row = 2;
    const int col = 2;
    Person person1[row][col];
    person1[0][0] = {"TaiChi", 20};
    person1[0][1] = {"Benzine", 21};
    person1[1][0] = {"Art", 26};
    person1[1][1] = {"Lisa", 27};

    int sizeArray = row * col;
    // int sizeArray = sizeof(person1);
    int sizeDataType = sizeof(person1[0][0]);
    cout << "size array : " << sizeArray << endl;
    cout << "size data type  : " << sizeDataType << endl;

    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Display : " << person1[i][j].name << " " << person1[i][j].age << endl;
        }
    }

    Person person2[2][2] = {{{"TaiChi", 20}, {"Benzine", 21}}, {{"Art", 26}, {"Lisa", 27}}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Display object number 2 : " << person2[i][j].name << " " << person2[i][j].age << endl;
        }
    }

    return 0;
}