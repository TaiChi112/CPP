#include <iostream>

using namespace std;

void input(double &miles)
{
      cout << "Input mile : ";
      cin >> miles;
}
double convert(double miles)
{
      const double mile_to_kilometer = 1.60934;
      return miles * mile_to_kilometer;
}
void output(double kilometers)
{
      cout << "convert mile to kilometer : " << kilometers << endl;
}

int main()
{
      const double mile_to_kilometer = 1.60934;
      double miles, kilometers;
      return 0;
}
/// convert mile to kilometer
// input mile
// formula kilometer = mile * 1.60934
// output kilometer