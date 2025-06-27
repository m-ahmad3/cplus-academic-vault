#include "PicturePost.h"

// Constructor for PicturePost
PicturePost::PicturePost(const char* author, const char* content, const char* timestamp, const char* caption)
    : Post(author, content, timestamp) {
    // Allocate memory and copy caption
    if (caption != nullptr) {
        strCopy(this->Caption, caption);
    }
    else {
        this->Caption = nullptr;
    }

    try {
        uploader.upload(content, "picture");
    }
    catch (const FileException& e) {
        cerr << "Error Uploading Picture: " << e.what() << endl;
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