#include "Student.h"

// Constructor
Student::Student(const char* name, const char* degreeName, const char* reg) :CommunityMember(name) {
    // Check if reg is not null
    if (reg != nullptr) {
        // Calculate length of reg string
        int size = 0;
        for (int a = 0; reg[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for reg string and copy content
        this->RegistrationNo = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->RegistrationNo[a] = reg[a];
        }
        this->RegistrationNo[size] = '\0'; // Null-terminate string
    }
    else {
        this->RegistrationNo = nullptr;
    }

    // Check if degreeName is not null
    if (degreeName != nullptr) {
        // Calculate length of degreeName string
        int size = 0;
        for (int a = 0; degreeName[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for degreeName string and copy content
        this->DegreeName = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->DegreeName[a] = degreeName[a];
        }
        this->DegreeName[size] = '\0'; // Null-terminate string
    }
    else {
        this->DegreeName = nullptr;
    }
}

// Copy constructor
Student::Student(const Student& obj) :CommunityMember(obj) {
    // Check if RegistrationNo in obj is not null
    if (obj.RegistrationNo != nullptr) {
        // Calculate length of RegistrationNo string
        int size = 0;
        for (int a = 0; obj.RegistrationNo[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for RegistrationNo string and copy content
        this->RegistrationNo = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->RegistrationNo[a] = obj.RegistrationNo[a];
        }
        this->RegistrationNo[size] = '\0'; // Null-terminate string
    }
    else {
        this->RegistrationNo = nullptr;
    }

    // Check if DegreeName in obj is not null
    if (obj.DegreeName != nullptr) {
        // Calculate length of DegreeName string
        int size = 0;
        for (int a = 0; obj.DegreeName[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for DegreeName string and copy content
        this->DegreeName = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->DegreeName[a] = obj.DegreeName[a];
        }
        this->DegreeName[size] = '\0'; // Null-terminate string
    }
    else {
        this->DegreeName = nullptr;
    }
}

// Display function to display student details
void Student::Display() {
    cout << "Student Information: " << endl;
    CommunityMember::Display(); // Call base class's Display function
    // Display degree name if not null
    if (DegreeName != nullptr) {
        cout << "Degree Name: " << DegreeName << endl;
    }
    // Display registration number if not null
    if (RegistrationNo != nullptr) {
        cout << "Registration Number: " << RegistrationNo << endl;
    }
}

// Destructor to properly deallocate memory
Student::~Student() {
    if (RegistrationNo != nullptr) {
        delete[] RegistrationNo;
        RegistrationNo = nullptr;
    }
    if (DegreeName != nullptr) {
        delete[] DegreeName;
        DegreeName = nullptr;
    }
}
