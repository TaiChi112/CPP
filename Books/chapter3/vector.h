#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
using namespace std;

class Vector
{
    int *data;
    int size;

public:
    Vector();
    Vector(int);
    ~Vector();
    void resize(int);
    int length();
    void set(int,int);
    int get(int);
    void show();
};

#endif /* VECTOR_H */
