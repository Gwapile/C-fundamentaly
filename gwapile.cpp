#include <iostream>
using namespace std;


// Function prototypes
void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch (operation) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                divide(num1, num2);
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}

void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}

void divide(double a, double b) {
    cout << "Result: " << a / b << endl;
}

