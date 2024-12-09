#include <iostream>

using namespace std;

int main()
{
    float number1{112.112};
    float number2{0.112112};
    float absolute_error = number1 - number2;
    cout << absolute_error << endl;
    return 0;
}