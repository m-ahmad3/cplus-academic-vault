#pragma once

#include "TwoDimensionalShape.h"

// Derived class for a square shape
class Square : public TwoDimensionalShape
{
public:
    // Constructor with a default parameter
    Square(double = 0);

    // Copy constructor
    Square(const Square&);

    // Function to display the details of the square
    void Display();
};
