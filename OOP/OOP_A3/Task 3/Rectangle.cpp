#include "Rectangle.h"

// Constructor with length and width parameters, initializing the base class
Rectangle::Rectangle(double length, double width) : TwoDimensionalShape(length, width) {}

// Copy constructor, copying the base class
Rectangle::Rectangle(const Rectangle& obj) : TwoDimensionalShape(obj) {}

// Function to display the details of the rectangle
void Rectangle::Display()
{
    TwoDimensionalShape::Display(); // Display the base class details
    cout << "Rectangle" << endl; // Print the shape type
    cout << "Length: " << Length << endl; // Print the length
    cout << "Width: " << Width << endl; // Print the width
    cout << "Area: " << Area() << endl << endl; // Print the area of the rectangle
}
