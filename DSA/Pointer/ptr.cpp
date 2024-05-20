#include <iostream>

using namespace std;

int main()
{
    int x1(10);
    int x2 = 11;
    int *y1 = NULL;
    int *y2 = NULL;
    int *z1 = new int(112);
    int *z2 = new int;
    *z2 = 10;
    cout << "value x1 format constructor : " << x1 << endl;
    cout << "value x1 format assign : " << x1 << endl;
    cout << "value y1 format allocate constructor : " << y1 << endl;
    cout << "value y2 format allocate : " << y2 << endl;
    return 0;
}