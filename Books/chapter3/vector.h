#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class Vector
{
    int *data;
    int size;

public:
    Vector();
    Vector(int);
    ~Vector();
    void resize(int);
    int length();
    void set(int, int);
    int get(int);
    void show();
};
Vector::Vector() : size(0), data(NULL) {}
Vector::Vector(int newSize)
{
    size = newSize;
    data = new int[size];
    for (int i = 0; i < size; i++)
    {
        data[i] = 0;
    }
}
Vector::~Vector()
{
    delete[] data;
    cout << "Destructor called : memory free" << endl;
}
void Vector::resize(int newSize)
{
    int *newData = new int[newSize];
    for (int i = 0; i < newSize; i++)
    {
        newData[i] = (i < size) ? data[i] : 0;
    }
    delete[] data;
    data = newData;
    size = newSize;
}
int Vector::length()
{
    return size;
}
void Vector::set(int index, int value)
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
int Vector::get(int index)
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
void Vector::show()
{
    cout << "Vector elements : ";
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
#endif /* VECTOR_H */
