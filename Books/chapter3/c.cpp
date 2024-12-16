#include <iostream>

using namespace std;

int main()
{
    int in[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " " << in[i] << endl;
    }
    cout << endl;
    string s[5] = {"one", "two", "three", "four", "five"};
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " " << s[i] << endl;
    }
    cout << endl;
    float f[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " " << f[i] << endl;
    }
    cout << endl;
    char c[5] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " " << c[i] << endl;
    }
    cout << endl;
    bool b[5] = {true, false, true, false, true};
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << " " << b[i] << endl;
    }
    cout << endl;
    return 0;
}