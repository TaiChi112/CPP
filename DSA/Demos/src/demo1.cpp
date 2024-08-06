#include <iostream>

using namespace std;

void input(int *value)
{
      cout << "Input you value : ";
      cin >> *value;
}
void output(int *value)
{
      cout << "Output you value : " << *value << endl;
}
int main()
{
      int x;
      input(&x);
      output(&x);
      return 0;
}