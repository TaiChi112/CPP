#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "Enter a number: ";
    cin >> n;
    switch (n % 2)
    {
    case 0:
        if (n == 0)
            cout << "zero";
        else
            cout << "even";
        break;
    case 1:
        cout << "odd" << endl;
    }
    
    if (n % 2 == 0)
    {
        if (n == 0)
        {
            cout << "zero";
        }
        else
        {
            cout << "even";
        }
    }
    else
    {
        cout << "odd" << endl;
    }

    return 0;
}