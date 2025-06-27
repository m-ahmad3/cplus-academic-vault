#pragma once
#include "Administrator.h"
#include "Teacher.h"

// AdministratorTeacher class inheriting from both Administrator and Teacher
class AdministratorTeacher : public Administrator, public Teacher
{
public:
    // Constructors
    AdministratorTeacher(const char* = nullptr, int = 0, const char* = nullptr, const char* = nullptr, const char* = nullptr);
    AdministratorTeacher(const AdministratorTeacher&);
    void Display(); // Display function for AdministratorTeacher
};
