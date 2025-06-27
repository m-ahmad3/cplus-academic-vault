#include "Sphere.h"

// Constructor with radius parameter, initializing the base class
Sphere::Sphere(double radius) : ThreeDimensionalShape(radius) {}

// Copy constructor, copying the base class
Sphere::Sphere(const Sphere& obj) : ThreeDimensionalShape(obj) {}

// Function to calculate the volume of the sphere
double Sphere::Volume()
{
    return Length * Length * Length * 1.33 * 3.14; // Calculate and return the volume
}

// Function to display the details of the sphere
void Sphere::Display()
{
    ThreeDimensionalShape::Display(); // Display the base class details
    cout << "Sphere" << endl; // Print the shape type
    cout << "Radius: " << Length << endl; // Print the radius
    cout << "Volume: " << Volume() << endl << endl; // Print the volume of the sphere
}
