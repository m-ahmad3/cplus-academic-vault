#pragma once
#include "CommunityMember.h" // Include necessary header file for CommunityMember class

// Employee class, inherits from CommunityMember
class Employee : public CommunityMember
{
protected:
    int EmployeeCode; // Employee code variable
public:
    // Constructors
    Employee(const char* = nullptr, int = 0); // Default constructor
    Employee(const Employee&); // Copy constructor

    void Display(); // Function to display employee details
};
