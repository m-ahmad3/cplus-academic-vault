#pragma once
#include "UndergraduateStudent.h" // Include necessary header file for UndergraduateStudent class

// Sophomore class, inherits from UndergraduateStudent
class Sophomore : public UndergraduateStudent
{
public:
    // Constructors
    Sophomore(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    Sophomore(const Sophomore&); // Copy constructor

    void Display(); // Function to display sophomore student details
};
