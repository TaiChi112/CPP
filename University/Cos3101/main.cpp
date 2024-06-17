#include <iostream>

using namespace std;

int absoluteError(int &realNumber, int &approx)
{
    return abs(realNumber - approx);
}
int main()
{
    int realNumber;
    int approx;
    cout << "Enter the real number: ";
    cin >> realNumber;
    cout << "Enter the approximated number: ";
    cin >> approx;
    // Printing the error between the real number and the approximated number
    cout << "The absolute error is: " << absoluteError(realNumber, approx) << endl;
    system("pause");
    return 0;
}