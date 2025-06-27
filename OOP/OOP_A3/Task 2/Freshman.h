#pragma once
#include "UndergraduateStudent.h" // Include necessary header file for UndergraduateStudent class

// Freshman class, inherits from UndergraduateStudent
class Freshman : public UndergraduateStudent
{
public:
    // Constructors
    Freshman(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    Freshman(const Freshman&); // Copy constructor

    void Display(); // Function to display freshman details
};
