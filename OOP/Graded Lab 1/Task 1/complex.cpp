#include "complex.h"

// Default Constructor
complex::complex() {
	real = 0;
	imag = 0;
}

// Single Parametrized Constructor
complex::complex(int r)
{
	real = r;
	imag = 0;
}

// Parametrized Constructor
complex::complex(int r, int i)
{
	real = r;
	imag = i;
}

// Overloading of + operator
complex& complex::operator +(const complex& obj) {
	complex temp;
	temp.real = real + obj.real;
	temp.imag = imag + obj.imag;

	return temp;
}

// Overloading of - operator
complex& complex::operator -(const complex& obj) {
	complex temp;
	temp.real = real - obj.real;
	temp.imag = imag - obj.imag;

	return temp;
}

// Overloading of * operator
complex& complex::operator *(const complex& obj) {
	complex temp;
	temp.real = this->real * obj.real;
	temp.imag = imag * obj.imag;

	return temp;
}

// Overloading of / operator
complex& complex::operator /(const complex& obj) {
	complex temp;
	if(obj.real==0){
		temp.real = 0;
	}
	else {
		temp.real = real / obj.real;
	}
	if (obj.imag == 0) {
		temp.imag = 0;
	}
	else {
		temp.imag = imag / obj.imag;
	}

	return temp;
}

// Function for displaying the Complex number
void complex::display() {
	cout << "Complex Number: " << real << " + " << imag << "i" << endl;
}