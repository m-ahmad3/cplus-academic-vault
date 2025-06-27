#include "String.h"

// Default constructor
String::String() {
    string = nullptr; // Initialize the string pointer to nullptr
}

// Destructor
String::~String() {
    delete[] string; // Release dynamically allocated memory
    string = nullptr; // Reset pointer to nullptr
}

// Copy constructor
String::String(const String& str) {
    // Check if str is not nullptr
    if (str.string != nullptr) {
        int size = 0;
        // Calculate the length of the string
        for (int a = 0; str.string[a] != '\0'; a++) {
            size++;
        }
        // Allocate memory and copy the content
        string = new char[size + 1];
        for (int a = 0; a < size; a++) {
            string[a] = str.string[a];
        }
        string[size] = '\0';
    }
    else {
        string = nullptr;
    }
}

// Overloaded constructor for substring
String::String(const String& str, int pos, int len) {
    int size = 0;
    for (int a = 0; str.string[a] != '\0'; a++) {
        size++;
    }
    // Allocate memory and copy the substring
    string = new char[len + 1];
    for (int a = 0; a < len; a++) {
        string[a] = str.string[pos];
        pos++;
    }
    string[len] = '\0';
}

// Overloaded constructor for substring c-string
String::String(const char* s) {
    int size = 0;
    for (int a = 0; s[a] != '\0'; a++) {
        size++;
    }
    // Allocate memory and copy the c-string
    string = new char[size + 1];
    for (int a = 0; a < size; a++) {
        string[a] = s[a];
    }
    string[size] = '\0';
}

// Overloaded constructor from the sequence
String::String(const char* s, int n) {
    int size = 0;
    for (int a = 0; s[a] != '\0'; a++) {
        size++;
    }
    // Adjust n if it exceeds the size
    if (n > size) {
        n = size;
    }
    // Allocate memory and copy the sequence
    string = new char[n + 1];
    for (int a = 0; a < n; a++) {
        string[a] = s[a];
    }
    string[n] = '\0';
}

// Overloaded constructor for fill
String::String(int n, char c) {
    // Allocate memory and fill with character c
    string = new char[n + 1];
    for (int a = 0; a < n; a++) {
        string[a] = c;
    }
    string[n] = '\0';
}

// Return length of the string
int String::length() {
    int size = 0;
    // Calculate the length of the string
    if (string != nullptr) {
        for (int a = 0; string[a] != '\0'; a++) {
            size++;
        }
    }
    return size;
}

// Get a character in the string
char String::at(int i) {
    // Check if index i is within bounds
    if (i < length()) {
        return string[i];
    }
    return '\0'; // Return null character if out of bounds
}

// Sub-string
String String::substr(int pos, int len) const {
    // Construct a new String object with substring
    String temp(*this, pos, len);
    return temp;
}

// Operator <<
ostream& operator<< (ostream& os, const String& str) {
    // Output the string if not nullptr
    if (str.string != nullptr) {
        os << str.string;
    }
    return os;
}