#pragma once
#include "GasolineCar.h"
#include "ElectricCar.h"

class HybridCar : public GasolineCar, public ElectricCar
{
public:
	// Constructors
	HybridCar(const char* = nullptr, const char* = nullptr, int = 0, double = 0, int = 0, int = 0); // Constructor with default arguments
	HybridCar(const HybridCar&); // Copy constructor

	// Display method to display hybrid car information
	void Display() const;
};

