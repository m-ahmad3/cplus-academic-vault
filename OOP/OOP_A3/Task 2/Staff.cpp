#include "Staff.h"

// Constructor
Staff::Staff(const char* name, int empCode, const char* designation) :Employee(name, empCode) {
    // Check if designation is not null
    if (designation != nullptr) {
        // Calculate length of designation string
        int size = 0;
        for (int a = 0; designation[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for designation string and copy content
        this->Designation = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Designation[a] = designation[a];
        }
        this->Designation[size] = '\0'; // Null-terminate string
    }
    else {
        this->Designation = nullptr;
    }
}

// Copy constructor
Staff::Staff(const Staff& obj) :Employee(obj) {
    // Check if Designation in obj is not null
    if (obj.Designation != nullptr) {
        // Calculate length of Designation string
        int size = 0;
        for (int a = 0; obj.Designation[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for Designation string and copy content
        this->Designation = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Designation[a] = obj.Designation[a];
        }
        this->Designation[size] = '\0'; // Null-terminate string
    }
    else {
        this->Designation = nullptr;
    }
}

// Display function to display staff details
void Staff::Display() {
    // Call base class's Display function
    Employee::Display();
    // Display designation if not null
    if (Designation != nullptr) {
        cout << "Designation: " << Designation << endl;
    }
}

// Destructor to properly deallocate memory
Staff::~Staff() {
    if (Designation != nullptr) {
        delete[] Designation;
        Designation = nullptr;
    }
}
