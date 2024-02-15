#include <iostream>

using namespace std;

int main()
{
    double m;        // money
    double r;        // interest rate %
    double interest; //
    double net;      // compound interest
    cout << "Enter your money : ";
    cin >> m;
    cout << "Enter your interest rate % : ";
    cin >> r;
    interest = (m * r) / 100; // formula to find interest
    net = m * interest;       // formula to find net
    cout << "Interest : " << interest << endl;
    cout << "Net : " << net << endl;
    return 0;
}