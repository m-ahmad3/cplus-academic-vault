#include "Torus.h"

// Constructor with radius parameter, initializing the base class
Torus::Torus(double radius) : ThreeDimensionalShape(radius) {}

// Copy constructor, copying the base class
Torus::Torus(const Torus& obj) : ThreeDimensionalShape(obj) {}

// Function to calculate the volume of the torus
double Torus::Volume()
{
    return (3.14 * Length * Length) * (2.0 * 3.14 * Length); // Calculate and return the volume
}

// Function to display the details of the torus
void Torus::Display()
{
    ThreeDimensionalShape::Display(); // Display the base class details
    cout << "Torus" << endl; // Print the shape type
    cout << "Radius: " << Length << endl; // Print the radius
    cout << "Volume: " << Volume() << endl << endl; // Print the volume of the torus
}
