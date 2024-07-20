#include "component.h"
#include <iostream>

using namespace std;

Array1::Array1() : size(10), length(0)
{
    A = new int[size];
}

Array1::Array1(int size) : size(size), length(0)
{
    A = new int[size];
}
Array1::~Array1()
{
    delete[] A;
}

 