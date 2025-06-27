#include "HelperFunctions.h"

// Function to calculate the length of a C-string
int strLength(const char* str) {
    int size = 0;
    // Loop through the string until the null terminator is encountered
    for (int a = 0; str[a] != '\0'; a++) {
        size++;
    }
    return size;
}

// Function to copy contents of one C-string to another
void strCopy(char*& str1, const char* str2) {
    // Check if the source string is not null
    if (str2 != nullptr) {
        int size = strLength(str2);
        // Allocate memory for the destination string
        str1 = new char[size + 1];
        // Copy each character from source to destination
        for (int a = 0; a < size; a++) {
            str1[a] = str2[a];
        }
        // Add null terminator at the end
        str1[size] = '\0';
    }
    else {
        str1 = nullptr; // If source string is null, set destination to null
    }
}

// Function to compare two C-strings
bool strCompare(const char* str1, const char* str2) {
    // Find the length of str2
    int size2 = strLength(str2);

    // Find the length of str1
    int size1 = strLength(str1);

    // Compare from the end of str1 to the end of str2
    int check = 0;
    for (int a = size1 - 1, b = size2 - 1; b >= 0 && a >= 0; --a, --b) {
        if (str1[a] == str2[b]) {
            check++;
        }
        else {
            break;
        }
    }

    // Return true if all characters match, otherwise false
    return check == size2;
}
