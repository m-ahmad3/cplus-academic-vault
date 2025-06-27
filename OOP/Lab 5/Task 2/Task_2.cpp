#include "Employee.h"

int main()
{
	
	char name[25] = "Muhammad Ahmad";

	// Making instance of Class Employee by giving input to constructor
	Employee e1(name, 13, 7, 250);

	// Calling copy consructor
	Employee e2 = e1;
	
	// Displaying the details of Employee
	e1.display();

	// Function to add the 10 dollars if the salary is less than 500
	e1.AddSal();

	// Function to add 5 dollars if the hours are more than 6
	e1.AddWork();

	// Displaying the details after changes
	cout << "\nAfter Using AddSal & AddWork Functions: \n" << endl;
	e1.display();
	cout << endl;

	return 0;
}