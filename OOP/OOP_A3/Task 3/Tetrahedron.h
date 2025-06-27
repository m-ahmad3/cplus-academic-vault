#pragma once

#include "ThreeDimensionalShape.h"

// Derived class for a tetrahedron shape
class Tetrahedron : public ThreeDimensionalShape
{
public:
    // Constructor with a default parameter
    Tetrahedron(double = 0);

    // Copy constructor
    Tetrahedron(const Tetrahedron&);

    // Function to calculate the volume of the tetrahedron
    double Volume();

    // Function to display the details of the tetrahedron
    void Display();
};
