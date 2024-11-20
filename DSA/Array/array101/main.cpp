#include <iostream>

using namespace std;
struct I1
{
    bool b1;
    int i;
    int b2;
};
struct I2
{
    int i;
    int b1;
    bool b2;
};

int main()
{
    cout << sizeof(I1) << endl
         << sizeof(I2) << endl;
    return 0;
}