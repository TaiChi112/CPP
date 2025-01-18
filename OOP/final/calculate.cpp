#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long double calculate1(long double x);
long double divide(long double a, long double b);
void bisectionMethod();

long double calculate2(long double x);
long double divide2(long double a, long double b);
void falsePositionMethod();

int main()
{
    falsePositionMethod();
    return 0;
}
void falsePositionMethod()
{
    long double c;
    long double a(-1);
    long double b(5);
    std::cout << std::left
              << std::setw(10) << "a"
              << std::setw(10) << "b"
              << std::setw(10) << "f(a)"
              << std::setw(10) << "f(b)"
              << std::setw(10) << "m"
              << std::setw(10) << "f(m)"
              << std::endl;
    for (int i = 0; i < 5; i++)
    {
        c = divide2(a, b);
        std::cout << std::left
                  << std::setw(10) << std::fixed << std::setprecision(4) << a
                  << std::setw(10) << std::fixed << std::setprecision(4) << b
                  << std::setw(10) << std::fixed << std::setprecision(4) << calculate2(a)
                  << std::setw(10) << std::fixed << std::setprecision(4) << calculate2(b)
                  << std::setw(10) << std::fixed << std::setprecision(4) << c
                  << std::setw(10) << std::fixed << std::setprecision(4) << calculate2(c)
                  << std::endl;
        if (calculate2(c) > 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }
}
long double divide2(long double a, long double b)
{
    return (calculate2(a) * b - calculate2(b) * a) / (calculate2(a) - calculate2(b));
}
long double calculate2(long double x)
{
    return (pow(x, 2) + (3 * x) - 9);
}
long double calculate1(long double x)
{
    return (2 * (x * x * x) + 4 * (x * x) - 2 * x - 5);
}
long double divide(long double a, long double b)
{
    return ((a + b) / 2);
}
void bisectionMethod()
{
    long double a(1);
    long double b(1.5);
    long double x;
    std::cout << std::left
              << std::setw(10) << "a"
              << std::setw(10) << "b"
              << std::setw(10) << "f(a)"
              << std::setw(10) << "f(b)"
              << std::setw(10) << "m"
              << std::setw(10) << "f(m)"
              << std::endl;

    for (int i = 0; i < 5; i++)
    {
        x = divide(a, b);
        std::cout << std::left
                  << std::setw(10) << std::fixed << std::setprecision(4) << a
                  << std::setw(10) << std::fixed << std::setprecision(4) << b
                  << std::setw(10) << std::fixed << std::setprecision(4) << calculate1(a)
                  << std::setw(10) << std::fixed << std::setprecision(4) << calculate1(b)
                  << std::setw(10) << std::fixed << std::setprecision(4) << x
                  << std::setw(10) << std::fixed << std::setprecision(4) << calculate1(x)
                  << std::endl;
        if (calculate1(x) > 0)
        {
            b = x;
        }
        else
        {
            a = x;
        }
    }
}