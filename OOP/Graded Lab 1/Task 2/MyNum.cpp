#include "MyNum.h"

// Default Constructor
MyNum::MyNum() {
	num = 0;
}

// Initialized Constructor
MyNum::MyNum(int x) {
	num = x;
}

// Setter
void MyNum::setNum(int x) {
	num = x;
}

// Getter
int MyNum::getNum() {
	return num;
}

// Convert the num to positive
void MyNum::toPositive() {
	if (num < 0) {
		num *= -1;
	}
}

// Convert the num to negative
void MyNum::toNegative() {
	num *= -1;
}