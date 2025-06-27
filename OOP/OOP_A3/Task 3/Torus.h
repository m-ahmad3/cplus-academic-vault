#pragma once

#include "ThreeDimensionalShape.h"

// Derived class for a torus shape
class Torus : public ThreeDimensionalShape
{
public:
    // Constructor with a default parameter
    Torus(double = 0);

    // Copy constructor
    Torus(const Torus&);

    // Function to calculate the volume of the torus
    double Volume();

    // Function to display the details of the torus
    void Display();
};
