#pragma once

#include "TwoDimensionalShape.h"

// Derived class for a hexagon shape
class Hexagon : public TwoDimensionalShape
{
public:
    // Constructor with a default parameter
    Hexagon(double = 0);

    // Copy constructor
    Hexagon(const Hexagon&);

    // Function to calculate the area of the hexagon
    double Area();

    // Function to display the details of the hexagon
    void Display();
};
