#include "complex.h"

int main()
{
	// Put any number in these objects and you will get the right answers

	complex c1(10, 7);		// for complex numbers, such as 5+7i
	complex c2(5); 		// for numbers without imaginary part as 5 + 0i
	complex c3(2, 3);
	complex c4;
	complex c5(1, 1);
	complex c6;

	c3 = c1 + c2;	//c3=c1.operator+(c2);
	cout << "c3:" << endl;
	c3.display();

	c4 = c1 - c2;	//c4=c1.operator-(c2);
	cout << "\nc4:" << endl;
	c4.display();

	c5 = c3 * c4;	//c5=c3.operator*(c4);
	cout << "\nc5:" << endl;
	c5.display();

	c6 = c4 / c5;	//c6=c4.operator/(c5);
	cout << "\nc6:" << endl;
	c6.display();

	return 0;
}
