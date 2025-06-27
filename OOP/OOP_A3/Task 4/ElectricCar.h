#pragma once
#include "Car.h"

class ElectricCar : virtual public Car
{
protected:
    int Range;  // Range of the electric car

public:
    // Constructors
    ElectricCar(const char* = nullptr, const char* = nullptr, int = 0, double = 0, int = 0);   // Constructor with default arguments
    ElectricCar(const ElectricCar&);   // Copy constructor

    // Setter and getter methods for Range
    void setRange(int = 0);     // Setter for Range
    int getRange() const;       // Getter for Range

    // Display method to display car information
    void Display() const;
};

