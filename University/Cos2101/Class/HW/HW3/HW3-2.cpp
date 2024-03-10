#include <iostream>

using namespace std;

int main()
{
    if (12 < 12)
    {
        cout << "less" << endl;
    }

    else
    {
        cout << "not less" << endl;
    }

    float var1 = 15.0;
    float var2 = 25.12;
    if (2 * var1 >= var2)
        cout << "O.K." << endl;
    else
        cout << "Not O.K." << endl;
    cout << "..................." << endl;

    int x = 4, y = 6;
    switch (x > y)
    {
    case 1:
        cout << "x greater" << endl;
        break;
    case 0:
        cout << "y greater or equal" << endl;
    }
    return 0;
}