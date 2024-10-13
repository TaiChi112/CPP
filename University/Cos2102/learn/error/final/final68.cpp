#include <iostream>
using namespace std;
class A
{
    int a;

protected:
    int f1(int i)
    {
        a = i;
        return a;
    }

public:
    A() { a = 5; }
    A f2(int i)
    {
        a = i;
        return *this;
    }
    int f3(A x) { return a * x.a; }
    A operator*(A &x) { return f3(x); }// f3() is return in but operator*() is return object of A
    A operator*=(A &x)
    {
        a = f3(x);
        return *this;
    }
    int f4(int i)
    {
        a *= i;
        return *this;
    }
    int operator()() { return a; }
    operator int() { return a; }
    friend ostream &operator<<(ostream &o, A &a)
    {
        o << a.a;
        return o;
    }
};
class B
{
    A a;

protected:
    A g1(int x) { return a.f2(x); }

public:
    B() { cout << "hi" << endl; }
    B(A x) { x = a; }
    int g2() { return a; }
    A g3()
    {
        a *= a;
        return *this;
    }
    A g4(A x) { return a.f4(x); }// f4() is return int but g4() is return object of A
    B g5(int i)
    {
        A t;
        a = t.f2(i);
        return t;
    }
    int g6(B k) { return k.a + g2(); }
    int g7(B &k, int i) { return k.g1(i) * 2; }
    B g8(A &x)
    {
        x.f4(2);
        return x;
    }
    A g9()
    {
        a.f2(g6(*this));
        return a;
    }
    A operator()() { return a; }
};

class C
{
    B b;

protected:
    C h1(B y)
    {
        b = B(y);
        return *this;
    }

public:
    A h2(int i) { return b.f2(i); }// f2() is return object of A but h2() is return object of A
    A h3(A x) { return b.g8(x).g1(3); } // g8() is return object of B but h3() is return object of A
    B h4(B y)
    {
        b.g7(y, y());
        return b;
    }
    int h5(A x) { return x() + b()(); }
    C h6()
    {
        b.g9()();
        return *this;
    }
    B h7(A x) { return h1(x).h4(b); }
};
int main()
{
    A a1, a2;
    a1 *= a2;
    cout << a2.f2(4).f3(a1) << endl;
    B b1;
    B b2(a1);
    cout << b1.g9().g6(b2) << endl; // g9() is return object of A but g6() is return int
    cout << b2.g8(a2)() << endl;
    int k;
    k = b1.g7(b2, a1);
    cout << b2.g5(a2()).f4(3) << endl; // g5() is return object of B but f4() is return int
    cout << b2()() + b1() << endl;
    a2 = b1().g9().f2(1); // g9() is return object of A but f2() is return object of A
    C c1;
    k = c1.h6().h4(b1).g5(a1)();
    cout << c1.h4(b2()).g9().f2(k) << endl;
    C *c2 = new C;
    k = c2->h5(b1) + b2.g2(); // h5() is return int but g2() is return int
    b2 = c2->h4(b1).g8(a1);
    cout << b1.g7(b2, a1) << endl;
    cout << c1.h7(b1())() << endl;
    cout << c2->h7(a2()).g2() << endl; // h7() is return object of B but g2() is return int
    k = a2 + a1 + b1();
    delete c2;
}