#include "Teacher.h"

// Constructor
Teacher::Teacher(const char* name, int empCode, const char* facultyName, const char* course) : Faculty(name, empCode, facultyName)
{
    // Check if course is not null
    if (course != nullptr) {
        // Calculate length of course string
        int size = 0;
        for (int a = 0; course[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for course string and copy content
        this->Course = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Course[a] = course[a];
        }
        this->Course[size] = '\0'; // Null-terminate string
    }
    else {
        this->Course = nullptr;
    }
}

// Copy constructor
Teacher::Teacher(const Teacher& obj)
{
    // Check if Course in obj is not null
    if (obj.Course != nullptr)
    {
        // Calculate length of Course string
        int size = 0;
        for (int a = 0; obj.Course[a] != '\0'; a++) {
            size++;
        }

        // Allocate memory for Course string and copy content
        this->Course = new char[size + 1];
        for (int a = 0; a < size; a++)
        {
            this->Course[a] = obj.Course[a];
        }
        this->Course[size] = '\0'; // Null-terminate string
    }
    else
    {
        this->Course = nullptr;
    }
}

// Display function to display teacher details
void Teacher::Display()
{
    cout << "Teacher: " << endl;
    Faculty::Display(); // Call base class's Display function
}

// Destructor to properly deallocate memory
Teacher::~Teacher()
{
    if (Course != nullptr) {
        delete[] Course;
        Course = nullptr;
    }
}
