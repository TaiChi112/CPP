#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    float Y1, Y2;
    cout << "Enter the value a : ";
    cin >> a;
    cout << "Enter the value b : ";
    cin >> b;
    cout << "Enter the value c : ";
    cin >> c;
    Y1 = -b + (sqrt((b * b) - (4 * a * c)) / (2 * a));
    Y2 = -b - (sqrt((b * b) - (4 * a * c)) / (2 * a));
    cout << "Result process Y1 : " << Y1 << endl;
    cout << "Result process Y2 : " << Y2 << endl;
    return 0;
}