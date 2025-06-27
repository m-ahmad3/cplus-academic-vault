#pragma once
#include "Post.h"

// Derived class PicturePost
class PicturePost : public Post {
    char* Caption;

public:
    PicturePost(const char*, const char*, const char*, const char*);
    void Display() const override;
    ~PicturePost();
};