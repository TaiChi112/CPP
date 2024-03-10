#include <iostream>
using namespace std;
int main()
{
    int num1, num2, SUM;
    cout << "Enter number 1 : ";
    cin >> num1;
    cout << "Enter number 2 : ";
    cin >> num2;
    SUM = num1 + num2;
    cout << num1 << "+" << num2 << "= " << SUM << endl;
    SUM = num1 - num2;
    cout << num1 << "-" << num2 << "= " << SUM << endl;
    SUM = num1 * num2;
    cout << num1 << "*" << num2 << "= " << SUM << endl;
    SUM = num1 / num2;
    cout << num1 << "/" << num2 << "= " << SUM << endl;
    return 0;
}
