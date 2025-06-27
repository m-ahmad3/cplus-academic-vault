#pragma once
#include "Student.h" // Include necessary header file for Student class

// UndergraduateStudent class, inherits from Student
class UndergraduateStudent : public Student
{
public:
    // Constructors
    UndergraduateStudent(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    UndergraduateStudent(const UndergraduateStudent&); // Copy constructor

    void Display(); // Function to display undergraduate student details
};
