#include "Senior.h"

// Constructor
Senior::Senior(const char* name, const char* degreeName, const char* reg) : UndergraduateStudent(name, degreeName, reg) {}

// Copy constructor
Senior::Senior(const Senior& obj) : UndergraduateStudent(obj) {}

// Display function to display senior student details
void Senior::Display()
{
    // Call base class's Display function
    UndergraduateStudent::Display();
}
