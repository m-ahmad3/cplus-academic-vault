#include "Cube.h"

// Constructor with side parameter, initializing the base class
Cube::Cube(double side) : ThreeDimensionalShape(side, side, side) {}

// Copy constructor, copying the base class
Cube::Cube(const Cube& obj) : ThreeDimensionalShape(obj) {}

// Function to display the details of the cube
void Cube::Display()
{
    ThreeDimensionalShape::Display(); // Display the base class details
    cout << "Cube" << endl; // Print the shape type
    cout << "Side: " << Length << endl; // Print the side length
    cout << "Volume: " << Volume() << endl << endl; // Print the volume of the cube
}
