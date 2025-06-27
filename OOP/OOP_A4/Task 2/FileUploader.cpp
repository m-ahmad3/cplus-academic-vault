#include "FileUploader.h"

FileException::FileException(const char* msg) {
    strCopy(this->message, msg); // Custom function to copy msg to message
}

// Override the what() function to provide error message
const char* FileException::what() const {
    return message;
}


void FileUploader::upload(const char* filePath, const char* type) {
    // Check if filePath is null
    if (filePath == nullptr) {
        throw FileException("File path is null.");
    }

    bool validFormat = false;

    // Check file format based on post type
    if (strCompare(type, "picture")) {
        // Check if file path ends with .jpg or .png
        if (strCompare(filePath, ".jpg") || strCompare(filePath, ".png")) {
            validFormat = true;
        }
    }
    else if (strCompare(type, "voice")) {
        // Check if file path ends with .mp3
        if (strCompare(filePath, ".mp3")) {
            validFormat = true;
        }
    }
    else if (strCompare(type, "video")) {
        // Check if file path ends with .mp4
        if (strCompare(filePath, ".mp4")) {
            validFormat = true;
        }
    }
    else {
        // Throw exception if type is unsupported
        throw FileException("Unsupported post type.");
    }

    // Throw exception if file format is not valid
    if (!validFormat) {
        throw FileException("Unsupported file format.");
    }

    // Try to open the file to check if it exists and can be accessed
    ifstream file(filePath);
    if (!file.is_open()) {
        throw FileException("File not found or cannot be opened.");
    }

    // If all checks pass, display success message
    cout << "File uploaded successfully: " << filePath << endl;
}
