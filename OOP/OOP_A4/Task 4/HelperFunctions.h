#pragma once
#include<iostream>
using namespace std;

// Function to calculate the length of a C-string
int strLength(const char*);

// Function to copy contents of one C-string to another
void strCopy(char*&, const char*);

// Function to compare two C-strings
bool strCompare(const char*, const char*);