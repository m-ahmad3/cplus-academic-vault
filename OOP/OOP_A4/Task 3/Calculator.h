#pragma once
#include <iostream>
using namespace std;

// Template class Calculator for performing arithmetic operations on type T
template <typename T>
class Calculator {

public:
    // Function to add two values of type T
    T add(T val1, T val2);

    // Function to subtract val2 from val1 of type T
    T subtract(T val1, T val2);

    // Function to multiply two values of type T
    T multiply(T val1, T val2);

    // Function to divide val1 by val2 of type T
    T divide(T val1, T val2);
};
