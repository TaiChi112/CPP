#include <iostream>
using namespace std;

void input(double& m)
{
    cout << "Buy item =? ";
    cin >> m;
}

double FindDiscount(double m)
{
    if (m <= 1000)
        return 0;
    else if (m <= 2000)
        return 5;
    else
        return 10;
}

int main() {
    double Buy, Discount, Net;
    int Percent;

    input(Buy);
    Percent = FindDiscount(Buy);
    Discount = Buy * Percent / 100;
    Net = Buy - Discount;

    cout << "Buy item = " << Buy << " Baths " << endl;
    cout << "Discount = " << Percent << " Percents" << endl;
    cout << "Discount = " << Discount << " Baths" << endl;
    cout << "Net = " << Net << " Baths" << endl;

    return 0;
}
