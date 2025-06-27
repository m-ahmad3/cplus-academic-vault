#include<iostream>
using namespace std;

class Circle {
	double* radius;
	const double pi;

public:

	Circle();
	Circle(double);
	~Circle();

	double area() const;
	double circumference() const;
	double diameter() const;
	void display() const;
};