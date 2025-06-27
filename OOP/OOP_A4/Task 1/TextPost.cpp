#include "TextPost.h"

// Constructor for TextPost
TextPost::TextPost(const char* author, const char* content, const char* timestamp, const char* title)
    : Post(author, content, timestamp) {
    // Allocate memory and copy title
    if (title != nullptr) {
        int size = 0;
        for (int a = 0; title[a] != '\0'; a++) {
            size++;
        }
        this->Title = new char[size + 1];
        for (int a = 0; a <= size; ++a) {
            this->Title[a] = title[a];
        }
        this->Title[size] = '\0';
    }
    else {
        this->Title = nullptr;
    }
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

// Destructor for TextPost
TextPost::~TextPost() {
    if (Title != nullptr) {
        delete[] Title;
    }
}