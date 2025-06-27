#include<iostream>
#include<fstream>
using namespace std;

//		MUHAMMAD AHMAD

// Prototypes of Functions
int* dyn_1d_int(int size);
char* dyn_1d_char(int size);
void input_array(int* arr, int size_f);
int* shrink_array(int* oldarray, int& oldsize);
void print_array(int* arr, int size_f);
int count_rows(char filename[]);
char** dyn_2d(int row, int col[]);
void delete_2d(char** arr_f, int row);
char* regrow(char* oldarray, int size);
void read(char filename[], char** arr, int row, int col[]);
int phonebook_menu();
void capitalize(char** arr, int row);
void sort_names(char** arr, int row);
void print_names(char** arr, int row);
void search_contact(char** arr, int row);

int main()
{
	char choice = '\0';
	// Menu Loop
	// Break only when user enter 'e' or 'E'
	while (choice != 'e' && choice != 'E') {
		cout << "\t||---MAIN MENU---||" << endl;
		cout << "------------------------------------" << endl;
		cout << "*Enter 'S' to Shrink Array Odd Wise*" << endl;
		cout << "*Enter 'P' for Phone Book Menu*" << endl;
		cout << "*Enter 'E' to Exit*" << endl;
		cout << "------------------------------------" << endl;
		cout << "Enter Your Choice: ";
		cin >> choice;

		// If user enters 's' or 'S'
		if (choice == 's' || choice == 'S') {
			
			int size;
			cout << "\nEnter Size Of Array: ";
			cin >> size;  // Taking input of array size
			
			// Allocating memory
			int* input = NULL;
			input = dyn_1d_int(size);
			
			// Taking input of values from user through this function
			input_array(input, size);
			
			// Calling this function to shrink the array
			input = shrink_array(input, size);

			// Print the shrinked array on console
			print_array(input, size);

			delete[] input;
		}

		// If user enters 'p' or 'P'
		else if (choice == 'p' || choice == 'P') {

			char file_name[20] = "phonebook.txt";
			
			// Doubling size of rows for storing the names in Even index
			// and their numbers on next index of name (odd index)
			int rows = 2 * (count_rows(file_name));
			
			// Printing No. of Contacts on Console
			cout << "\nTotal No. Of Contacts: " << rows/2 << endl;

			// Only Execute when 1 or more contacts are found
			if (rows > 0) {
				int menu = phonebook_menu();
				
				int* col = dyn_1d_int(rows);
				// Assigning Column Size to col array
				// For Even Index(name) size is 1
				// For Odd Index(Number) size is 13 bcz number size is max 12
				for (int a = 0; a < rows; a += 2) {
					col[a] = 1;
					col[a + 1] = 13;
				}

				char** data = nullptr;
				data = dyn_2d(rows, col);  // Allocating 2d memory
				
				// This function will read the data from file
				read(file_name, data, rows, col);
			    
				// Capitalize all the names
				capitalize(data, rows);

				// Sort names in Ascending order
				sort_names(data, rows);

				if (menu == 1) {
					// Print names on Console
					print_names(data, rows);
				}
				else if (menu == 2) {
					// For searching the name in list and printing it's
					// number is found
					search_contact(data, rows);
				}
				// Calling this function to deallocate the jagged array
				delete_2d(data, rows);
			}
			else {
				cout << "No Phone Book Found!..." << endl << endl;
			}
		}
	}
	return 0;
}

// Function to allocate "int" type array memory to pointer
int* dyn_1d_int(int size) {
	int* arr = NULL;
	arr = new int[size];

	return arr;
}

// Function to allocate "char" type array memory to pointer
char* dyn_1d_char(int size) {
	char* arr = NULL;
	arr = new char[size];

	return arr;
}

// Function to take values input of array for shrinking
void input_array(int* arr, int size_f) {
	cout << "\nInput Values of Array: ";
	for (int a = 0; a < size_f; a++) {
		cin >> arr[a];
	}
}

// Funcion to shrink the size of array, by excluding odd index
int* shrink_array(int* oldarray, int& oldsize) {

	// A simple Algebraic method to find the number of odds in counting
	int newsize = (oldsize + 1) / 2;

	int* newarray = newarray = dyn_1d_int(newsize);

	int index = 0;
	for (int a = 0; a < oldsize; a++) {
		// It will copy only those values whose index are even
		if (a % 2 == 0) {
			newarray[index] = oldarray[a];
			index++;
		}
	}
	oldsize = newsize; // Updating the Address of Shrinked Arrray

	delete[] oldarray;
	oldarray = NULL;

	return newarray;
}

// Function to print the shrinked Array on console
void print_array(int* arr, int size_f) {
	cout << "After Compressing Array: ";
	for (int a = 0; a < size_f; a++) {
		cout << arr[a] << " ";
	}
	cout << endl << endl;
}

// Function to count the no. of rows in phonebook file
int count_rows(char filename[]) {
	int count = 0;
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "\nNo Phone Book File Found!..." << endl;
		cout << "Try Again" << endl << endl;
	}
	else {
		// Temporary pointer for saving data of each row
		char* temp = dyn_1d_char(30);
		while (!file.eof()) {
			file.getline(temp, 30);
			count++;
		}
		delete[] temp;  // Deallocating temp

		file.close();
	}
	return count;   // Returning Count of Rows
}

// Function to allocate 2D Memory to Double Pointer
char** dyn_2d(int row, int col[]) {
	char** arr = nullptr;
	arr = new char* [row];

	for (int a = 0; a < row; a++) {
		arr[a] = new char[col[a]];
	}

	return arr;
}

// Function for Deallocating the memory of Double Pointers
void delete_2d(char** arr_f, int row) {
	for (int a = 0; a < row; a++) {
		delete[] arr_f[a];
	}
	delete[] arr_f;
}

// Function to Regrow the col size of double pointer
char* regrow(char* oldarray, int size) {
	char* newarray = dyn_1d_char(size);

	for (int a = 0; a < size; a++) {
		newarray[a] = oldarray[a];
	}

	delete[] oldarray;
	oldarray = NULL;

	return newarray;
}

// Function to Read the data from Phone Book file
void read(char filename[], char** arr, int row, int col[]) {
	ifstream file(filename);
	if (!file.is_open()) {
		cout << "No Phone Book File Found!!!" << endl;
		cout << "Try Again" << endl;
	}
	else {
		// Again Used the Dynamic Array for taking data form file
		char* temp = dyn_1d_char(30);
		for (int a = 0; a < row && !file.eof(); a += 2) {

			file.getline(temp, 30);  // Storing Data in temp Array

			// Dividing the "temp" data in Two Parts
			// 1st Part(Name) will be saved in Even index
			// Copying name in Even Index
			int b = 0;
			for (b = 0; temp[b] != ':'; b++) {

				// Using Jagged Arrays for names
				col[a]++;
				arr[a] = regrow(arr[a], col[a]);
				arr[a][b] = temp[b];
			}
			arr[a][b] = '\0';

			// Adding 2 in 'b' beacause after name ':' and ' ' comes
			// which are not required, so moving the point to number
			b += 2;
			// Copying Number in Odd index of main array
			int c = 0;
			for (c = 0; temp[b] != '\0'; c++) {

				// Not using jagged arrays, because size of numbers are fixed always
				arr[a + 1][c] = temp[b];
				b++;
			}
			arr[a + 1][c] = '\0';
		}

		delete[] temp;  // Deallocating temp memory
		temp = NULL;

		file.close();  // Closing File
	}
}

// Function to Print phonebook menu
int phonebook_menu() {

	// It will repeat until user enters a valid letter
	char in = '\0';
	while (in != 'E' && in != 'e' && in != 's' && in != 'S' && in != 'l' && in != 'L') {
		cout << "\n\t---Phone Book Menu---" << endl;
		cout << "------------------------------------" << endl;
		cout << "*Enter 'L' to Print Contacts List*" << endl;
		cout << "*Enter 'S' to Search Contact*" << endl;
		cout << "*Enter 'B' to Go Back to Main Menu*" << endl;
		cout << "------------------------------------" << endl;
		cout << "Enter Your Choice: ";
		cin >> in;

		if (in != 'E' && in != 'e' && in != 's' && in != 'S' && in != 'l' && in != 'L') {
			cout << "\nInvalid Input!..\nEnter Again" << endl;
		}
		else {
			break; // Loop will break when valid letter is entered
		}
	}

	// Returning values according to user input
	if (in == 'l' || in == 'L') {
		return 1;
	}
	else if (in == 's' || in == 'S') {
		return 2;
	}
	else {
		return 0;
	}
}

// Function to Capitalize all the small Letters in name Array
void capitalize(char** arr, int row) {
	// Main Loop
	for (int a = 0; a < row; a += 2) {
		for (int b = 0; arr[a][b] != '\0'; b++) {
			// if letter>='a' AND letter<='z'
			if (arr[a][b] >= 97 && arr[a][b] <= 122) {
				arr[a][b] = arr[a][b] - 32;
			}
		}
	}
}


// Function to Sort all the names and their numbers in ascending order
void sort_names(char** arr, int row) {

	for (int a = 0; a < row; a += 2) {
		for (int b = 0; b < row - 1; b += 2) {
			// Only Comparing first letter
			if (arr[a][0] < arr[b][0]) {

				// Swapping the names
				char* temp = arr[a];  // using temp pointer
				arr[a] = arr[b];
				arr[b] = temp;

				// Swapping the numbers
				temp = arr[a + 1];
				arr[a + 1] = arr[b + 1];
				arr[b + 1] = temp;

				temp = NULL;  // Making temp point to NULL
			}
		}
	}
}


// Function to Print names (only) on console
void print_names(char** arr, int row) {
	cout << "\nContacts List:" << endl;
	int num = 1;
	for (int a = 0; a < row; a += 2) {
		cout << num << ". " << arr[a] << endl;
		num++;
	}
	cout << endl;
}


// Function to search the given name and print it's number
void search_contact(char** arr, int row) {
	char* temp = new char[30];
	cout << "\nEnter the Name to Search (in Capital): ";
	cin >> temp;  // Taking input of name from user

	// Comparing it with all the names
	int size = 0;
	int check = 0;
	for (int a = 0; a < row; a += 2) {
		size = 0;
		check = 0;
		for (int b = 0; arr[a][b] != '\0'; b++) {
			size++;
			if (arr[a][b] == temp[b]) {
				check++;
			}
		}
		if (check == size) {
			cout << "\nName\tPhone Number" << endl;
			cout << "---------------------" << endl;
			cout << arr[a] << ": " << arr[a + 1] << endl;
			cout << "---------------------" << endl << endl;
			break;  // If name found loop will be break
		}
	}
	if (check != size) {
		cout << "No Contact Found Of This Name!..." << endl << endl;
	}

	delete[] temp; // Deallocating the temp memory
}