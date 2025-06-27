#include<iostream>
#include<fstream>
using namespace std;

//Task 1:
/*
// Function to find the Greatest Number
int find_greater(int a, int b, int c) {
	int great;
	if (a > b && a > c) {
		return a;
	}
	else if (b > a && b > c) {
		return b;
	}
	else if (c > b && c > a) {
		return c;
	}
	else {
		return 0;
	}
}

int main()
{
	// Declaring variables
	int n1, n2, n3,greater;

	//  Taking input from user
	cout << "Enter 1st Number: ";
	cin >> n1;
	cout << "Enter 2nd Number: ";
	cin >> n2;
	cout << "Enter 3rd Number: ";
	cin >> n3;

	// Calling function which return the greatest no.
	greater = find_greater(n1, n2, n3);
	cout << "The Greater Number is: " << greater << endl;
	return 0;
}
*/

//Task 2:

/*
// Function to calculate average and return the result
float average(float a, float b, float c) {
	float avg;
	avg = (a + b + c) / 3;
	return avg;
}

int main()
{
	// Declaring Variables
	float n1, n2, n3, result;

	// Taking input from user
	cout << "Enter the 1st Value: ";
	cin >> n1;
	cout << "Enter the 2nd Value: ";
	cin >> n2;
	cout << "Enter the 3rd Value: ";
	cin >> n3;

	// Calling average function
	result = average(n1, n2, n3);
	cout << "The Average is: " << result << endl;

	return 0;
}
*/


//Task 3:
/*
// Function to calculate max number
int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else if (b > a) {
		return b;
	}
	else {
		return 0;
	}
}

int main()
{
	int n1, n2,max_no;

	// Taking input from user of two integers
	cout << "Enter First No. : ";
	cin >> n1;
	cout << "Enter Second No. :";
	cin >> n2;
	
	// Calling the max function which initialize the max_no variable
	max_no = max(n1, n2);
	cout << "Max Number is: " << max_no << endl;

	return 0;
}
*/


//Task 4:
/*
// Function to swap the values of two variables
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int n1, n2;

	// Taking input from user
	cout << "Enter First No. : ";
	cin >> n1;
	cout << "Enter Second No. : ";
	cin >> n2;

	// Calling function to swap the values
	swap(n1, n2);

	// Printing the swapped values of both integers
	cout << "First Number: " << n1<<endl;
	cout << "Second Number: " << n2<<endl;

	return 0;
}
*/

//Task 5:
/*
int main()
{
	// Declaring the input variable and getting input
	int x;
	cout << "Enter the Value of x: ";
	cin >> x;

	// Initializing the ptr variable
	int* ptr = &x;

	// Printing the values of x and ptr
	cout << "Value of x is: " << x << endl;
	cout << "Value of ptr is: " << ptr << endl;
	cout << "Value of *ptr is: " << *ptr << endl;

	return 0;
}
*/

//Task 6:

int main()
{
	// Declaring variables and getting input from user
	int n1,n2;
	cout << "Enter the 1st Number: ";
	cin >> n1;
	cout << "Enter the 2nd Number: ";
	cin >> n2;

	// Initializing the pointers with address of both integers
	int* ptr1 = &n1, * ptr2 = &n2;

	// Printing the sum of two integers with pointers
	cout << "Sum of Two Numbers: " << *ptr1 + *ptr2 << endl;

	return 0;
}

