#include<iostream>
using namespace std;
/*
class Date {

	int day, month, year;
public:
	void initialize(int d, int m, int y) {
		if (d > 0 && m > 0 && y > 0) {
			day = d;
			month = m;
			year = y;
		}
		else {
			cout << "Wrong Values!...." << endl;
		}
	}

	int getYear() {
		return year;
	}

	void display() {
		cout << day << "/" << month << "/" << year << endl;
	}
};

int main()
{
	Date d1, d2;
	int day, month, year;
	cout << "Please Enter Your Birth date (D M Y): ";
	cin >> day >> month >> year;

	d1.initialize(day, month, year);

	cout << "Please Enter the Current date (D M Y): ";
	cin >> day >> month >> year;

	d2.initialize(day, month, year);

	cout << "\nYour Birth date is: ";
	d1.display();
	cout << "The Current date is: ";
	d2.display();

	int age = d2.getYear() - d1.getYear();

	cout << "\nYour Age is: " << age << endl;
	
	return 0;
}
*/

// Task 2:
/*
class Employee {
	int employeeCode;
	int ageAtJoining;
	int currentAge;

public:
	void initialize(int code, int age_join, int age_now) {

		if (age_join > 0 && age_now > 0) {
			employeeCode = code;
			ageAtJoining = age_join;
			currentAge = age_now;
		}
		else {
			cout << "Wrong Values!...." << endl;
		}
	}

	void display() {
		cout << "\nEmployee Code is: " << employeeCode << endl;
		cout << "Employee's Age at joining was: " << ageAtJoining << endl;
		cout << "Employee's Current Age is: " << currentAge << endl;
	}

	int calculateTenure() {
		int tenure = currentAge - ageAtJoining;

		return tenure;
	}

};

void input(int& code, int& age_join, int& age_now) {
	cout << "Enter Employee Code: ";
	cin >> code;
	cout << "Enter Employee's Age at joining: ";
	cin >> age_join;
	cout << "Enter Employee's Current Age: ";
	cin >> age_now;
}

int main()
{
	Employee e1, e2, e3, e4, e5;
	int c, age_j, age_n;

	input(c, age_j, age_n);
	e1.initialize(c, age_j, age_n);
	if (e1.calculateTenure() >= 2) {
		e1.display();
	}

	input(c, age_j, age_n);
	e2.initialize(c, age_j, age_n);
	if (e2.calculateTenure() >= 2) {
		e2.display();
	}

	input(c, age_j, age_n);
	e3.initialize(c, age_j, age_n);
	if (e3.calculateTenure() >= 2) {
		e3.display();
	}

	input(c, age_j, age_n);
	e4.initialize(c, age_j, age_n);
	if (e4.calculateTenure() >= 2) {
		e4.display();
	}

	input(c, age_j, age_n);
	e5.initialize(c, age_j, age_n);
	if (e5.calculateTenure() >= 2) {
		e5.display();
	}

	return 0;
}
*/

// Task 3:
class Triangle {

	double base;
	double height;

public:

	void initialize(double b, double h) {
		if (b > 0 && h > 0) {
			base = b;
			height = h;
		}
		else {
			cout << "Wrong Values!...." << endl;
		}
	}

	void display() {
		cout << "\nBase of Triangle is: " << base << endl;
		cout << "Height of Triangle is: " << height << endl;
	}

	int calculateArea() {

		int area = base * height;
		return area;
	}

};

void input(int& h, int& l) {
	cout << "Enter the Height of Triangle: ";
	cin >> h;
	cout << "Enter the Length of Triangle: ";
	cin >> l;
}

int main()
{
	Triangle e1, e2, e3, e4, e5;
	int height, length;
	int max=0;
	input(height,length);
	e1.initialize(height, length);
	if (e1.calculateArea() >= max) {
		max = e1.calculateArea();
		e1.display();
	}

	input(height, length);
	e2.initialize(height, length);
	if (e2.calculateArea() >= max) {
		max = e1.calculateArea();
		e2.display();
	}

	input(height, length);
	e3.initialize(height, length);
	if (e3.calculateArea() >= max) {
		max = e1.calculateArea();
		e3.display();
	}

	input(height, length);
	e4.initialize(height, length);
	if (e4.Area() >= 2) {
		e4.display();
	}

	input(height, length);
	e5.initialize(height, length);
	if (e5.calculateTenure() >= 2) {
		e5.display();
	}

	return 0;
}