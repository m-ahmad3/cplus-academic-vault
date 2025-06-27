#include "TextPost.h"

// Constructor for TextPost
TextPost::TextPost(const char* author, const char* content, const char* timestamp, const char* title)
    : Post(author, content, timestamp) {
    // Allocate memory and copy title
    strCopy(this->Title, title);
}

// Display method for TextPost
void TextPost::Display() const {
    if (Author != nullptr) {
        cout << "Text Post by " << Author << endl;
    }
    if (Title != nullptr) {
        cout << "Title: " << Title << endl;
    }
    if (Content != nullptr) {
        cout << "Content: " << Content << endl;
    }
    if (Timestamp != nullptr) {
        cout << "Timestamp: " << Timestamp << endl;
    }
    cout << "-------------------" << endl;
}

char* TextPost::getContent() const {
    char* content;
    strCopy(content, this->Content);

    return content;
}

// Destructor for TextPost
TextPost::~TextPost() {
    if (Title != nullptr) {
        delete[] Title;
    }
}