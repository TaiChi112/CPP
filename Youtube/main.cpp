#include <iostream>

using namespace std;

int main(){
    const float mile_to_km{1.60934};
    float miles, km;
    cout << "Enter the distance in miles: ";cin>>miles;
    km = miles * mile_to_km;
    cout << "The distance in km is: " << km << endl;
    return 0;
}