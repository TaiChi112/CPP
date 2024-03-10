#include <iostream>

using namespace std;

int main()
{
    float bath, dollar = 35.82, cent = 100; // declare variable and define default value
    cout << "Enter number of bath : ";
    cin >> bath;                                               // input number of bath
    dollar = (bath / dollar);                                  // formula to change bath to dollar
    cout << "bath to change dollar : " << dollar << endl;      // display bath to dollar
    int wholeDollars = dollar;                                 //
    int remainingCents = (dollar - wholeDollars) * cent + 0.5; // rounding without cmath +0.5 to rounding
    cout << "Bath to Dollar: " << wholeDollars << " dollars and " << remainingCents << " cents." << endl;

    return 0;
}
// Enter number of bath : 1000
// bath to change dollar : 27.9174
// Bath to Dollar: 27 dollars and 92 cents.