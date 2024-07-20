#ifndef COMPONENT_H
#define COMPONENT_H

class Array1{
    private:
        int *A;
        int size;
        int length;
        void Swap(int *x, int *y);
    public:
        Array1();
        Array1(int size);
        ~Array1();
        void Display();
        
};
struct Array2
{
    int *A;
    int size;
    int length;
    Array2();
    Array2(int size);
    ~Array2();
};


#endif