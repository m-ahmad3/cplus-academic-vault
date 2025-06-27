#include<iostream>
using namespace std;

class MyNum
{
	int num;  // Initializing an int attribute
public:
	// Constructors
	MyNum();
	MyNum(int);

	// Setter
	void setNum(int);

	// Getter
	int getNum();

	// Methods to convert the value in either +ve or -ve
	void toPositive();
	void toNegative();
};

