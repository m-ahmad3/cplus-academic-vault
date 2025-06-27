#include "Circle.h"

// Constructor with radius parameter
Circle::Circle(double radius)
{
	this->Radius = radius; // Set the radius
}

// Copy constructor
Circle::Circle(const Circle& obj)
{
	this->Radius = obj.Radius; // Copy the radius
}

// Function to calculate the area of the circle
double Circle::Area()
{
	return 3.141 * Radius * Radius; // Calculate and return the area
}

// Function to display the details of the circle
void Circle::Display()
{
	TwoDimensionalShape::Display(); 
	cout << "Circle" << endl; // Print the shape type
	cout << "Radius: " << Radius << endl; // Print the radius
	cout << "Area: " << Area() << endl << endl; // Print the area of the circle
}
