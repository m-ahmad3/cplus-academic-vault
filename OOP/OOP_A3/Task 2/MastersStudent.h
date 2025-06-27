#pragma once
#include "GraduateStudent.h" // Include necessary header file for GraduateStudent class

// MastersStudent class, inherits from GraduateStudent
class MastersStudent : public GraduateStudent
{
public:
    // Constructors
    MastersStudent(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    MastersStudent(const MastersStudent&); // Copy constructor

    void Display(); // Function to display master's student details
};
