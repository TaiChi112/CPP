#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

double evaluate(double a, double b, char op) {
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : throw "Division by zero!";
        default: throw "Invalid operator!";
    }
}

int main() {
    char again = 'y';

    while (again == 'y' || again == 'Y') {
        double num1 = 0, num2 = 0;
        char op;

        cout << "\n--- TABLE CALCULATOR ---\n";
        cout << "[7] [8] [9] [/]\n";
        cout << "[4] [5] [6] [*]\n";
        cout << "[1] [2] [3] [-]\n";
        cout << "[0] [=] [C] [+]\n";
        cout << "------------------------\n";

        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter second number: ";
        cin >> num2;

        try {
            double result = evaluate(num1, num2, op);
            cout << "\n= " << result << endl;
        } catch (const char* err) {
            cout << "Error: " << err << endl;
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> again;
    }

    cout << "Calculator closed.\n";
    return 0;
}
