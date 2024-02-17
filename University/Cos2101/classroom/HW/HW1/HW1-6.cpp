#include <iostream>

using namespace std;

int main()
{
    float bath;
    float dollar = 35.82;
    float cent = 100;
    cout << "Enter number of bath : ";
    cin >> bath;
    dollar = (bath / dollar);
    cout << "bath to change dollar : " << dollar << endl;
    int wholeDollars = dollar;
    int remainingCents = (dollar - wholeDollars) * cent + 0.5; // rounding without cmath
    cout << "Bath to Dollar: " << wholeDollars << " dollars and " << remainingCents << " cents." << endl;

    return 0;
}
// Enter number of bath : 1000
// bath to change dollar : 27.9174
// Bath to Dollar: 27 dollars and 92 cents.