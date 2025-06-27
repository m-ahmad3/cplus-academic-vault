#include "Shape.h"

// Constructor with length, width, and height parameters
Shape::Shape(double length, double width, double height)
{
    this->Length = length; // Set the length
    this->Width = width;   // Set the width
    this->Height = height; // Set the height
}

// Copy constructor, copying the length, width, and height from the source object
Shape::Shape(const Shape& obj)
{
    this->Length = obj.Length; // Copy the length
    this->Width = obj.Width;   // Copy the width
    this->Height = obj.Height; // Copy the height
}

// Function to calculate the volume of the shape
double Shape::Volume()
{
    return this->Length * this->Height * this->Width; // Calculate and return the volume
}

// Function to calculate the area of the shape
double Shape::Area()
{
    return this->Length * this->Width; // Calculate and return the area
}
