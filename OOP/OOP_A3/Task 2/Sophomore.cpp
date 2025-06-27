#include "Sophomore.h"

// Constructor
Sophomore::Sophomore(const char* name, const char* degreeName, const char* reg) : UndergraduateStudent(name, degreeName, reg) {}

// Copy constructor
Sophomore::Sophomore(const Sophomore& obj) : UndergraduateStudent(obj) {}

// Display function to display sophomore student details
void Sophomore::Display()
{
    // Call base class's Display function
    UndergraduateStudent::Display();
}
