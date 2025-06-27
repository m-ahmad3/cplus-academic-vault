#include "VideoPost.h"

// Constructor for VideoPost
VideoPost::VideoPost(const char* author, const char* content, const char* timestamp, int duration, const char* title)
    : Post(author, content, timestamp)
{
    // Allocate memory and copy title
    strCopy(this->Title, title);

    this->Duration = duration;

    try {
        uploader.upload(content, "video");
    }
    catch (const FileException& e) {
        cerr << "Error Uploading Video: " << e.what() << endl;
    }
}

// Destructor for VideoPost
VideoPost::~VideoPost() {
    if (Title != nullptr) {
        delete[] Title;
    }
}

// Display method for VideoPost
void VideoPost::Display() const {
    if (Author) {
        cout << "Video Post by " << Author << endl;
    }
    if (Title) {
        cout << "Title: " << Title << endl;
    }
    if (Content) {
        cout << "Content: " << Content << endl;
    }
    if (Timestamp) {
        cout << "Timestamp: " << Timestamp << endl;
    }
    cout << "Duration: " << Duration << " seconds" << endl;
    cout << "-------------------" << endl;
}