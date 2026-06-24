// ========================================
//  Simple Calculator in C++
//  For Beginners
// ========================================

#include <iostream>   // This lets us use cout and cin (input/output)
using namespace std;  // So we don't have to write "std::cout" every time

int main() {

    // -- Variables to store the numbers and the operator --
    double num1, num2, result;
    char op;  // This will hold: +  -  *  /

    cout << "==============================" << endl;
    cout << "     Simple C++ Calculator    " << endl;
    cout << "==============================" << endl;

    // -- Ask the user to enter first number --
    cout << "\nEnter first number: ";
    cin >> num1;

    // -- Ask the user to choose an operation --
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    // -- Ask the user to enter second number --
    cout << "Enter second number: ";
    cin >> num2;

    // -- Perform the correct calculation based on the operator --
    if (op == '+') {
        result = num1 + num2;
    }
    else if (op == '-') {
        result = num1 - num2;
    }
    else if (op == '*') {
        result = num1 * num2;
    }
    else if (op == '/') {
        // Special case: we cannot divide by zero!
        if (num2 == 0) {
            cout << "\n Error: Cannot divide by zero!" << endl;
            return 1; // Stop the program
        }
        result = num1 / num2;
    }
    else {
        // If the user typed something other than + - * /
        cout << "\n Error: Invalid operator! Please use +, -, *, /" << endl;
        return 1; // Stop the program
    }

    // -- Show the final answer --
    cout << "\n Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    cout << "==============================" << endl;

    return 0; // Program finished successfully
}

// Note that : It Doesn't show decimals..!!
