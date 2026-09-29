#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    // User inputs the operator
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // User inputs the two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform operation based on the input operator
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2;
            else
                cout << "Error! Division by zero is not allowed.";
            break;
        default:
            cout << "Error! Operator is not correct.";
            break;
    }

    return 0;
}
