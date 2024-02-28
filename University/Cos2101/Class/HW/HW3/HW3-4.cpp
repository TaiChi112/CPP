#include <iostream>

using namespace std;

int Compare(int &x, int &y)
{
    if (x > y)
    {
        return x - y;
    }
    else if (y > x)
    {
        return y - x;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x, y;
    cin >> x >> y;
    
    cout << "The difference between x and y is : " << Compare(x, y) << endl;
    return 0;
}