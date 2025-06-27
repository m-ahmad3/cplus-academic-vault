#pragma once
#include "Post.h"

// Derived class TextPost
class TextPost : public Post {
    char* Title;

public:
    TextPost(const char*, const char*, const char*, const char*);
    void Display() const override;
    ~TextPost();
};