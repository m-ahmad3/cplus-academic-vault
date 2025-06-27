#include "PicturePost.h"

// Constructor for PicturePost
PicturePost::PicturePost(const char* author, const char* content, const char* timestamp, const char* caption)
    : Post(author, content, timestamp) {
    // Allocate memory and copy caption
    if (caption != nullptr) {
        int size = 0;
        for (int a = 0; caption[a] != '\0'; a++) {
            size++;
        }
        this->Caption = new char[size + 1];
        for (int a = 0; a <= size; ++a) {
            this->Caption[a] = caption[a];
        }
        this->Caption[size] = '\0';
    }
    else {
        this->Caption = nullptr;
    }
}

// Display method for PicturePost
void PicturePost::Display() const {
    if (Author != nullptr) {
        cout << "Picture Post by " << Author << endl;
    }
    if (Caption != nullptr) {
        cout << "Caption: " << Caption << endl;
    }
    if (Content != nullptr) {
        cout << "Content: " << Content << endl;
    }
    if (Timestamp != nullptr) {
        cout << "Timestamp: " << Timestamp << endl;
    }
    cout << "-------------------" << endl;
}

// Destructor for PicturePost
PicturePost::~PicturePost() {
    if (Caption != nullptr) {
        delete[] Caption;
    }
}