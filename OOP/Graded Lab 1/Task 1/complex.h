#include<iostream>
using namespace std;

class complex
{
private:
	// Attributes
	int real;
	int imag;
public:
	// Constructors
	complex();
	complex(int);
	complex(int, int);
	
	// Overloading Operators
	complex& operator +(const complex&);
	complex& operator -(const complex&);
	complex& operator *(const complex&);
	complex& operator /(const complex&);
	
	// Function to display
	void display();
};
