#include "Cylinder.h"

// Constructor with radius and height parameters, initializing the base class
Cylinder::Cylinder(double radius, double height) : ThreeDimensionalShape(radius, 0, height) {}

// Copy constructor, copying the base class
Cylinder::Cylinder(const Cylinder& obj) : ThreeDimensionalShape(obj) {}

// Function to calculate the volume of the cylinder
double Cylinder::Volume()
{
    return 3.14 * Length * Length * Height;
}

// Function to display the details of the cylinder
void Cylinder::Display()
{
    ThreeDimensionalShape::Display(); // Display the base class details
    cout << "Cylinder" << endl; // Print the shape type
    cout << "Radius: " << Length << endl; // Print the radius
    cout << "Height: " << Height << endl; // Print the height
    cout << "Volume: " << Volume() << endl << endl; // Print the volume of the cylinder
}
