#include <iostream>

using namespace std;

int main()
{
      // 1 bath = 0.027 dollar
      // 1 dollar = 36.73 bath
      const float oneBathToDollar = 0.027;
      const float oneDollarToBath = 36.73;
      int bath,dollar;
      float resultBathToDollar,resultDollarToBath;

      cout << "Enter money bath : ";
      cin >> bath;
      cout << "You input your money : " << bath << " bath" << endl;

      resultBathToDollar = bath * oneBathToDollar; // ex. result = 100 bath * 0.027 = 2.7 be dollar

      cout << "Enter money dollar : ";
      cin >> dollar;
      cout << "You input your money : " << dollar << " bath" << endl;
      resultDollarToBath = dollar * oneDollarToBath; // ex. result = 100 dollar * 36.73 = 3673 be bath

      return 0;
}
