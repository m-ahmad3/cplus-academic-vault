#include <Windows.h> // Include Windows-specific header for system("cls")
#include "Calculator.h"

// Template function useCalculator for handling calculator operations of type T
template<typename T>
void useCalculator();

// Function to display the calculator menu and handle user choices
void printMenu();

// Main function to demonstrate integer and double calculators
int main() {
    cout << "\t\t\t----Examples----" << endl;

    // Example of using the integer calculator
    Calculator<int> intCalc;
    cout << "Integer Calculator:" << endl;
    int a = 10, b = 2;
    cout << "Values: a = " << a << ", b = " << b << endl;
    cout << "Addition: " << intCalc.add(a, b) << endl;
    cout << "Subtraction: " << intCalc.subtract(a, b) << endl;
    cout << "Multiplication: " << intCalc.multiply(a, b) << endl;
    cout << "Division (valid): " << intCalc.divide(a, b) << endl;
    cout << "Division (by zero): " << intCalc.divide(a, 0) << endl; // Handles division by zero error

    // Example of using the double calculator
    Calculator<double> doubleCalc;
    cout << "\nDouble Calculator:" << endl;
    double x = 10.5, y = 2.3;
    cout << "Values: x = " << x << ", y = " << y << endl;
    cout << "Addition: " << doubleCalc.add(x, y) << endl;
    cout << "Subtraction: " << doubleCalc.subtract(x, y) << endl;
    cout << "Multiplication: " << doubleCalc.multiply(x, y) << endl;
    cout << "Division: " << doubleCalc.divide(x, y) << endl;
    cout << "Division (by zero): " << doubleCalc.divide(x, 0.0) << endl; // Handles division by zero error

    // Print the main calculator menu
    printMenu();

    return 0; // Exit the program
}

// Template function useCalculator for handling calculator operations of type T
template<typename T>
void useCalculator() {
    system("cls"); // Clear the console screen

    Calculator<T> cal; // Create an instance of Calculator for type T
    T v1, v2; // Variables to store operands
    char op; // Operator input by user
    bool exitRequested = false; // Flag to indicate if user wants to exit

    do {
        cout << "\nEnter Operand (+,-,/,*, type 'q' to quit): ";
        cin >> op; // Read operator choice from user

        // Check if user chose to quit
        if (op == 'q' || op == 'Q') {
            cout << "Exiting calculator..." << endl;
            exitRequested = true;
            break; // Exit loop
        }

        try {
            cout << "Enter First Value: ";
            cin >> v1; // Read first operand
            if (!cin.good()) {
                throw 404; // Throw an integer error code if input is invalid
            }
            cout << "Enter Second Value: ";
            cin >> v2; // Read second operand
            if (!cin.good()) {
                throw 404; // Throw an integer error code if input is invalid
            }
        }
        catch (int error) {
            cerr << "Error: Invalid input. Please enter a valid number " << error << endl; // Print error message for invalid input
            cin.clear(); // Clear error flag
            cin.ignore(); // Ignore rest of input
            continue; // Restart the loop
        }
        cout << endl;

        // Perform operation based on operator input
        switch (op) {
        case '+':
            cout << v1 << " " << op << " " << v2 << " = " << cal.add(v1, v2) << endl; // Addition
            break;
        case '-':
            cout << v1 << " " << op << " " << v2 << " = " << cal.subtract(v1, v2) << endl; // Subtraction
            break;
        case '*':
        case 'x':
        case 'X':
            cout << v1 << " " << op << " " << v2 << " = " << cal.multiply(v1, v2) << endl; // Multiplication
            break;
        case '/':
            cout << v1 << " " << op << " " << v2 << " = " << cal.divide(v1, v2) << endl; // Division
            break;
        default:
            cout << "Invalid Operand Please Try Again!..." << endl; // Invalid operator
            break;
        }

    } while (!exitRequested); // Repeat until user wants to exit
    system("cls"); // Clear the console screen before exiting
}

// Function to display the calculator menu and handle user choices
void printMenu() {
    int choice; // Variable to store user's choice

    // Loop until user chooses to exit
    do {
        cout << "\n\t\t\t---Calculator---" << endl;
        cout << "\nSelect Datatype of the Calculator: " << endl;
        cout << "1. Integer\n2. Float\n3. Double\n4. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice; // Read user's choice

        // Switch statement based on user's choice
        if (choice == 1) {
            useCalculator<int>(); // Use integer calculator
        }
        else if (choice == 2) {
            useCalculator<float>(); // Use float calculator
        }
        else if (choice == 3) {
            useCalculator<double>(); // Use double calculator
        }
        else if (choice == 4) {
            cout << "\nThank You...." << endl; // Exit message
            break;
        }
        else {
            cout << "\nInvalid Choice!...\nPlease Enter a Valid Choice" << endl; // Invalid choice
        }
    } while (choice != 4); // Repeat until user chooses to exit
}