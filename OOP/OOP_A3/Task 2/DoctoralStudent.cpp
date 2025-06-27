#include "DoctoralStudent.h"

// Constructor
DoctoralStudent::DoctoralStudent(const char* name, const char* degreeName, const char* reg) : GraduateStudent(name, degreeName, reg) {}

// Copy constructor
DoctoralStudent::DoctoralStudent(const DoctoralStudent& obj) : GraduateStudent(obj) {}

// Display function to display doctoral student details
void DoctoralStudent::Display()
{
    // Call base class's Display function
    GraduateStudent::Display();
    // Display program type for doctoral student
    cout << "Program Type: Doctoral" << endl;
}
