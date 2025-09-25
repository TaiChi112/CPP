#include <iostream>

using namespace std;

class Vector
{
    int *data;
    int size;

public:
    Vector() : data(NULL), size(0) {}
    Vector(int newSize)
    {
        size = newSize;
        data = new int[size];
        for (int i = 0; i < size; i++)
        {
            data[i] = 0;
        }
    }
    int getLength()
    {
        return size;
    }
    void set(int index, int value)
    {
        if (index >= 0 && index < size)
        {
            data[index] = value;
        }
        else
        {
            cout << "Error: Index out of bounds" << endl;
        }
    }
    int get(int index)
    {
        if (index >= 0 && index < size)
        {
            return data[index];
        }
        else
        {
            cout << "Error: Index out of bounds" << endl;
            return -1;
        }
    }
    void show()
    {
        cout << "Vector elements : ";
        for (int i = 0; i < size; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Vector v1(5);
    cout << "Get length : " << v1.getLength() << endl;
    v1.show();

    v1.set(0, 10);
    v1.set(1, 20);
    v1.set(2, 30);
    v1.set(3, 40);
    v1.set(4, 50);
    v1.show();

    cout << "Get element at index : " << v1.get(2) << endl;
    return 0;
}