#include <iostream>

using namespace std;

float Input();                       // getting product
float FindDiscount(float);           // finding discount 10 persent
void FindNet(float, float, float &); // finding net price
void Output(float, float, float);    // outputting the result

int main()
{
    float Cost; 
    Cost = Input();         // input
    float Discount, Net; // output
    Discount = FindDiscount(Cost);
    FindNet(Cost, Discount, Net);
    Output(Cost, Discount, Net);
    return 0;
}

float Input()
{
    float Cost;
    cout << "Cost : ";
    cin >> Cost;
    return Cost;
}

float FindDiscount(float Cost)
{
    float Discount;
    Discount = Cost * 0.1;
    return Discount;
}

void FindNet(float Cost, float Discount, float &Net)
{
    Net = Cost - Discount;
}

void Output(float Cost, float Discount, float Net)
{
    cout << "Cost : " << Cost << endl;
    cout << "Discount : " << Discount << endl;
    cout << "Net : " << Net << endl;
}