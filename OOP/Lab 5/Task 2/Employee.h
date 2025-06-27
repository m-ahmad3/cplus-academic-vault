#include<iostream>
using namespace std;

class Employee {
	// Private Attributes
	char* name;
	float* hourly_pay_rate;
	int* working_hours;
	double* salary;

public:
	// Constructors & Destructors
	Employee();
	Employee(char*, float, int, double);
	Employee(const Employee&);
	~Employee();

	// Setters
	void setName(char*);
	void setHourly_pay(float);
	void setWorking_hours(int);
	void setSalary(double);

	// Getters
	char* getName();
	float getHourly_pay();
	int getWorking_hours();
	double getSalary();

	// Display Function
	void display();

	// Function to add the 10 dollars if the salary is less than 500
	void AddSal();

	// Function to add 5 dollars if the hours are more than 6
	void AddWork();

};