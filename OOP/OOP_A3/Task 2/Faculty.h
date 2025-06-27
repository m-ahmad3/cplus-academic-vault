#pragma once
#include "Employee.h" // Include necessary header file for Employee class

// Faculty class, inherits from Employee
class Faculty : public Employee
{
protected:
    char* FacultyName; // Name of the faculty
public:
    // Constructors
    Faculty(const char* = nullptr, int = 0, const char* = nullptr); // Default constructor
    Faculty(const Faculty&); // Copy constructor

    void Display(); // Function to display faculty details
    ~Faculty(); // Destructor
};
