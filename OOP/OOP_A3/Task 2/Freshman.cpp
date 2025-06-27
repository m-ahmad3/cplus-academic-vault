#include "Freshman.h"

// Constructor
Freshman::Freshman(const char* name, const char* degreeName, const char* reg) : UndergraduateStudent(name, degreeName, reg) {}

// Copy constructor
Freshman::Freshman(const Freshman& obj) : UndergraduateStudent(obj) {}

// Display function to display freshman student details
void Freshman::Display()
{
    // Call base class's Display function
    UndergraduateStudent::Display();
}
