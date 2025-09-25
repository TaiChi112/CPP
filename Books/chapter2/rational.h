#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
using namespace std;

class Rational
{
    double numerator;
    double denominator;

public:
    Rational();
    Rational(double, double);
    ~Rational();
    double calculateRational();
    void setNumerator(double);
    void setDenominator(double);
    void show();
};
Rational::Rational() : numerator(0), denominator(1) {}
Rational::Rational(double n, double d) : numerator(n), denominator(d)
{
    if (d == 0)
    {
        cout << "Denominator cannot be zero" << endl;
        numerator = n;
        denominator = 1;
    }
    else
    {
        numerator = n;
        denominator = d;
    }
}
Rational::~Rational() { cout << "destructuring Rational" << endl; }

double Rational::calculateRational() { return numerator / denominator; }
void Rational::setNumerator(double n)
{
    this->numerator = n;
}
void Rational::setDenominator(double d)
{
    if (d == 0)
    {
        cout << "Denominator cannot be zero" << endl;
        denominator = 1;
    }
    else
    {
        this->denominator = d;
    }
}
void Rational::show()
{
    cout << numerator << "/" << denominator << endl;
    cout << "Result calculate : " << calculateRational() << endl;
}
void IORational(double &numerator, double &denominator)
{
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
}
#endif