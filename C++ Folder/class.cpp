/*
 * Calculator.cpp
 *
 *  Date: [Enter date]
 *  Author: [Your Name]
 */

#include <iostream>

using namespace std;

int main() {
    int op1, op2;
    char operation;
    char answer = 'Y';

    while (answer == 'Y' || answer == 'y') {
        cout << "Enter expression (e.g., 3 + 4): ";
        cin >> op1 >> operation >> op2;

        if (operation == '+') {
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        } else if (operation == '-') {
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        } else if (operation == '*') {
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        } else if (operation == '/') {
            if (op2 != 0) {
                cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
            } else {
                cout << "Error: Division by zero is undefined." << endl;
            }
        } else {
            cout << "Error: Invalid operation." << endl;
        }

        cout << "Do you wish to evaluate another expression? (Y/N): ";
        cin >> answer;
    }

    cout << "Program Finished." << endl;
    return 0;
}