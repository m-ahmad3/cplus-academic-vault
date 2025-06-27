#pragma once

#include "ThreeDimensionalShape.h"

// Derived class for a cone shape
class Cone : public ThreeDimensionalShape
{
public:
    // Constructor with default parameters
    Cone(double = 0, double = 0);

    // Copy constructor
    Cone(const Cone&);

    // Function to calculate the volume of the cone
    double Volume();

    // Function to display the details of the cone
    void Display();
};
