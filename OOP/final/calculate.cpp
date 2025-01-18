#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

long double calculate1(long double x)
{
    return (2 * (x * x * x) + 4 * (x * x) - 2 * x - 5);
}
long double calculate2(long double x)
{
    return 0;
}
long double divide(long double a, long double b)
{
    return ((a + b) / 2);
}

int main()
{
    long double a(1);
    long double b(1.5);
    long double x;
    std::cout << std::left
              << std::setw(10) << "a"
              << std::setw(15) << "b"
              << std::setw(20) << "f(a)"
              << std::setw(20) << "f(b)"
              << std::setw(15) << "m"
              << std::setw(20) << "f(m)"
              << std::endl;

    for (int i = 0; i < 5; i++)
    {
        x = divide(a, b);
        std::cout << std::left
                  << std::setw(10) << std::fixed << std::setprecision(4) << a
                  << std::setw(15) << std::fixed << std::setprecision(4) << b
                  << std::setw(20) << std::fixed << std::setprecision(4) << calculate1(a)
                  << std::setw(20) << std::fixed << std::setprecision(4) << calculate1(b)
                  << std::setw(15) << std::fixed << std::setprecision(4) << x
                  << std::setw(20) << std::fixed << std::setprecision(4) << calculate1(x)
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

    return 0;
}