#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c;
    float Y1, Y2;

    // Input coefficients
    cout << "Enter the value a: ";
    cin >> a;
    cout << "Enter the value b: ";
    cin >> b;
    cout << "Enter the value c: ";
    cin >> c;

    // Calculate roots using the quadratic formula
    float discriminant = b * b - 4 * a * c;

    if (discriminant >= 0)
    {
        Y1 = (-b + sqrt(discriminant)) / (2 * a);
        Y2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Root 1 (Y1): " << Y1 << endl;
        cout << "Root 2 (Y2): " << Y2 << endl;
    }
    else
    {
        cout << "Complex roots. Cannot calculate real roots." << endl;
    }

    return 0;
}
