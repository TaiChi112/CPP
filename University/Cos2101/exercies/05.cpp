#include <iostream>

using namespace std;

int main()
{
    char ch[3] = {'A', 'B', 'C'};
    for (int i = 0; i < 3; i++)
    {
        cout << "Charactor : " << ch[i] << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter charactor : ";
        cin >> ch[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Charactor : " << ch[i] << endl;
    }
    int number[4] = {1, 2, 3, 4};
    int sum;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + number[i];
    }
    int average = sum / 10;
    cout << average << endl;

    return 0;
}