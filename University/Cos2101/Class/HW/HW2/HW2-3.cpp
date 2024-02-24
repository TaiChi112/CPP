#include <iostream>

using namespace std;

void Input(float &); // prototype
float FindCelsius(float);

void FindFahrenheit(float, float &);

void Output(float, float, float);
int main()
{
    float depth;
    float Celsius, Fahrenheit;
    Input(depth);
    Celsius = FindCelsius(depth);
    FindFahrenheit(Celsius, Fahrenheit);
    Output(depth, Celsius, Fahrenheit);
    return 0;
}

void Input(float &depth)
{
    cout << "Enter depth in feet : ";
    cin >> depth;
}
float FindCelsius(float depth)
{
    float out;
    out = (5.0 / 9.0) * (depth - 32);
    return out;
}
void FindFahrenheit(float Celsius, float &Fahrenheit)
{
    Fahrenheit = (9.0 / 5.0) * Celsius + 32;
}
void Output(float depth, float Celsius, float Fahrenheit)
{
    cout << "Depth : " << depth << endl;
    cout << "Celsius : " << Celsius << endl;
    cout << "Fahrenheit : " << Fahrenheit << endl;
}