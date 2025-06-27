#pragma once
#include "Student.h" // Include necessary header file for Student class

// GraduateStudent class, inherits from Student
class GraduateStudent : public Student
{
public:
    // Constructors
    GraduateStudent(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    GraduateStudent(const GraduateStudent&); // Copy constructor

    void Display(); // Function to display graduate student details
};
