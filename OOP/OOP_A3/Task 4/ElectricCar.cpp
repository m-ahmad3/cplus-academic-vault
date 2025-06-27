#include "ElectricCar.h"

// Constructor
ElectricCar::ElectricCar(const char* make, const char* model, int year, double price, int range) :Car(make, model, year, price) {
	this->Range = range;
}

// Copy constructor
ElectricCar::ElectricCar(const ElectricCar& obj) : Car(obj) {
	this->Range = obj.Range;
}

// Setter method for range
void ElectricCar::setRange(int range) {
	this->Range = range;
}

// Getter method for range
int ElectricCar::getRange() const {
	return Range;
}

// Display method to show car information
void ElectricCar::Display() const {
	Car::Display(); // Display basic car information
	cout << "Range(KM): " << Range << " KM" << endl; // Display range information
}
