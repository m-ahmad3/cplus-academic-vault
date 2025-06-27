#pragma once
#include "UndergraduateStudent.h" // Include necessary header file for UndergraduateStudent class

// Junior class, inherits from UndergraduateStudent
class Junior : public UndergraduateStudent
{
public:
    // Constructors
    Junior(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    Junior(const Junior&); // Copy constructor

    void Display(); // Function to display junior student details
};
