#pragma once

#include "ThreeDimensionalShape.h"

// Derived class for a cube shape
class Cube : public ThreeDimensionalShape
{
public:
    // Constructor with a default parameter
    Cube(double = 0);

    // Copy constructor
    Cube(const Cube&);

    // Function to display the details of the cube
    void Display();
};
