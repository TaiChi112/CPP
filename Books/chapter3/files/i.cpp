#include <iostream>

using namespace std;

class MyUnaryOperator
{
public:
    void operator!()
    {
        cout << "MyUnaryOperator : !" << endl;
    }
    friend void operator&(MyUnaryOperator o)
    {
        cout << "MyUnaryOperator : &" << endl;
    }
    void operator~()
    {
        cout << "MyUnaryOperator : ~" << endl;
    }
    friend void operator*(MyUnaryOperator o)
    {
        cout << "MyUnaryOperator : *" << endl;
    }
    void operator+()
    {
        cout << "MyUnaryOperator : +" << endl;
    }
    friend void operator-(MyUnaryOperator o)
    {
        cout << "MyUnaryOperator : -" << endl;
    }
};
int main()
{
    MyUnaryOperator o1;
    !o1;
    &o1;
    ~o1;
    *o1;
    +o1;
    -o1;
    return 0;
}