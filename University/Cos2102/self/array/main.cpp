#include <iostream>

using namespace std;

class MyArray
{
    int value;

public:
    MyArray() {}
    MyArray(int v) : value(v) {}

    void setValue(int v) { value = v; }
    void show()
    {
        cout << "value: " << value << endl;
    }
};

int main()
{
    MyArray arr[3];

    for (int i = 0; i < 3; i++)
    {
        int input;
        cout << "Enter value for arr[" << i << "]: ";
        cin >> input;
        arr[i].setValue(input);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "arr[" << i << "].value: ";
        arr[i].show();
    }

    return 0;
}
