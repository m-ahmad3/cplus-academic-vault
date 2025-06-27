
// Task 1 :-
/*
#include<iostream>
using namespace std;

// Input Function to take values from user
void input(int arr_f[], int size_f) {
	cout << "Enter the Values: ";
	for (int a = 0; a < size_f; a++) {
		cin >> arr_f[a];
	}
}

// Print Function to print values of array by pointer array
void print(int* arr_ptr,int size_f) {
	cout << "Array: ";
	for (int a = 0; a < size_f; a++) {
		cout << arr_ptr[a]<<" ";
	}
}
int main()
{
	// Declaring Array and it's Size
	const int size = 6;
	int arr[size];

	// Calling Funtion of input and print
	input(arr,size);
	print(arr,size);

	return 0;
}
*/

// Task 02 :- 
/*
#include<iostream>
using namespace std;

// Funtion to swap values without any new variable
void swap_it(int* n1, int* n2) {
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
}

int main()
{
	int num1, num2;
	cout << "Enter 1st Value: ";
	cin >> num1;
	cout << "Enter 2nd Value: ";
	cin >> num2;
	
	// Printing Values before swap
	cout << "Before Swap: \nFirst Value= " << num1 << " Second Value= " << num2 << endl;
	
	// Calling the Swap function
	swap_it(&num1, &num2);

	// Printing Values after swap
	cout << "After Swap: \nFirst Value= " << num1 << " Second Value= " << num2 << endl;
	
	return 0;
}
*/

// Task 3:-]
/*
#include<iostream>
using namespace std;

// Funtion to calculate the area
void calculate_area(float* radius_f,float*area_f) {
	*area_f = (*radius_f) * (*radius_f) * 3.14;
}
int main()
{
	float radius,area;

	// Taking input of radius from user
	cout << "Enter Radius of Circle: ";
	cin >> radius;

	// Calling function to calculate area
	calculate_area(&radius,&area);

	// Ptinting Area of Circle according to input of user
	cout << "Area of Circle is: " << area <<" Square Meter"<< endl;
	return 0;
}
*/

// Task 4:-
/*
#include<iostream>
using namespace std;

// All the functions for different arithmatic operations
void addition(int n1, int n2, int* ans) {
	*ans = n1 + n2;
}
void difference(int n1, int n2, int* ans) {
	*ans = n1 - n2;
}
void multiply(int n1, int n2, int* ans) {
	*ans = n1 * n2;
}
void divide(int n1, int n2, int* ans) {
	*ans = n1 / n2;
}
void remainder(int n1, int n2, int* ans) {
	*ans = n1 % n2;
}

// Function caller, it will decide which function to call
// according to the input
void func_caller(char operation_f, int n1, int n2, int* ans) {
	if (operation_f == '+') {
		addition(n1, n2, ans);
	}
	if (operation_f == '-') {
		difference(n1, n2, ans);
	}
	if (operation_f == '*') {
		multiply(n1, n2,ans);
	}
	if (operation_f == '/') {
		divide(n1, n2, ans);
	}
	if (operation_f == '%') {
		remainder(n1, n2, ans);
	}
}
int main()
{
	int num1, num2,answer;
	char operation;

	// Taking input from the user
	cout << "Enter 1st Number: ";
	cin >> num1;
	cout << "Enter 2nd Number: ";
	cin >> num2;
	cout << "Enter Operation(+ , - , * , / , % ): ";
	cin >> operation;

	// Calling function to do the operaton according to input
	func_caller(operation, num1, num2, &answer);

	// Printing the results
	cout << "Result: " << num1 << " " << operation << " " << num2 << " = " << answer << endl;

	return 0;
}
*/

// Task 5 :-
/*
#include<iostream>
using namespace std;

// Function to calculate the temprature from 'F' to 'C'
int* temp(int* fptr) {
	*fptr = ((*fptr - 32) * 5) / 9;
	return fptr;
}
int main()
{
	int* temperature = NULL;
	temperature = new int;

	// Taking input of temp in fahrenheit
	cout << "Enter Temperature in Fehrenheit: ";
	cin >> *temperature;

	// Calling pointer returnig function
	temperature = temp(temperature);

	// Printing temp in Celsius
	cout << "Temperature in Celsius: " << *temperature << " Celsius" << endl;
	
	// Deallocating the temperature pointer memory
	delete temperature;

	return 0;
}
*/


// Task 6:-
/*
#include<iostream>
using namespace std;

// Funtion to allocate the dynamic memory according to given size
float* dynamic_memory(float* arr,int size_f) {
	arr = new float[size_f];
	return arr;
}

// Function to take input of GPA of each student
void input(float* arr,int size_f) {
	cout << "Enter GPA of Students: " << endl;
	for (int a = 0; a < size_f; a++) {
		cout << "Student no. " << a + 1<<": ";
		cin >> arr[a];
	}
}

// Funtion to display the GPA of students
void output(float* arr, int size_f) {
	cout << "\nDisplaying GPA of Students: " << endl;
	for (int a = 0; a < size_f; a++) {
		cout << "Student no. " << a + 1 << ": " << arr[a] << endl;
	}
}

int main()
{
	float * array = NULL;
	int size;

	// Taking size to allocate the dynamic memory
	cout << "Enter Total Number of Students: ";
	cin >> size;

	// Allocating dynamic memory through function
	array=dynamic_memory(array, size);

	// Calling input and output function
	input(array, size);
	output(array, size);

	// Deallocating the array pointer memory
	delete[] array;

	return 0;
}
*/

// Task 7:
/*
#include<iostream>
using namespace std;

// Funtion to regrow the size of dynamic array
int* dynamic_memory(int* oldarray, int size_f) {
	int* newarray = NULL;
	newarray = new int[size_f];
	for (int a = 0; a < size_f; a++) {
		newarray[a] = oldarray[a];
	}
	delete[] oldarray;
	return newarray;
}

// Function to find the second largest number in array
int second_large(int* array, int size_f) {
	int max = array[0], sec_max=array[0];
	for (int a = 0; a < size_f;a++) {
		if (array[a] > max) {
			sec_max = max;
			max = array[a];
		}
	}
	return sec_max;
}

int main()
{
	int* arr = NULL;
	int size = 0,num=0,sec_large;
	arr = new int[size];

	// Taking input from user until -99
	cout << "Enter Numbers: ";
	for (int a = 0; num != -99; a++) {
		cin >> num;
		if (num != -99) {
			size++;

			// Calling function to regrow the size of dynamic array
			arr = dynamic_memory(arr, size);
			arr[a] = num;
		}
	}

	// Calling function to find second largest number
	sec_large = second_large(arr,size);
	cout << "Second Largest Number is: " << sec_large << endl;

	// Deallocating Array memory
	delete[] arr;

	return 0;
}
*/

// Task 8:

#include<iostream>
using namespace std;

// Function to allocate the dynamic memory acoording to input
int* dynamic_mem(int size_f) {
	int* array = NULL;
	array = new int[size_f];
	return array;
}

// Function to take input from user
void input(int* array, int size_f) {
	for (int a = 0; a < size_f; a++) {
		cout << "Enter Total Number of Students in Lab " << a + 1 << ": ";
		cin >> array[a];
	}
}

// To find the average students of all the labs
int average_students(int* array, int size_f) {
	int avg = 0;
	for (int a = 0; a < size_f; a++) {
		avg += array[a];
	}
	avg /= size_f;
	return avg;
}

int main()
{
	int* arr = NULL;
	int size, average;

	// Taking size from user
	cout << "Enter the Number of Labs in University: ";
	cin >> size;

	// Allocating memory according to given size by dynamic_mem function
	arr = dynamic_mem(size);

	// Taking input from user by calling the input function
	input(arr, size);
	
	// Storing average calculated by average_students function
	average = average_students(arr, size);

	// Printing the average on console
	cout << "Average Number of Students in Lab are: " << average << endl;
	
	return 0;
}
