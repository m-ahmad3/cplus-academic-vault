#include "HybridCar.h"

// Constructor
HybridCar::HybridCar(const char* make, const char* model, int year, double price, int engineCC, int range)
	: Car(make, model, year, price), GasolineCar(make, model, year, price, engineCC), ElectricCar(make, model, year, price, range) {}

// Copy constructor
HybridCar::HybridCar(const HybridCar& obj) : GasolineCar(obj), ElectricCar(obj) {}

// Display method to show car information
void HybridCar::Display() const {
	Car::Display(); // Display basic car information
	cout << "Engine CC's: " << GasolineCar::EngineCC << endl; // Display engine CC information
	cout << "Range(KM): " << ElectricCar::Range << endl << endl; // Display electric range information
}
