#pragma once

#include "TwoDimensionalShape.h"

// Derived class for a pentagon shape
class Pentagon : public TwoDimensionalShape
{
public:
    // Constructor with a default parameter
    Pentagon(double = 0);

    // Copy constructor
    Pentagon(const Pentagon&);

    // Function to calculate the area of the pentagon
    double Area();

    // Function to display the details of the pentagon
    void Display();
};
