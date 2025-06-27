#include "GraduateStudent.h"

// Constructor
GraduateStudent::GraduateStudent(const char* name, const char* degreeName, const char* reg) : Student(name, degreeName, reg) {}

// Copy constructor
GraduateStudent::GraduateStudent(const GraduateStudent& obj) : Student(obj) {}

// Display function to display graduate student details
void GraduateStudent::Display()
{
    // Call base class's Display function
    Student::Display();
}
