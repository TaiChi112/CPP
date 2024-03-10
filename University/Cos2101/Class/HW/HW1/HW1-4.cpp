#include <iostream>

using namespace std;

int main()
{
    double r, area; // r equal radius declare variable
    cout << "radius : ";
    cin >> r;            // Enter value radius
    area = 3.14 * r * r; // formula to find area of circle
    cout << "Result area circle : " << area << endl;
    return 0;
}