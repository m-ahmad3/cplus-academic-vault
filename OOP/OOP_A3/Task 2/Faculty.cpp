#include "Faculty.h"

// Constructor
Faculty::Faculty(const char* name, int empCode, const char* facultyName) :Employee(name, empCode) {
    // Check if facultyName is not null
    if (facultyName != nullptr) {
        // Calculate length of facultyName string
        int size = 0;
        for (int a = 0; facultyName[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for facultyName string and copy content
        this->FacultyName = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->FacultyName[a] = facultyName[a];
        }
        this->FacultyName[size] = '\0'; // Null-terminate string
    }
    else {
        this->FacultyName = nullptr;
    }
}

// Copy constructor
Faculty::Faculty(const Faculty& obj) :Employee(obj) {
    // Check if FacultyName in obj is not null
    if (obj.FacultyName != nullptr) {
        // Calculate length of FacultyName string
        int size = 0;
        for (int a = 0; obj.FacultyName[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for FacultyName string and copy content
        this->FacultyName = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->FacultyName[a] = obj.FacultyName[a];
        }
        this->FacultyName[size] = '\0'; // Null-terminate string
    }
    else {
        this->FacultyName = nullptr;
    }
}

// Display function to display faculty details
void Faculty::Display() {
    // Call base class's Display function
    Employee::Display();
    // Display faculty name if not null
    if (FacultyName != nullptr) {
        cout << "Faculty: " << FacultyName << endl;
    }
}

// Destructor to properly deallocate memory
Faculty::~Faculty() {
    if (FacultyName != nullptr) {
        delete[] FacultyName;
        FacultyName = nullptr;
    }
}
