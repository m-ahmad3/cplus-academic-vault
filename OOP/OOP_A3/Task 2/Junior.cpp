#include "Junior.h"

// Constructor
Junior::Junior(const char* name, const char* degreeName, const char* reg) : UndergraduateStudent(name, degreeName, reg) {}

// Copy constructor
Junior::Junior(const Junior& obj) : UndergraduateStudent(obj) {}

// Display function to display junior student details
void Junior::Display()
{
    // Call base class's Display function
    UndergraduateStudent::Display();
}
