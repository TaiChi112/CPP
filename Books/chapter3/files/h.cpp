#include <iostream>

using namespace std;

class Object1
{
    int data;

public:
    Object1(int d) : data(d) {}
    int getData()
    {
        return data;
    }
};
class Object2
{
    int data;

public:
    Object2(int d) : data(d) {}
    int getData()
    {
        return data;
    }
};
class Object3
{
    int data;

public:
    Object3() : data(0) {}
    Object3(Object1 o1, Object2 o2)
    {
        data = o1.getData() + o2.getData();
    }
    void addObject(Object1 o1, Object2 o2)
    {
        data = o1.getData() + o2.getData();
    }
    int getData()
    {
        return data;
    }
};
class Counter
{
    int count;

public:
    Counter() : count(0) {}
    Counter(int c) : count(c) {}
    int getCount()
    {
        return count;
    }
    void operator++()
    {
        ++count;
    }
    Counter operator++(int)
    { // prefix
        ++count;
        return *this;
    }
    // Counter operator++(int)
    // { // postfix
    //     return Counter(++count);
    // }
    Counter operator++(int)
    {
        count++;
        Counter temp(count);
        return temp;
        // temp.count = count;
        // return temp;
    }
    operator double(){}
};
int main()
{
    Object1 o1(10);
    Object2 o2(20);
    Object3 o3(o1, o2);
    cout << "Data in Object3: " << o3.getData() << endl;
    Object3 o4;
    o4.addObject(o1, o2);
    cout << "Data in Object4: " << o4.getData() << endl;
    Counter c1;
    cout << "Count: " << c1.getCount() << endl;
    // ++c;
    // ++c;
    // cout << "Count: " << c.getCount() << endl;

    Counter a, b, c, d, e;
    // b = ++a;
    c = a++;
    a++;
    cout << "a : " << a.getCount() << endl;
    cout << "b : " << b.getCount() << endl;
    cout << "c : " << c.getCount() << endl;
    return 0;
}