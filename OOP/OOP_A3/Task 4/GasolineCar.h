#pragma once
#include "Car.h"

class GasolineCar : virtual public Car
{
protected:
    int EngineCC;  // Engine displacement in cubic centimeters (CC)

public:
    // Constructors
    GasolineCar(const char* = nullptr, const char* = nullptr, int = 0, double = 0, int = 0);   // Constructor with default arguments
    GasolineCar(const GasolineCar&);   // Copy constructor

    // Setter and getter methods for EngineCC
    void setEngineCC(int = 0);     // Setter for EngineCC
    int getEngine() const;         // Getter for EngineCC

    // Display method to display car information
    void Display() const;
};

