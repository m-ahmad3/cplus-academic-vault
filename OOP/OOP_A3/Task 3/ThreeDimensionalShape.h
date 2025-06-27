#pragma once

#include "Shape.h"

// Base class for three-dimensional shapes
class ThreeDimensionalShape : public Shape
{
protected:
    // No additional protected members in this class

public:
    // Constructor with default parameters
    ThreeDimensionalShape(double = 0, double = 0, double = 0);

    // Copy constructor
    ThreeDimensionalShape(const ThreeDimensionalShape&);

    // Function to display the details of the three-dimensional shape
    void Display();
};
