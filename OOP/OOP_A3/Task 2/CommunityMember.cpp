#include "CommunityMember.h"

// Constructor implementation
CommunityMember::CommunityMember(const char* name) {
    if (name != nullptr) {
        int size = 0;
        // Calculate the size of the input name
        for (int a = 0; name[a] != '\0'; a++) {
            size++;
        }
        // Allocate memory for the name
        this->Name = new char[size + 1];
        // Copy the name to the allocated memory
        for (int a = 0; a < size; a++) {
            this->Name[a] = name[a];
        }
        this->Name[size] = '\0'; // Null-terminate the string
    }
    else {
        this->Name = nullptr; // If no name provided, set to nullptr
    }
}

// Copy constructor implementation
CommunityMember::CommunityMember(const CommunityMember& obj) {
    if (obj.Name != nullptr) {
        int size = 0;
        // Calculate the size of the input name
        for (int a = 0; obj.Name[a] != '\0'; a++) {
            size++;
        }
        // Allocate memory for the name
        this->Name = new char[size + 1];
        // Copy the name to the allocated memory
        for (int a = 0; a < size; a++) {
            this->Name[a] = obj.Name[a];
        }
        this->Name[size] = '\0'; // Null-terminate the string
    }
    else {
        this->Name = nullptr; // If no name provided, set to nullptr
    }
}

// Function to display the name
void CommunityMember::Display() {
    if (Name != nullptr) {
        cout << "Name: " << Name << endl;
    }
}

// Destructor implementation
CommunityMember::~CommunityMember() {
    if (Name != nullptr) {
        delete[] Name; // Release allocated memory
        Name = nullptr; // Avoid dangling pointer
    }
}
