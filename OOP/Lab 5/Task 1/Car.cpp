#include "Car.h"

// Default constructor
Car::Car() {
	name = nullptr;
	model = nullptr;
	noOfDoor = nullptr;
}

// Parametrized Constructor
Car::Car(char* n, char* m, int d) {
	
	int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}
		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = n[a];
		}
		name[size] = '\0';
	
		size = 0;
		for (int a = 0; m[a] != '\0'; a++) {
			size++;
		}
		model = new char[size + 1];
		for (int a = 0; a < size; a++) {
			model[a] = m[a];
		}
		model[size] = '\0';
	
	
		noOfDoor = new int;
		*noOfDoor = d;
}

// Copy Constructor
Car::Car(const Car& obj) {
	
		int size = 0;
		for (int a = 0; obj.name[a] != '\0'; a++) {
			size++;
		}
		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = obj.name[a];
		}
		name[size] = '\0';


		size = 0;
		for (int a = 0; obj.model[a] != '\0'; a++) {
			size++;
		}
		model = new char[size + 1];
		for (int a = 0; a < size; a++) {
			model[a] = obj.model[a];
		}
		model[size] = '\0';
	
	
	noOfDoor = new int;
	*noOfDoor = *(obj.noOfDoor);
}

// Destructor
Car::~Car() {
	cout << "This is the Destructor" << endl;
	delete[] name;
	delete[] model;
	delete noOfDoor;
}

//Setters
void Car::setName(char* n) {
	if (n != nullptr) {
		int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}
		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = n[a];
		}
		name[size] = '\0';
	}
}

void Car::setModel(char* m) {
	if (m != nullptr) {
		int size = 0;
		for (int a = 0; m[a] != '\0'; a++) {
			size++;
		}
		model = new char[size + 1];
		for (int a = 0; a < size; a++) {
			model[a] = m[a];
		}
		model[size] = '\0';
	}
}

void Car::setDoor(int x) {
	if (noOfDoor == nullptr) {
		noOfDoor = new int;
	}
	*noOfDoor = x;
}

//getters
char* Car::getName() {
	if (name != nullptr) {
		int size = 0;
		for (int a = 0; name[a] != '\0'; a++) {
			size++;
		}
		char* n = new char[size + 1];
		for (int a = 0; a < size; a++) {
			n[a] = name[a];
		}
		n[size] = '\0';

		return n;
	}

	return nullptr;
}
char* Car::getModel() {
	if (model != nullptr) {
		int size = 0;
		for (int a = 0; model[a] != '\0'; a++) {
			size++;
		}
		char* m = new char[size + 1];
		for (int a = 0; a < size; a++) {
			m[a] =  model[a];
		}
		m[size] = '\0';

		return m;
	}

	return nullptr;
}

int Car::getDoor() {
	int x = *noOfDoor;
	
	return x;
}

// Function to Display
void Car::display() {
	cout << "\nCar Details: " << endl;
	cout << "Name of Car: " << name << endl;
	cout << "Model of Car: " << model << endl;
	cout << "No. of Doors in Car: " << *noOfDoor << endl;
}