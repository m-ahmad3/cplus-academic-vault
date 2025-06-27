#include "Hexagon.h"

// Constructor with side parameter, initializing the base class
Hexagon::Hexagon(double side) : TwoDimensionalShape(side) {}

// Copy constructor, copying the base class
Hexagon::Hexagon(const Hexagon& obj) : TwoDimensionalShape(obj) {}

// Function to calculate the area of the hexagon
double Hexagon::Area()
{
    return (1.442248 / 2.0) * Length * Length;
}

// Function to display the details of the hexagon
void Hexagon::Display()
{
    TwoDimensionalShape::Display(); // Display the base class details
    cout << "Hexagon" << endl; // Print the shape type
    cout << "Side: " << Length << endl; // Print the side length
    cout << "Area: " << Area() << endl << endl; // Print the area of the hexagon
}
