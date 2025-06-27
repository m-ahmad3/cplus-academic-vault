#include "Calculator.h"

// Function definitions
template <typename T>
T Calculator<T>::add(T val1, T val2) {
    return val1 + val2;
}

template <typename T>
T Calculator<T>::subtract(T val1, T val2) {
    return val1 - val2;
}

template <typename T>
T Calculator<T>::multiply(T val1, T val2) {
    return val1 * val2;
}

template <typename T>
T Calculator<T>::divide(T val1, T val2) {
    try {
        if (val2 == 0) {
            throw "Division by zero error"; // Throw exception if dividing by zero
        }
        return val1 / val2;
    }
    catch (const char* error) {
        cerr << "Exception occurred: " << error << endl; // Print error message for division by zero
        return 0; // Return 0 in case of exception
    }
}

// Explicit instantiation for int, double, float if needed
template class Calculator<int>;
template class Calculator<double>;
template class Calculator<float>;
