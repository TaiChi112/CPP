#include <iostream>
using namespace std;
int main()
{
    int num1, num2, SUM;
    cout << "Enter number 1 : ";
    cin >> num1; //+ Enter number 1 : 34
    cout << "Enter number 2 : ";
    cin >> num2; //+ Enter number 5 : 5
    SUM = num1 + num2;//! 34+5= 39
    cout << num1 << "+" << num2 << "= " << SUM << endl;
    SUM = num1 - num2;//! 34-5= 29
    cout << num1 << "-" << num2 << "= " << SUM << endl;
    SUM = num1 * num2;//! 34*5= 170 
    cout << num1 << "*" << num2 << "= " << SUM << endl;
    SUM = num1 / num2;//! 34/5= 6
    cout << num1 << "/" << num2 << "= " << SUM << endl;
    return 0;
}

//!! 3.1 Result in the main of above
// 34+5= 39
// 34-5= 29
// 34*5= 170
// 34/5= 6

//!! 3.2 Why result divide is be integer
// because we are Fdeclaration data type is int

//!! 3.3 If i want to divide to decimal How mange program Where statement
// edit data type is statement 5 change data type is be double or long