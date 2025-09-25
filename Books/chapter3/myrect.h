#ifndef MYRECT_H
#define MYRECT_H
#include <iostream>
#include "../chapter2/rectangle.h"
using namespace std;

class MyRect
{
    Rectangle **rects;
    int rows, cols;
    void allocateArray();
    void deallocateArray();

public:
    MyRect();
    MyRect(int, int);
    ~MyRect();
    void reset(int, int);
    void setRect(int, int, int, int);
    Rectangle getRect(int, int);
    void show();
};
MyRect::MyRect() : rects(nullptr), rows(0), cols(0) {}
MyRect::MyRect(int r, int c) : rows(r), cols(c) { allocateArray(); }
MyRect::~MyRect() { deallocateArray(); }
void MyRect::reset(int newRows, int newCols)
{
    deallocateArray();
    rows = newRows;
    cols = newCols;
    allocateArray();
}
void MyRect::setRect(int row, int col, int width, int length)
{
    if (row >= 0 && row < rows && col >= 0 && col < cols)
    {
        rects[row][col].set(width, length);
    }
    else
    {
        cout << "Index out of bounds." << endl;
    }
}
Rectangle MyRect::getRect(int row, int col)
{
    if (row >= 0 && row < rows && col >= 0 && col < cols)
    {
        return rects[row][col];
    }
    else
    {
        cout << "Index out of bounds. Returning default Rectangle." << endl;
        return Rectangle();
    }
}
void MyRect::show()
{
    cout << "MyRect contains " << rows << " rows and " << cols << " columns of rectangles : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Reatangle at (" << i << ", " << j << "): " << endl;
            rects[i][j].show();
        }
    }
}
void MyRect::allocateArray()
{
    rects = new Rectangle *[rows];
    for (int i(0); i < rows; i++)
    {
        rects[i] = new Rectangle[cols];
    }
}
void MyRect::deallocateArray()
{
    if (rects)
    {
        for (int i(0); i < rows; i++)
        {
            delete[] rects[i];
        }
        delete[] rects;
    }
}

#endif // MYRECT_H