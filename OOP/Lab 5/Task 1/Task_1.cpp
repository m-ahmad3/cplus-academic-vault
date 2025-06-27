#include "Car.h"

int main() 
{
	char carName[25];
	char modelName[25];
	int door;

	// Taking input from user
	cout << "Enter Car Name: ";
	cin >> carName;

	cout << "Enter Car Model Name: ";
	cin >> modelName;

	cout << "Enter No. of Doors: ";
	cin >> door;

	// Making first object with parametrized constructor
	Car c1(carName, modelName, door);
	
	// Printing the details
	c1.display();

	// Calling copy constructor
	Car c2 = c1;

	// Getting input for class 2
	cout << "\nClass 2:-" << endl;
	cout << "Enter any other Car Name: ";
	cin >> carName;

	cout << "Enter any other Car Model Name: ";
	cin >> modelName;

	cout << "Enter No. of Doors: ";
	cin >> door;

	// Setting name, model and doors by setters methods
	c2.setName(carName);
	c2.setModel(modelName);
	c2.setDoor(door);

	// Printing the detail of the second object of Class
	c2.display();
	cout << endl;

	return 0;
}