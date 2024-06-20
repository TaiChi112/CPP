#include <iostream>
#include "class.h"
#include "mid.h"

using namespace std;

int main()
{
    int luckNumber[5];
    // cout << luckNumber << endl;
    // cout << &luckNumber[0] << endl;
    // cout << &luckNumber[1] << endl;
    // cout << &luckNumber[2] << endl;
    // cout << &luckNumber[3] << endl;
    // cout << luckNumber[3] << endl;
    // cout << *(luckNumber + 3) << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Number : ";
        cin >> luckNumber[i];
    }
    for (int i = 0; i <= 4; i++)
    {
        cout << *luckNumber + i << endl;
    }

    return 0;
}