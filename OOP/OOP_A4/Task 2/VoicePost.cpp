#include "VoicePost.h"

// Constructor for VoicePost
VoicePost::VoicePost(const char* author, const char* content, const char* timestamp, int duration)
    : Post(author, content, timestamp), Duration(duration) {
    try {
        uploader.upload(content, "voice");
    }
    catch (const FileException& e) {
        cout << "Error Uploading Voice Recording: " << e.what() << endl;
    }
}

// Display method for VoicePost
void VoicePost::Display() const {
    if (Author) {
        cout << "Voice Post by " << Author << endl;
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
