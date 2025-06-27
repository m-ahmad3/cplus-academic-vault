#pragma once

#include "Shape.h"

// Base class for two-dimensional shapes
class TwoDimensionalShape : public Shape
{
protected:
    // No additional protected members in this class

public:
    // Constructor with default parameters
    TwoDimensionalShape(double = 0, double = 0);

    // Copy constructor
    TwoDimensionalShape(const TwoDimensionalShape&);

    // Function to display the details of the two-dimensional shape
    void Display();
};
