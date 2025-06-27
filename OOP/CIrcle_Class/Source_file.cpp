#include "Circle.h"

int main()
{
	int input;
	
	cout << "Enter the Radius of Circle: ";
	cin >> input;
	
	Circle c1(input);

	cout << endl;
	c1.display();

	cout << "\nArea of the Circle is: " << c1.area() << endl;
	cout << "Circumference of the Circle is: " << c1.circumference() << endl;
	cout << "Diameter of the Circle is: " << c1.diameter() << endl;

	return 0;
}