#include "TwoDimensionalShape.h"

// Constructor with length and width parameters, initializing the base class
TwoDimensionalShape::TwoDimensionalShape(double length, double width) : Shape(length, width) {}

// Copy constructor, copying the base class
TwoDimensionalShape::TwoDimensionalShape(const TwoDimensionalShape& obj) : Shape(obj) {}

// Function to display a generic message for two-dimensional shapes
void TwoDimensionalShape::Display() {
	cout << "Two Dimensional Shape: "; // Print the message
}
