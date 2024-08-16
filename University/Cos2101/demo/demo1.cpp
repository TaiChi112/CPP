#include <iostream>
#include "demo1.h"

using namespace std;

void Input(int *);
void Output(int *);
int Addition(int *, int *);
int Subtraction(int *, int *);
int Multiplication(int *, int *);
int Division(int *, int *);
int main()
{
    int value1;
    Input(&value1);
    Output(&value1);

    int value2[2]{112, 112};

    cout << "Addition : " << Addition(&value1, &value2[0]) << endl;

    cout << "Subtraction : " << Subtraction(&value1, &value2[1]) << endl;

    cout << "Multiplication : " << Multiplication(&value1, &value2[0]) << endl;

    cout << "Division : " << Division(&value1, &value2[1]) << endl;
    return 0;
}
