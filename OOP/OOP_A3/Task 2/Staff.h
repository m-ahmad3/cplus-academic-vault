#pragma once
#include "Employee.h" // Include necessary header file for Employee class

// Staff class, inherits from Employee
class Staff : public Employee
{
protected:
    char* Designation; // Designation of the staff
public:
    // Constructors
    Staff(const char* = nullptr, int = 0, const char* = nullptr); // Default constructor
    Staff(const Staff&); // Copy constructor

    void Display(); // Function to display staff details
    ~Staff(); // Destructor
};
