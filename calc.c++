#include <iostream>
using namespace std;

class Calculator {
public:
    // Method to add two numbers
    float add(float a, float b) {
        return a + b;
    }

    // Method to subtract two numbers
    float subtract(float a, float b) {
        return a - b;
    }

    // Method to multiply two numbers
    float multiply(float a, float b) {
        return a * b;
    }

    // Method to divide two numbers
    float divide(float a, float b) {
        if (b != 0) 
            return a / b;
        else {
            cout << "Cannot divide by zero.\n";
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    float num1, num2;
    int choice;

    // Display the welcome message
    cout << "Welcome to the Calculator!\n";
    cout << "----------------------------\n";

    // Ask the user to choose the operation
    cout << "Choose operation:\n";
    cout << "1) Add\n";
    cout << "2) Subtract\n";
    cout << "3) Multiply\n";
    cout << "4) Divide\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Ask the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Ask the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the selected operation and display the result
    switch (choice) {
        case 1:
            cout << "Result: " << calc.add(num1, num2) << "\n";
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2) << "\n";
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2) << "\n";
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2) << "\n";
            break;
        default:
            cout << "Invalid choice.\n";
            break;
    }

    return 0;
}
