#include<iostream>
using namespace std;

class Car {
	// Private attributes
	char* name;
	char* model;
	int* noOfDoor;

public:
	// Constructors
	Car();
	Car(char*, char*, int);
	Car(const Car&);
	~Car();

	//Setters
	void setName(char*);
	void setModel(char*);
	void setDoor(int);

	//getters
	char* getName();
	char* getModel();
	int getDoor();

	// Function to display the details of Car
	void display();
};


