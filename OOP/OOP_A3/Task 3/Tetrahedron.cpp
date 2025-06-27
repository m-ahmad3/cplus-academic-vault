#include "Tetrahedron.h"

// Constructor with side parameter, initializing the base class
Tetrahedron::Tetrahedron(double side) : ThreeDimensionalShape(side) {}

// Copy constructor, copying the base class
Tetrahedron::Tetrahedron(const Tetrahedron& obj) : ThreeDimensionalShape(obj) {}

// Function to calculate the volume of the tetrahedron
double Tetrahedron::Volume()
{
    return (Length * Length * Length) / 8.48; // Calculate and return the volume
}

// Function to display the details of the tetrahedron
void Tetrahedron::Display()
{
    ThreeDimensionalShape::Display(); // Display the base class details
    cout << "Tetrahedron" << endl; // Print the shape type
    cout << "Side: " << Length << endl; // Print the side length
    cout << "Volume: " << Volume() << endl << endl; // Print the volume of the tetrahedron
}
