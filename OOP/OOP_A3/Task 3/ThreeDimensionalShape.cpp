#include "ThreeDimensionalShape.h"

// Constructor with length, width, and height parameters, initializing the base class
ThreeDimensionalShape::ThreeDimensionalShape(double length, double width, double height) : Shape(length, width, height) {}

// Copy constructor, copying the base class
ThreeDimensionalShape::ThreeDimensionalShape(const ThreeDimensionalShape& obj) : Shape(obj) {}

// Function to display a generic message for three-dimensional shapes
void ThreeDimensionalShape::Display() {
	cout << "Three Dimensional Shape: "; // Print the message
}
