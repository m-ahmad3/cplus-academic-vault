#include "GasolineCar.h"

// Constructor
GasolineCar::GasolineCar(const char* make, const char* model, int year, double price, int engineCC) :Car(make, model, year, price) {
	this->EngineCC = engineCC;
}

// Copy constructor
GasolineCar::GasolineCar(const GasolineCar& obj) : Car(obj) {
	this->EngineCC = obj.EngineCC;
}

// Setter method for engine CC
void GasolineCar::setEngineCC(int engineCC) {
	this->EngineCC = engineCC;
}

// Getter method for engine CC
int GasolineCar::getEngine() const {
	return EngineCC;
}

// Display method to show car information
void GasolineCar::Display() const {
	Car::Display(); // Display basic car information
	cout << "Engine CC's: " << EngineCC << endl; // Display engine CC information
}
