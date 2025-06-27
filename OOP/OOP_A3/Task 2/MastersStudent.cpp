#include "MastersStudent.h"

// Constructor
MastersStudent::MastersStudent(const char* name, const char* degreeName, const char* reg) : GraduateStudent(name, degreeName, reg) {}

// Copy constructor
MastersStudent::MastersStudent(const MastersStudent& obj) : GraduateStudent(obj) {}

// Display function to display master's student details
void MastersStudent::Display()
{
    // Call base class's Display function
    GraduateStudent::Display();
    // Display program type for master's student
    cout << "Program Type: Masters" << endl;
}
