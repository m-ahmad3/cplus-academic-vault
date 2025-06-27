#pragma once
#include "UndergraduateStudent.h" // Include necessary header file for UndergraduateStudent class

// Senior class, inherits from UndergraduateStudent
class Senior : public UndergraduateStudent
{
public:
    // Constructors
    Senior(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    Senior(const Senior&); // Copy constructor

    void Display(); // Function to display senior student details
};
