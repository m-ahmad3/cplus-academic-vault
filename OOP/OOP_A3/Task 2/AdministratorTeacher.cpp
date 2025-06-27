#include "AdministratorTeacher.h"

// Constructor
AdministratorTeacher::AdministratorTeacher(const char* name, int empCode, const char* facultyName, const char* responsibility, const char* course) 
    :Teacher(name, empCode, facultyName, course), Administrator(name, empCode, facultyName, responsibility) {}

// Copy constructor
AdministratorTeacher::AdministratorTeacher(const AdministratorTeacher& obj) : Teacher(obj), Administrator(obj) {}

// Display function to display administrator teacher details
void AdministratorTeacher::Display()
{

    // Call base class's Display function
    Faculty::Display();
    // Display responsibility if not null
    if (Responsibility != nullptr) {
        cout << "Responsibility: " << Responsibility << endl;
    }

    // Display course if not null
    if (Course != nullptr) {
        cout << "Course: " << Course << endl;
    }
}
