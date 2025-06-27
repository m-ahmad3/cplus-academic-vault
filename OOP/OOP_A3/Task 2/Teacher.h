#pragma once
#include "Faculty.h" // Include necessary header file for Faculty class

// Teacher class, inherits from Faculty virtually
class Teacher : public Faculty
{
protected:
    char* Course; // Course taught by the teacher

public:
    // Constructors
    Teacher(const char* = nullptr, int = 0, const char* = nullptr, const char* = nullptr); // Default constructor
    Teacher(const Teacher&); // Copy constructor

    void Display(); // Function to display teacher details
    ~Teacher(); // Destructor
};
