#pragma once
#include "Post.h"

// Derived class VoicePost
class VoicePost : public Post {
    int Duration; // Duration in seconds

public:
    VoicePost(const char*, const char*, const char*, int);
    void Display() const override;
};