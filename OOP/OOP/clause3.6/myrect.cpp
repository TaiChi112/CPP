#include <iostream>
#include "myrect.h"

using namespace std;

int main()
{
    int row(2), col(2);
    MyRect mr(row, col);
    int width, length;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter data for rectangle at position  " << i << " " << j << endl;
            cout << "Enter width : ";
            cin >> width;
            cout << "Enter length : ";
            cin >> length;
            Rectangle rect(width, length);
            mr.setRect(i, j, rect);
        }
    }
    cout << endl;
    mr.show();
    cout << endl;

    cout << "Try to reset My Rectangle" << endl;
    cout << endl;
    int newRow(1), newCol(1);

    mr.reset(newRow, newCol);
    for (int i = 0; i < newRow; i++)
    {
        for (int j = 0; j < newCol; j++)
        {
            cout << "Enter data for rectangle at position  " << i << " " << j << endl;
            cout << "Enter width : ";
            cin >> width;
            cout << "Enter length : ";
            cin >> length;
            Rectangle rect(width, length);
            mr.setRect(i, j, rect);
        }
    }
    cout << endl;
    mr.show();
    cout << endl;
    return 0;
}