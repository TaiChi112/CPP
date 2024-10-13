#include <iostream>
using namespace std;
class B;
class A
{
    int a;

protected:
    int f1(int i) { a = i; }

public:
    A() { a = 0; }
    A(int x) { a = x; }
    A *f2(int i)
    {
        a = i;
        return this;
    }
    int f3() { return a; }
    A operator++() { return ++a; }
    A f4(int a) { return *f2(a * a); }
    friend int f(B);
};
class B : public A
{
    int b;

protected:
    A g1(int x)
    {
        b = x;
        return b;
    }

public:
    B() : A(2) { b = 3; }
    operator int() { return b; }
    B g1(int i, int j)
    {
        b = i;
        f2(j);
        return *this;
    }
    void g2(A x) { b += x; }// cannot to operate object
    B g3(int i) { b = *this + i; }
    A g4(B x) { return A(x + b); }
    int g5(A x) { return x.a + b; }//cannot to access private member
    int g6(B x) { return x.f3() + b; }
    B *g7()
    {
        f1(b);
        return this;
    }
};
int f(B y)
{
    int i = y.a + 1;
    i += y.b;// cannot access private member
    return i;
}
class C
{
    B b;

protected:
    B h1(int i, int j) { return b.g1(i, j); }

public:
    C() { b.f2(1); }
    C(B y) { b = y; }
    C(A x) { b.f1(x.f3()); }// object cannot access protected member
    C h2(B y)
    {
        b.g6(y);
        return *this;
    }
    B h3(int i, int j) { return b.g1(i, j).g3(j); }
    A h4() { return ++b.g4(b); }
    int h5(int i) { return b.f4(i).f3(); }
    B h6() { return b; }
};
class D : public C
{
    A a;

public:
    int k1(int i) { return h3(i, i + 1).h5(i + 2); } 
    int k2(int i, int j) { return h1(i, j); }
    void k3(A a) { ++*this->a.f2(a.f3()); }
    A k4(B b) { return a.f4(b.g6(h6())); }
    D k5()
    {
        k3(h4());
        return *this;
    }
    C k6(C c) { h2(c.h6()).g6(h3(1, 2)); }// h6 it's return object class B
};
int main()
{
    A a;
    B b;
    int n = (++*b.g7()->f2(a.f3())).f3();
    n = b.g1(a.f3(), (++a).f3());
    n = b.g4(B()).f2(5)->f3();
    C c;
    n = c.h4().h6().g6(b);//return class B
    cout << c.g7()->f4(3).f3() << endl;
    c.h3(b.g6(B()), b);
    D d;
    d.k4(c.h6());
    cout << d.k3(b.f4(a.f3())) << endl;// cannot display object directly
    D d2(d.k5());
    d2.k3(a.f3());
    d2.h3(d.h6().f3(), b.h4());// class B doesn't have f3() function
    d2.h2(c.h3(c.h6(), d.h4().f3()));
}