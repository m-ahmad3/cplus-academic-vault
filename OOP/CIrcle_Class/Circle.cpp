#include "Circle.h"

Circle::Circle() :pi(22.0 / 7)
{
	radius = nullptr;
}

Circle::Circle(double x) : pi(22.0 / 7)
{
	radius = new double;
	*radius = x;
}

double Circle::area() const
{
	return pi * (*radius)* (*radius);
}

double Circle::circumference() const
{
	return 2 * pi* (*radius);
}

double Circle::diameter() const
{
	return 2 * (*radius);
}

void Circle::display() const
{
	if (radius != nullptr) {
		cout << "Radius of the Circle: " << *radius << endl;
	}
	cout << "Value of Pi: " << pi << endl;
}

Circle::~Circle() {
	delete[] radius;
}