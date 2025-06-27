#pragma once
#include "CommunityMember.h" // Include necessary header file for CommunityMember class

// Alumnus class, inherits from CommunityMember
class Alumnus : public CommunityMember
{
    int GraduationYear; // Graduation year of the alumnus
public:
    // Constructors
    Alumnus(const char* = nullptr, int = 0); // Default constructor
    Alumnus(const Alumnus&); // Copy constructor

    void Display(); // Function to display alumnus details
};
