#include <iostream>

using namespace std;

void input(int &t)
{
    cout << "Total inches : ";
    cin >> t;
}

void transfer(int t, int &Y, int &F, int &I)
{
    Y = t / 36;
    F = (t % 36) / 12;
    I = t % 12;
}

int main()
{
    int lnch, Y, F, I;
    input(lnch);
    transfer(lnch, Y, F, I);
    cout << "Yards : " << Y << endl;
    cout << "Feet : " << F << endl;
    cout << "Inches : " << I << endl;
    return 0;
}
