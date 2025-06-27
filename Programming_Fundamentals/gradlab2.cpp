#include<iostream>
using namespace std;

// Function to find the number in array
void search(int arr_f[], int num, int size_f) {
	int count = 0;
	for (int a = 0; a < size_f; a++) {
		if (arr_f[a] == num) {
			count++;
		}
	}

	// Condition using count to print the result
	if (count > 0) {
		cout << "The number " << num << " is present " << count << " times in the array." << endl;
	}
	else {
		cout << "The number " << num << " is not Present in the array." << endl;
	}
}



int main()
{
	// Declaring array, input and constant variable for size
	const int size = 10;
	int arr[size],input;

	// Taking input of array numbers from user
	cout << "Enter The Values of Array: ";
	for (int a = 0; a < size; a++) {
		cin >> arr[a];
	}

	// Printing the array on console
	cout << "Input Array: ";
	for (int a = 0; a < size; a++) {
		cout << arr[a] << " ";
	}
	cout << endl;

	// Taking input of number from user to search
	cout << "Enter the No. to Search: ";
	cin >> input;

	// Calling function to search the number in array
	// it will print the respective result
	search(arr, input, size);

	return 0;
}