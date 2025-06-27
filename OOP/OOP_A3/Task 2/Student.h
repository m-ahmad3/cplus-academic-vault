#pragma once
#include "CommunityMember.h" // Include necessary header file for CommunityMember class

// Student class, inherits from CommunityMember
class Student : public CommunityMember
{
protected:
    char* DegreeName; // Name of the degree
    char* RegistrationNo; // Registration number of the student
public:
    // Constructors
    Student(const char* = nullptr, const char* = nullptr, const char* = nullptr); // Default constructor
    Student(const Student&); // Copy constructor

    void Display(); // Function to display student details
    ~Student(); // Destructor
};
