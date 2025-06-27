#include "Pentagon.h"

// Constructor with side parameter, initializing the base class
Pentagon::Pentagon(double side) : TwoDimensionalShape(side, 0) {}

// Copy constructor, copying the base class
Pentagon::Pentagon(const Pentagon& obj) : TwoDimensionalShape(obj) {}

// Function to calculate the area of the pentagon
double Pentagon::Area()
{
    return (6.881909602 / 4.0) * Length * Length;
}

// Function to display the details of the pentagon
void Pentagon::Display()
{
    TwoDimensionalShape::Display(); // Display the base class details
    cout << "Pentagon" << endl; // Print the shape type
    cout << "Side: " << Length << endl; // Print the side length
    cout << "Area: " << Area() << endl << endl; // Print the a
}