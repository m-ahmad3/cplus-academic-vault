#include<iostream>  
#include<fstream>
using namespace std;
int main()
{
	//Task 1:-
/*
	

	// Creating file for storing numbers
	ofstream file1("NOTES.txt");

	if(!file1.is_open()){
	cout<<"File is not created!..... :("<<endl;
	}
	else{
	// Loop to save numbers from 1 to 100
	for (int a = 1; a <= 100; a++) {
		file1 << a << endl;
		cout<<a<<endl;
	}

	// Closing the file
	file1.close();
	}
*/	

	//Task 2:-
	/*
	ifstream file("Student.txt");

	if (!file.is_open()) {
		cout << "File is not opened!...... :(" << endl;
	}
	else {

		// Declaration and initialization
		char name[20], email[40], program[30];
		int roll_no,reg_no;

		// Loop to read and output the data on console
		for (int a = 0; a<3;a++) {

			// Using getline functions
			file.getline(name,20,'	');
			file >> roll_no;
			file.ignore();
			file.getline(email, 30, '	');
			file.getline(program, 30,'	');
			file>> reg_no;

			// Output of data on console
			cout << name << "    " << roll_no << "    " << email<<"	"<<program<<"	" <<reg_no<< endl;
			
		}

	}

	*/

	/*
	//Task 3:
	// Declaration of variables
	char file_name[20],line[100],repeat;

	// Taking input of file name
	cout << "Enter file Name: ";
	cin >> file_name;
	cin.ignore();

	// Creating File
	fstream file1(file_name,ios::out);

	if (!file1.is_open()) {
		cout << "File is not created!.... :(" << endl;
	}

	// Taking input of line to store
		cout << "Enter a line to store in file: ";
		cin.getline(line,100);

		// Printing line on text file
		file1 << line;
		cout << "\n\nThe information you entered was successfully saved!... :)" << endl;
		
		file1.close();

		// Asking user to read the file or not
		cout <<endl<< "Do you want to read the file\"" << file_name << "\"? (y/n): ";
		cin >> repeat;
		// Condition for reading the line
		if (repeat == 'y' || repeat == 'Y') {
			file1.open(file_name, ios::in);

			if (!file1.is_open()) {
				cout << "File is not found!..... :(" << endl;
				
			}
			else {
				file1.getline(line, 100);
				cout << line << endl;
				file1.close();
			}
		}
	*/

	//Task 4
/*
	// Declaration
	char name[50], program[20], id1[10];

	//Part 1
	fstream file1("Data.txt", ios::out|ios::trunc);

	// Taking input of data of students
	cout << "Enter Name: ";
	cin.getline(name, 50);
	cout << "Enter ID: ";
	cin.getline(id1, 10);
	
	cout << "Enter Program: ";
	cin >> program;
	file1 << "Name1: " << name << endl;
	file1 << "ID: " << id1 << endl;
	file1 << "Program: " << program << endl;
	
	file1.close();
	cout << endl;
	cin.ignore();

	//Part 2
	fstream file2("Data.txt", ios::out | ios::app);

	// Again same method is used
	if(file2.is_open()){
	cout << "Enter Name 2: ";
	cin.getline(name, 50);
	cout << "Enter ID: ";
	cin.getline(id1, 10);

	cout << "Enter Program: ";
	cin >> program;
	file2 << "\nName2: " << name << endl;
	file2 << "ID: " << id1 << endl;
	file2 << "Program: " << program << endl;

	file2.close();
	}
	else{
	cout<<"File is not founded!...."<<endl;
	}
	*/


	//Task 5

// Declaring Array to take input from user
int arr[6];

// Making file to store results
ofstream file("sample.txt");

cout << "Please Enter the '6' integers: ";

// Loop to takin input and check the condition at same time
for (int a = 0; a < 6; a++) {
	cin >> arr[a];

	// Printing on file if condition is true
	if (arr[a] > 12) {
		file << arr[a] << " ";
	}
}

//Closing file
file.close();
	return 0;
}