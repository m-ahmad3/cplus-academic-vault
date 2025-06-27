#pragma once

#include <iostream>
using namespace std;

// Base class for geometric shapes
class Shape
{
protected:
    double Length;  // Length of the shape
    double Width;   // Width of the shape
    double Height;  // Height of the shape

public:
    // Constructor with default parameters
    Shape(double = 0, double = 0, double = 0);

    // Copy constructor
    Shape(const Shape&);

    // Function to calculate the volume of the shape
    double Volume();

    // Function to calculate the area of the shape
    double Area();
};
