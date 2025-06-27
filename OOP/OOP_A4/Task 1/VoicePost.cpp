#include "VoicePost.h"

// Constructor for VoicePost
VoicePost::VoicePost(const char* author, const char* content, const char* timestamp, int duration)
    : Post(author, content, timestamp), Duration(duration) {}

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
