#include "UndergraduateStudent.h"

// Constructor
UndergraduateStudent::UndergraduateStudent(const char* name, const char* degreeName, const char* reg) : Student(name, degreeName, reg) {}

// Copy constructor
UndergraduateStudent::UndergraduateStudent(const UndergraduateStudent& obj) : Student(obj) {}

// Display function to display undergraduate student details
void UndergraduateStudent::Display()
{
    // Call base class's Display function
    Student::Display();
}
