#pragma once
#include "GraduateStudent.h" // Include necessary header file for GraduateStudent class

// DoctoralStudent class, inherits from GraduateStudent
class DoctoralStudent : public GraduateStudent
{
public:
    // Constructors
    DoctoralStudent(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    DoctoralStudent(const DoctoralStudent&); // Copy constructor

    void Display(); // Function to display doctoral student details
};
