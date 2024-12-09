#include <iostream>

using namespace std;

int process1(float &buy)
{
    if (buy < 1000)
    {
        return 2;
    }
    else if (buy > 1000 && buy < 5000)
    {
        return 5;
    }
    else
    {
        return 10;
    }
}
void process2(float &buy, float &percent, float &discount, float &net)
{
    discount = buy * (percent / 100);
    net = buy - discount;
}
int main()
{
    float buy, percent, discount, net;
    cout << "Enter a number : ";
    cin >> buy;
    percent = process1(buy);
    process2(buy, percent, discount, net);
    cout << "Discount : " << percent << " %" << endl;
    cout << "Discount : " << discount << " Bath" << endl;
    cout << "Net : " << net << " Bath" << endl;
    return 0;
}