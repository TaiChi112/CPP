#ifndef MYRECT_H
#define MYRECT_H
#include <iostream>
using namespace std;
class Rectangle
{
    int width, length;
    static int count;

public:
    Rectangle();
    Rectangle(int, int);
    ~Rectangle();
    void set(int, int);
    void setWidth(int);
    void setLength(int);
    int findCircumference();
    int findArea();
    int getWidth();
    int getLength();
    void show();
    static int getCount();
};
Rectangle::Rectangle() : width(0), length(0)
{
    ++Rectangle::count;
}
Rectangle::Rectangle(int w, int l) : width(w), length(l)
{
    ++Rectangle::count;
}
Rectangle::~Rectangle()
{
    --Rectangle::count;
    cout << "destructuring Rectangle\n";
}
void Rectangle::set(int w, int l)
{
    width = w;
    length = l;
}
void Rectangle::setWidth(int w) { width = w; }
void Rectangle::setLength(int l) { length = l; }
int Rectangle::getWidth() { return width; }
int Rectangle::getLength() { return length; }
int Rectangle::findCircumference()
{
    return 2 * (width + length);
}
int Rectangle::findArea()
{
    return width * length;
}
void Rectangle::show()
{
    cout << "Rectangle : (" << getWidth() << ", " << getLength() << ") ";
    cout << "Area : " << findArea() << " : ";
    cout << "Circumference : " << findCircumference() << endl;
}
int Rectangle::count = 0;
int Rectangle::getCount() { return count; }

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
    void setRect(int, int, Rectangle &);
    int getRow();
    int getCol();
    Rectangle getRect(int, int);
    void show();
};
MyRect::MyRect() : rects(nullptr), rows(0), cols(0) {}
MyRect::MyRect(int r, int c) : rows(r), cols(c) { allocateArray(); }
MyRect::~MyRect()
{
    deallocateArray();
}
void MyRect::reset(int newRows, int newCols)
{
    cout << "You are reset size is be : " << newRows << " : " << newCols << endl;
    cout << endl;
    deallocateArray();
    rows = newRows;
    cols = newCols;
    allocateArray();
}

void MyRect::setRect(int row, int col, Rectangle &rect)
{
    if (row >= 0 && row < rows && col >= 0 && col < cols)
    {
        rects[row][col] = rect;
    }
    else
    {
        cout << "Index out of bounds." << endl;
    }
}
int MyRect::getRow() { return rows; }
int MyRect::getCol() { return cols; }
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
            cout << "Reatangle at index (" << i << ", " << j << "): ";
            rects[i][j].show();
        }
    }
}
void MyRect::allocateArray()
{
    rects = new Rectangle *[rows];
    for (int i = 0; i < rows; i++)
    {
        rects[i] = new Rectangle[cols];
    }
}
void MyRect::deallocateArray()
{
    if (rects)
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] rects[i];
        }
        delete[] rects;
    }
}

#endif // MYRECT_H