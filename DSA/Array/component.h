#ifndef COMPONENT_H
#define COMPONENT_H

class Array{
    private:
        int *A;
        int size;
        int length;
        void Swap(int *x, int *y);
    public:
        Array();
        Array(int size);
        ~Array();
        
};

#endif