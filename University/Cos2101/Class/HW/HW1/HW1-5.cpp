#include <iostream>

using namespace std;

int main()
{
    double m;        // money
    double r;        // rate percent
    double interest; //
    double net;      // compound interest
    cout << "Enter your money : ";
    cin >> m;// input money
    cout << "Enter your interest rate % : ";
    cin >> r;// input rate
    interest = (m * r) / 100; // formula to find interest
    net = m * interest;       // formula to find net
    cout << "Interest : " << interest << endl;
    cout << "Net : " << net << endl;
    return 0;
}