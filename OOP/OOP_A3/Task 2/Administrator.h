#pragma once
#include "Faculty.h"

// Administrator class, inherits from Faculty virtually
class Administrator : public Faculty
{
protected:
    char* Responsibility; // Responsibility of the administrator
public:
    // Constructors
    Administrator(const char* = nullptr, int = 0, const char* = nullptr, const char* = nullptr); // Default constructor
    Administrator(const Administrator&); // Copy constructor

    void Display(); // Function to display administrator details
    ~Administrator(); // Destructor
};