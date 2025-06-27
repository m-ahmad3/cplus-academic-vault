#pragma once
#include<iostream>
#include "FileUploader.h"
using namespace std;

// Base class Post
class Post
{
protected:
    char* Content;
    char* Author;
    char* Timestamp;

public:
    // Constructor
    Post(const char*, const char*, const char*);
    // Pure virtual function for polymorphism
    virtual void Display() const = 0;
    // Destructor
    virtual ~Post();
};

