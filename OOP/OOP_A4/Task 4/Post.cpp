#include "Post.h"

// Constructor definition
Post::Post(const char* author, const char* content, const char* timestamp)
{
    // Allocate memory and copy author name
    strCopy(this->Author, author);

    // Allocate memory and copy content
    strCopy(this->Content, content);

    // Allocate memory and copy timestamp
    strCopy(this->Timestamp, timestamp);
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