#include<iostream>
#include<fstream>
using namespace std;
					// Muhammad Ahmad

// Prototypes of Functions used
void display_array(int* arr, int size_f);
void copy_array(int*& array1, int*& array2, int size);
int* regrow(int* oldarray, int size_f);
void read(char file_n[20], int*& array, int& size_f);

int main()
{
	int size = 0;
	// Declaraing and initializing an integer array dynamically
	// with size 0 beacause without initializing it will give error
	// in regrow function
	int* main_arr = NULL;
	main_arr = new int[size];
	char file_name[10] = "data.txt";

	// Calling the read function which will open and read the file
	// according to user input
	read(file_name, main_arr, size);

	// Printing final array on console by using display function
	cout << "Final Array: ";
	display_array(main_arr, size);

	// Clearing the heap memory and initializing the pointer with NULL
	delete[] main_arr;
	main_arr = NULL;

	return 0;
}

// Funciton for printing array on console
void display_array(int* arr, int size_f) {
	for (int a = 0; a < size_f; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

// Function to copy the old Array values to new Array, during regrowth
// of dynamic array
void copy_array(int*& array1, int*& array2, int size) {
	for (int a = 0; a < size; a++) {
		array1[a] = array2[a];
	}
}

// Pointer returning function to Regrow size of Dynamic Array
int* regrow(int* oldarray, int size_f) {

	// Declaring and initializing a New dynamic array with given size
	int* newarray = NULL;
	newarray = new int[size_f];

	// Calling copy_array function to copy the vlues from oldarray
	// to new array
	copy_array(newarray, oldarray, size_f);

	// Clearing heap memory occupied by oldarray
	delete[] oldarray;

	return newarray;
}

// An important function to read and store the data in dynamic array
void read(char file_n[20], int*& array, int& size_f) {
	// Opening file
	ifstream file(file_n);

	// Conditions for file opening
	if (!file.is_open()) {
		cout << "File Not Found!...." << endl;
	}
	else {

		// Here making a new pointer(num) and assigning it a dyanmic
		// space of integer
		int* num = NULL;
		num = new int;

		char repeat = 'Y';

		// Loop with condition of repeat taken by user and also 
		// using eof function to control loop
		for (int a = 0; repeat == 'Y' && !file.eof(); a++) {
			// Taking input from user to continue or teminate
			cout << "Press 'Y' to read data from the file and press 'N' to terminate reading: ";
			cin >> repeat;

			if (repeat == 'Y') {
				file >> *num;

				// if condition to check whether the input from file
				// is integer, because integer variable will always
				// consider char as a zero. So, only integers other than
				// '0' can be stored in dynamic array
				if (*num > 0 || *num < 0) {

					size_f++;
					// Calling the regrow function
					array = regrow(array, size_f);

					// Storing *num value in dynamic array
					array[a] = *num;
					cout << "Data Readed Successfully."<< endl;
					cout << "Displaying Array: ";
					display_array(array, size_f);
					cout << endl;
				}

				// else condition which will terminate the function, if
				// an invalid input(*num=0) is given from file
				else {
					cout << "Invalid Input!...." << endl;
					break;
				}
			}

			// else condition to print this message if user entered char
			// other tham 'Y'
			else {
				cout << "Reading Terminated!..." << endl << endl;
			}
		}

		// if Condition to print this message if file has no data left
		if (file.eof()) {
			cout << "No More Data to Read in File!..." << endl;
		}

		// Clearing num pointer
		delete num;
		num = NULL;

		// Closing File
		file.close();
	}
}

