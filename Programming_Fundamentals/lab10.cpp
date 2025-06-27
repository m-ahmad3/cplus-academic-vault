// Task 1:-
/*
#include<iostream>
using namespace std;

void inputArray(int* arr, int size_f) {
	cout << "Enter Elements: ";
	for (int a = 0; a < size_f; a++) {
		cin >> arr[a];
	}
}
void printArray(int* arr, int size) {
	cout << "Array Elements: ";
	for (int a = 0; a < size; a++) {
		cout << arr[a] << " ";
	}
	cout << endl;
}
int* swap(int* oldarray) {
	int* newarray = new int[5];
	for (int a = 0; a < 5; a++) {
		if (a == 2) {
			newarray[a] = oldarray[4];
		}
		else if (a == 4) {
			newarray[a] = oldarray[2];
		}
		else {
			newarray[a] = oldarray[a];
		}
	}
	delete[] oldarray;
	oldarray = NULL;
	return newarray;
}
int main()
{
	int* array = new int[5];
	inputArray(array, 5);
	array = swap(array);
	printArray(array, 5);
	return 0;
}
*/





// Task 2:-
/*
#include <iostream>
using namespace std;

void inputArray(int* arr, int size) {
	cout << "Enter Elements: ";
	for (int a = 0; a < size; a++) {
		cin >> arr[a];
	}
}

void printArray(int* arr, int size) {
	cout << "Array Elements: ";
	for (int a = 0; a < size; a++) {
		cout << arr[a] << " ";
	}
	cout << endl;
}

int main() {
	int size;
	cout << "Enter Size of Input: ";
	cin >> size;

	int* arr = new int[size];

	inputArray(arr, size);

	cout << "Elements in Array: ";
	printArray(arr, size);

	delete[] arr;
	arr = NULL;
	return 0;
}
*/


// Task 3:-
/*
#include <iostream>
using namespace std;

void inputArray(int* arr, int size) {
	cout << "Enter Elements: ";
	for (int a = 0; a < size; a++) {
		cin >> arr[a];
	}
}

void printArray(int* arr, int size) {
	cout << "Array Elements: ";
	for (int a = 0; a < size; a++) {
		cout << arr[a] << " ";
	}
	cout << endl;
}
void doubarray(int*arr,int size_f) {
	for (int a = 0; a < size_f; a++) {
		arr[a] *= 2;
	}
}
int main() {
	int size;
	cout << "Enter Size of Input: ";
	cin >> size;

	int* array = new int[size];

	inputArray(array, size);

	cout << "Elements in Array: ";
	printArray(array, size);

	doubarray(array, size);

	cout << "Elements in Array after Double: ";
	printArray(array, size);

	delete[] array;
	array = NULL;
	return 0;
}
*/

// Task 4:-
/*
#include<iostream>
using namespace std;

bool insertcard() {
	int temp;
	cout << "Please Insert Your Card" << endl;
	cout << "Press 1 if you have inserted your card: ";
	cin >> temp;
	if (temp == 1) {
		return temp;
	}
	else {
		return 0;
	}
}

int main()
{
	int check = 0;
	int pass[4] = { 1,2,3,4 };
	int input_pin[4];
	int withdraw;
	int* balance = new int;
	*balance = 10000;
	int* newbalance = new int;
	cout << "\t\tWelcome To Meezan Bank ATM\n" << endl;

	bool card = insertcard();
	if (card == 1) {

		cout << "Enter Your Password: ";

		for (int a = 0; a < 4; a++) {
			cin >> input_pin[a];
			if (input_pin[a] == pass[a]) {
				check++;
			}
		}

		while (check != 4) {
			check = 0;
			cout << "Enter Your Password Again: ";
			for (int a = 0; a < 4; a++) {
				cin >> input_pin[a];
				if (input_pin[a] == pass[a]) {
					check++;
				}
			}
		}
		if (check == 4) {
			cout << "Enter the Amount: ";
			cin >> withdraw;
			if (withdraw <= *balance) {
				*newbalance = *balance;
				delete balance;

				*newbalance -= withdraw;
				cout << "Transaction is Succesfull" << endl;
				cout << "Your new Balance is: " << *newbalance << endl;
			}
		}

	}
	delete newbalance;
	return 0;
}
*/


// Task 5:
/*
#include<iostream>
using namespace std;

void inputArray(int* arr, int size_f) {
	cout << "Enter Elements: ";
	for (int a = 0; a < size_f; a++) {
		cin >> arr[a];
	}
}
void printArray(int* arr, int size) {
	cout << "Array Elements: ";
	for (int a = 0; a < size; a++) {
		cout << arr[a] << " ";
	}
	cout << endl;
}
int* sum(int* array1, int* array2, int size_f) {
	int* resultant = new int[size_f];
	for (int a = 0; a < size_f; a++) {
		resultant[a] = array1[a] + array2[a];
	}
	return resultant;
}
int main()
{
	int size;
	cout << "Enter the size of Array: ";
	cin >> size;
	int* arr1 = new int[size];
	int* arr2 = new int[size];
	int* result = NULL;
	inputArray(arr1, size);
	inputArray(arr2, size);
	result = sum(arr1, arr2, size);
	printArray(result, size);
	return 0;
}
*/


// Task 6:
/*
#include<iostream>
using namespace std;

void input(int* roll_f,int*marks_f, int size_f) {

	for (int a = 0; a < size_f; a++) {
		cout << "Enter the Roll Number of Student " << a + 1 << ": ";
		cin >> roll_f[a];
		cout << "Enter the Marks of Student " << a + 1 << ": ";
		cin >> marks_f[a];
		cout << endl;
	}
}

void printArray(int* roll_f,int* marks_f, int size_f) {
	cout << "Roll\t\tMarks" << endl;
	for (int a = 0; a < size_f; a++) {
		cout << roll_f[a] << "\t\t" << marks_f[a] << endl;
	}
	cout << endl;
}
int main()
{
	int size;
	cout << "Enter Total Number of Students: ";
	cin >> size;
	int* roll = new int[size];
	int*  marks= new int[size];
	input(roll,marks, size);

	printArray(roll,marks, size);
	delete[] roll;
	delete[] marks;
	return 0;
}
*/

// Task 7:
/*
#include<iostream>
using namespace std;

bool findprime(int num) {
	int check = 0;
	for (int a = 1; a <= num; a++) {
		if (num % a == 0) {
			check++;
		}
	}
	if (check == 2) {
		return true;
	}
	else {
		return false;
	}
}

void factorial(int num) {
	int answer=1;
	cout << "Factorial: " << endl;
	for (int a = 1; a <= num; a++) {
		if (a == num) {
			cout << a << " = ";
		}
		else {
			cout << a << " x ";
		}
		answer *= a;
	}
	cout << answer << endl;
}
int main()
{
	cout << "\t\tPrime Number Finder" << endl;
	while (true) {
		int* input = NULL;
		input = new int;

		cout << "\nEnter the Number: ";
		cin >> *input;
		if (findprime(*input) == 1) {
			cout << "Number " << *input << " is Prime." << endl;
			factorial(*input);
		}
		else {
			cout<<"Number " << *input << " is not a Prime." << endl;
		}
		
		delete input;
	}
	
	return 0;
}
*/

// HomeTask

#include<iostream>
#include<fstream>
using namespace std;

void read(int arri[], char arra[], int size_f) {
	int indexa = 0;
	int indexi = 0;
	char input;
	ifstream file("data.txt");
	for (int a = 0; !file.eof(); a++) {
		file >> input;
		if (input >= 'A' && input <= 'Z' || input >= 'a' && input <= 'z') {
			indexa++;
			arra[indexa] = input;
		
		}
		else {
			indexi++;
			arri[indexi] = input-48;
		}
	}
	for (int a = 0; a <=indexa; a++) {
		cout << arra[a]<<" ";
	}
	cout << endl;
	for (int a = 0; a <= indexi; a++) {
		cout << arri[a] << " ";
	}
	file.close();
}

int main()
{
	int size = 15;
	int* array1=new int[size];
	char* array2=new char[size];
	read(array1, array2, size);

	delete[] array1;
	delete[] array2;
	return 0;
}