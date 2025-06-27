#include "Cone.h"

// Constructor with radius and height parameters, initializing the base class
Cone::Cone(double radius, double height) : ThreeDimensionalShape(radius, 0, height) {}

// Copy constructor, copying the base class
Cone::Cone(const Cone& obj) : ThreeDimensionalShape(obj) {}

// Function to calculate the volume of the cone
double Cone::Volume()
{
    return (3.14 * Length * Length * Height) / 3.0;
}

// Function to display the details of the cone
void Cone::Display()
{
    ThreeDimensionalShape::Display(); // Display the base class details
    cout << "Cone" << endl; // Print the shape type
    cout << "Radius: " << Length << endl; // Print the radius
    cout << "Height: " << Height << endl; // Print the height
    cout << "Volume: " << Volume() << endl << endl; // Print the volume of the cone
}
