#include <iostream>
using namespace std;
int main()
{
    int num1, num2, SUM;
    cout << "Enter number 1 : ";
    cin >> num1; //+ Enter number 1 : 34
    cout << "Enter number 2 : ";
    cin >> num2;       //+ Enter number 5 : 5
    SUM = num1 + num2; //! 34+5= 39
    cout << num1 << "+" << num2 << "= " << SUM << endl;
    SUM = num1 - num2; //! 34-5= 29
    cout << num1 << "-" << num2 << "= " << SUM << endl;
    SUM = num1 * num2; //! 34*5= 170
    cout << num1 << "*" << num2 << "= " << SUM << endl;
    SUM = num1 / num2; //! 34/5= 6
    cout << num1 << "/" << num2 << "= " << SUM << endl;
    return 0;
}
