#pragma once

#include "TwoDimensionalShape.h"

// Derived class for a circle shape
class Circle : public TwoDimensionalShape
{
    double Radius; // Radius of the circle

public:
    // Constructor with default parameter
    Circle(double = 0);

    // Copy constructor
    Circle(const Circle&);

    // Function to calculate the area of the circle
    double Area();

    // Function to display the details of the circle
    void Display();
};
