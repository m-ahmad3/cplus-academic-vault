#include "Employee.h"

// Default Consructor
Employee::Employee() {
	name = nullptr;
	hourly_pay_rate = nullptr;
	working_hours = nullptr;
	salary = nullptr;
}

// Parametrized Constructor
Employee::Employee(char* n, float pay, int hours, double sal) {

	int size = 0;
	for (int a = 0; n[a] != '\0'; a++) {
		size++;
	}
	name = new char[size + 1];
	for (int a = 0; a < size; a++) {
		name[a] = n[a];
	}
	name[size] = '\0';

	hourly_pay_rate = new float;
	*hourly_pay_rate = pay;

	working_hours = new int;
	*working_hours = hours;

	salary = new double;
	*salary = sal;
}

// Copy Constructor
Employee::Employee(const Employee& obj) {

	int size = 0;
	for (int a = 0; obj.name[a] != '\0'; a++) {
		size++;
	}
	name = new char[size + 1];
	for (int a = 0; a < size; a++) {
		name[a] = obj.name[a];
	}
	name[size] = '\0';

	hourly_pay_rate = new float;
	*hourly_pay_rate = *obj.hourly_pay_rate;

	working_hours = new int;
	*working_hours = *obj.working_hours;

	salary = new double;
	*salary = *obj.salary;
}

// Destructor
Employee::~Employee() {
	delete[] name;
	delete[] hourly_pay_rate;
	delete[] working_hours;

	cout << "This is the Destructor of Class" << endl;
}

// Setters Methods or Functions
void Employee::setName(char* n) {
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

void Employee::setHourly_pay(float x) {
	if (hourly_pay_rate == nullptr) {
		hourly_pay_rate = new float;
	}

	*hourly_pay_rate = x;
}

void Employee::setWorking_hours(int x) {
	if (working_hours == nullptr) {
		working_hours = new int;
	}

	*working_hours = x;
}

void Employee::setSalary(double x) {
	if (salary == nullptr) {
		salary = new double;
	}
	*salary = x;
}

// Getters Methods or Functions
char* Employee::getName() {
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

float Employee::getHourly_pay() {
	return *hourly_pay_rate;
}

int Employee::getWorking_hours() {
	return *working_hours;
}

double Employee::getSalary() {
	return *salary;
}


// Method to display the details of Employee
void Employee::display() {
	if (name != nullptr) {
		cout << "Name of Employee: " << name << endl;
	}
	if (hourly_pay_rate != nullptr) {
		cout << "Hourly Pay Rate of Employee: " << *hourly_pay_rate << endl;
	}
	if (working_hours != nullptr) {
		cout << "Working Hours of Employee: " << *working_hours << endl;
	}
	if (salary != nullptr) {
		cout << "Salary of Employee: " << *salary << endl;
	}
}

// Function to add the 10 dollars if the salary is less than 500
void Employee::AddSal() {
	if (*salary < 500) {
		*salary += 10;
	}
}

// Function to add 5 dollars if the hours are more than 6
void Employee::AddWork() {
	if (*working_hours > 6) {
		*salary += 5;
	}
}