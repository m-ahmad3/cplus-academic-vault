#include<iostream>
#include<fstream>
using namespace std;

//Task 1
/*
void print_name() {
	cout << "My name is Muhammad Ahmad" << endl;
}
*/

//Task 2
/*
void print_table(int a) {
	for (int i = 1; i <= 5; i++) {
		cout << a << " X " << i << " = " << a * i << endl;
	}
}
*/

//Task 3
/*
int natural_num(int a) {
	int sum=0;
	for (int i = a; i > 0; i--) {
		sum = sum + i;
	}
	return sum;
}
*/

int temp_converter(int a, char type) {
	if (type == 'c' || type == 'C') {
		int celcius;
		celcius = (a - 32 )* 5 / 9;

		return celcius;
	}
	else if (type == 'f' || type == 'F') {
		int fahrenheit;
		fahrenheit =  (a*9/5)+32;

		return fahrenheit;
	}
	else {
		return 0;
	}
}

double sqr_rt(int a) {
	double ans = pow(a,0.5);
	return ans;
}

int power(int base, int exponent) {
	
	if (exponent > 0) {
		int result = 1;
		for (int a = 1; a <= exponent; a++) {
			result = result * base;
		}
		return result;
	}
	else {
		return 0;
	}
}
int main()
{
	//Task 1
	//print_name();

	//Task 2:
	/*
	int input;
	cout << "Enter a number for Table: ";
	cin >> input;
	print_table(input);

	*/

	//Task 3:
	/*
	int input;
	cout << "Enter a Number for sum: ";
	cin >> input;
	cout << "Sum of all natural numbers till " << input << " is: ";
	cout << natural_num(input) << endl;;
	*/



	//Task 4
	/*
	int temp;
	char kind;
	cout << "Enter the Temperature: ";
	cin >> temp;
	cout << "Do you want to convert to Fahrenheit or Celsius? (F/C): ";
	cin >> kind;
	temp = temp_converter(temp, kind);
	cout << "Result: " <<temp<<endl;
	*/

	//Task 5
	/*
	//       Square root
	int input;
	cout << "Please Enter a Number for Square Root: ";
	cin >> input;
	double solution = sqr_rt(input);
	cout << "Square Root of " << input << " is: " << solution << endl;
	*/

	//       Power
	/*
	int in1, in2;
	cout << "Please Enter the Base Value: ";
	cin >> in1;
	cout << "Please Enter the Exponent of Base: ";
	cin >> in2;
	int solution = power(in1, in2);
	cout << "The Result is: " << solution << endl;
	*/

	//			
	system("pause");

	return 0;
}