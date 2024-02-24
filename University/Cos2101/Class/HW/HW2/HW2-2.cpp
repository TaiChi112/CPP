#include <iostream>
#include <cmath>
using namespace std;

void input(int &, int &, int &);
void compute(int, int, int, double &, double &);

int main()
{
    int a, b, c; // input
    double y1, y2;
    input(a, b, c);
    compute(a, b, c, y1, y2);
    cout << "Y1 : " << y1 << endl;
    cout << "Y2 : " << y2 << endl;
    return 0;
}
void input(int &a, int &b, int &c)
{
    cout << "Input a : ";
    cin >> a;
    cout << "Input b : ";
    cin >> b;
    cout << "Input c : ";
    cin >> c;
}
void compute(int a, int b, int c, double &y1, double &y2)
{
    y1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    y2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
}