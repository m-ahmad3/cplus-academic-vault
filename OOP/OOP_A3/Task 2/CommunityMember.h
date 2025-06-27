#pragma once
#include<iostream>
using namespace std;

class CommunityMember
{
protected:
    char* Name; // Pointer to store the name of the community member

public:
    // Constructor with optional parameter to initialize name
    CommunityMember(const char* = nullptr);

    // Copy constructor to handle deep copy of the name
    CommunityMember(const CommunityMember&);

    // Function to display the name
    void Display();

    // Destructor to release allocated memory
    ~CommunityMember();
};
