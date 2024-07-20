#include "component.h"
#include <iostream>

using namespace std;

Array::Array() : size(10), length(0)
{
    A = new int[size];
}

Array::Array(int size) : size(size), length(0)
{
    A = new int[size];
}