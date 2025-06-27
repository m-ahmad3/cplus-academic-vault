#pragma once

#include "TwoDimensionalShape.h"

// Derived class for a triangle shape
class Triangle : public TwoDimensionalShape
{
public:
    // Constructor with default parameters
    Triangle(double = 0, double = 0);

    // Copy constructor
    Triangle(const Triangle&);

    // Function to calculate the area of the triangle
    double Area();

    // Function to display the details of the triangle
    void Display();
};
