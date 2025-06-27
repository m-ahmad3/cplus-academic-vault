#pragma once

#include "ThreeDimensionalShape.h"

// Derived class for a sphere shape
class Sphere : public ThreeDimensionalShape
{
public:
    // Constructor with a default parameter
    Sphere(double = 0);

    // Copy constructor
    Sphere(const Sphere&);

    // Function to calculate the volume of the sphere
    double Volume();

    // Function to display the details of the sphere
    void Display();
};
