#include<iostream>
using namespace std;

int main() {
    float number1, number2, result;
    char operation;

    cout << "Enter number 1: ";
    cin >> number1;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter number 2: ";
    cin >> number2;

    switch (operation) {
        case '+':
            result = number1 + number2;
            break;
        case '-':
            result = number1 - number2;
            break;
        case '*':
            result = number1 * number2;
            break;
        case '/':
            if (number2 != 0) {
                result = number1 / number2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; 
            }
            break;
        default:
            cout << "Invalid input" << endl;
            return 1; 
    }

    cout << "Result: " << result << endl;

    return 0;
}
