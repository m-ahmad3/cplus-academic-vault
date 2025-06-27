#include "Triangle.h"

// Constructor with base and height parameters, initializing the base class
Triangle::Triangle(double base, double height) : TwoDimensionalShape(height, base) {}

// Copy constructor, copying the base class
Triangle::Triangle(const Triangle& obj) : TwoDimensionalShape(obj) {}

// Function to calculate the area of the triangle
double Triangle::Area()
{
    return Length * Width * 0.5; // Calculate and return the area
}

// Function to display the details of the triangle
void Triangle::Display()
{
    TwoDimensionalShape::Display(); // Display the base class details
    cout << "Triangle" << endl; // Print the shape type
    cout << "Height: " << Length << endl; // Print the height
    cout << "Base: " << Width << endl; // Print the base
    cout << "Area: " << Area() << endl << endl; // Print the area of the triangle
}
