#pragma once
#include "Post.h"

// Derived class VideoPost
class VideoPost : public Post {
    int Duration; // Duration in seconds
    char* Title;

public:
    VideoPost(const char*, const char*, const char*, int, const char*);
    ~VideoPost();
    void Display() const override;
};
