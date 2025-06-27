#include "Post.h"

// Constructor definition
Post::Post(const char* author, const char* content, const char* timestamp)
{
    // Allocate memory and copy author name
    if (author != nullptr) {
        int size = 0;
        for (int a = 0; author[a] != '\0'; a++) {
            size++;
        }
        this->Author = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Author[a] = author[a];
        }
        this->Author[size] = '\0';
    }
    else {
        this->Author = nullptr;
    }

    // Allocate memory and copy content
    if (content != nullptr) {
        int size = 0;
        for (int a = 0; content[a] != '\0'; a++) {
            size++;
        }
        this->Content = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Content[a] = content[a];
        }
        this->Content[size] = '\0';
    }
    else {
        this->Content = nullptr;
    }

    // Allocate memory and copy timestamp
    if (timestamp != nullptr) {
        int size = 0;
        for (int a = 0; timestamp[a] != '\0'; a++) {
            size++;
        }
        this->Timestamp = new char[size + 1];
        for (int a = 0; a < size; a++) {
            this->Timestamp[a] = timestamp[a];
        }
        this->Timestamp[size] = '\0';
    }
    else {
        this->Timestamp = nullptr;
    }
}

// Destructor definition
Post::~Post()
{
    if (Author != nullptr) {
        delete[] Author;
    }

    if (Content != nullptr) {
        delete[] Content;
    }

    if (Timestamp != nullptr) {
        delete[] Timestamp;
    }
}