#pragma once
#include <iostream>
#include <fstream>
#include "HelperFunctions.h" // includes strCopy and strCompare

using namespace std;

// Custom exception class for file-related errors
class FileException : public exception {
    char* message;

public:
    // Constructor to initialize the exception message
    FileException(const char*);

    // Override the what() function to provide error message
    const char* what() const override;
};

// Class responsible for uploading files based on type and validating format
class FileUploader {
public:
    // Method to upload a file based on its path and type
    void upload(const char*, const char*);
};
