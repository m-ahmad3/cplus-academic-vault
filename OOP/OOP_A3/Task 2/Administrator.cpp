#include "Administrator.h"

// Constructor
Administrator::Administrator(const char* name, int empCode, const char* facultyName, const char* responsibility) :Faculty(name, empCode, facultyName) {
    // Check if responsibility is not null
    if (responsibility != nullptr) {
        // Calculate length of responsibility string
        int size = 0;
        for (int a = 0; responsibility[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for responsibility string and copy content
        this->Responsibility = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Responsibility[a] = responsibility[a];
        }
        this->Responsibility[size] = '\0'; // Null-terminate string
    }
    else {
        this->Responsibility = nullptr;
    }
}

// Copy constructor
Administrator::Administrator(const Administrator& obj) :Faculty(obj) {
    // Check if responsibility in obj is not null
    if (obj.Responsibility != nullptr) {
        // Calculate length of responsibility string
        int size = 0;
        for (int a = 0; obj.Responsibility[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for responsibility string and copy content
        this->Responsibility = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Responsibility[a] = obj.Responsibility[a];
        }
        this->Responsibility[size] = '\0'; // Null-terminate string
    }
    else {
        this->Responsibility = nullptr;
    }
}

// Display function to display administrator details
void Administrator::Display() {
    // Call base class's Display function
    Faculty::Display();
    // Display responsibility if not null
    if (Responsibility != nullptr) {
        cout << "Responsibility: " << Responsibility << endl;
    }
}

// Destructor to properly deallocate memory
Administrator::~Administrator() {
    if (Responsibility != nullptr) {
        delete[] Responsibility;
        Responsibility = nullptr;
    }
}
