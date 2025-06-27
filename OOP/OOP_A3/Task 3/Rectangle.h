#pragma once

#include "TwoDimensionalShape.h"

// Derived class for a rectangle shape
class Rectangle : public TwoDimensionalShape
{
public:
    // Constructor with default parameters
    Rectangle(double = 0, double = 0);

    // Copy constructor
    Rectangle(const Rectangle&);

    // Function to display the details of the rectangle
    void Display();
};
