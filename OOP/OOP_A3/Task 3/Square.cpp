#include "Square.h"

// Constructor with side parameter, initializing the base class
Square::Square(double side) : TwoDimensionalShape(side, side) {}

// Copy constructor, copying the base class
Square::Square(const Square& obj) : TwoDimensionalShape(obj) {}

// Function to display the details of the square
void Square::Display()
{
    TwoDimensionalShape::Display(); // Display the base class details
    cout << "Square" << endl; // Print the shape type
    cout << "Side: " << Length << endl; // Print the side length
    cout << "Area: " << Area() << endl << endl; // Print the area of the square
}
