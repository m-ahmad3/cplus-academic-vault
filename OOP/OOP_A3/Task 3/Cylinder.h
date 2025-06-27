#pragma once

#include "ThreeDimensionalShape.h"

// Derived class for a cylinder shape
class Cylinder : public ThreeDimensionalShape
{
public:
    // Constructor with default parameters
    Cylinder(double = 0, double = 0);

    // Copy constructor
    Cylinder(const Cylinder&);

    // Function to calculate the volume of the cylinder
    double Volume();

    // Function to display the details of the cylinder
    void Display();
};
