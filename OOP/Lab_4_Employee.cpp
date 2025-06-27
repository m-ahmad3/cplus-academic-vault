#include<iostream>
using namespace std;

class Employee {
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

Employee::Employee() {
	name = nullptr;
	hourly_pay_rate = nullptr;
	working_hours = nullptr;
	salary = nullptr;
}

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
Employee::~Employee() {
	delete[] name;
	delete[] hourly_pay_rate;
	delete[] working_hours;

	cout << "This is the Destructor of Class" << endl;
}

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

int main()
{
	char name[25] = "Muhammad Ahmad";
	
	Employee e1(name, 13, 7, 250);
	
	e1.setName(name);

	Employee e2 = e1;

	e1.display();

	//e1.AddSal();
	//e1.AddWork();
	//cout << "\nAfter Using AddSal & AddWork Functions: \n" << endl;
	//e1.display();

	return 0;
}