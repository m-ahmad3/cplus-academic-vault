#include "VideoPost.h"

// Constructor for VideoPost
VideoPost::VideoPost(const char* author, const char* content, const char* timestamp, int duration, const char* title)
    : Post(author, content, timestamp)
{
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

    this->Duration = duration;
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