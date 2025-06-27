#include "Employee.h"

// Constructor
Employee::Employee(const char* name, int employeeCode) :CommunityMember(name) {
	this->EmployeeCode = employeeCode;
}

// Copy constructor
Employee::Employee(const Employee& obj) {
	this->EmployeeCode = obj.EmployeeCode;
}

// Display function to display employee details
void Employee::Display() {
	cout << "Employee Information: " << endl;
	CommunityMember::Display(); // Call base class's Display function
	cout << "Employee Code: " << EmployeeCode << endl;
}
