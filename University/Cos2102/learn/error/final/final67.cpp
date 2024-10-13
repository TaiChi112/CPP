#include <iostream>
using namespace std;
class A
{
    int a;

protected:
    A f1(int x)
    {
        a = x;
        return *this;
    }

public:
    A() { a = 1; }
    A(int i) { f1(i); }
    A f2(A *a)
    {
        this->a = a->a;
        return *this;
    }
    A f3(int i) { return f1(i + 4); }
    virtual int f4() { return a; }
};
class B : public A
{
    int b;

protected:
    B f5(int x)
    {
        b = x;
        f1(x);
        return *this;
    }

public:
    B() : A(4) { b = 5; }
    B f6(B b)
    {
        this->b = ++b.b;
        f1(b.f4() + 1);
        return *this;
    }
    B f7(A a)
    {
        this->a = a.f4();
        return *this;
    }
    A f8(int j) { return f3(j).f4(); }
    A f9(A &a) { return a.f2(this); }
    int f4() { return b; }
    B f11(int i) { return B(i); }
    B f12(int i) { return f5(i + b); }
};
class C
{
    A *a;

public:
    C() { a = 0; }
    C(A *x) { g2(x); }
    int g1() { return a->f4(); }
    C g2(A *x)
    {
        a = x;
        return *this;
    }

    A g3(A *x) { return a->f2(x); }
    A *g4() { return a; }
    int g5(int i) { return B::f4() + i; }
    B g6() { return a->f12(i); }
};
class D : public C
{
    B b;

public:
    D h1(int i)
    {
        b.f12(i);
        return *this;
    }
    B h2() { return b; }
    int h3(A *x) { g2(x).g4()->f4(); }
    void h4(B b)
    {
        this->b = b;
        b.f8(1);
    }
    A h5(int i) { return A(b.g1() + i); }
};
int main()
{
    A *a[5] = {new A, new B, new B,
               new A, new A(6)};
    cout << a[3]->f3(9).f4() << endl;
    a[0]->f2(a[4]);
    cout << a[1]->f8(5).f4() << endl;
    C c(a[0]);
    cout << c.g2(a[3]).g4()->f4() << endl;
    cout << c.g3(a[1]).f4() << endl;
    D d;
    cout << d.h3(c.g4()) << endl;
    d.h1(a[4].f4());
    A a2 = d.h2().f9(*a[2]);
    B b;
    int i = a[2]->f6(b).f4();
    int j = b.f9(*a[3]).f4();
    D d2(a2);
    *a[3] = a[2]->f3(j);
    j = d.h3(&b) + c.g4()->f4();
    a2 = d.h4(b).f8(j);
    C c2(&a2);
    cout << c2.g4()->f2(a[0]).f4();
    for (int i = 0; i < 5; i++)
        delete a[i];
}