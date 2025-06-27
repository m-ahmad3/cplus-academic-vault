#include <iostream>
#include <fstream>
using namespace std;
//							Assignment no. 2

//                          Muhammad Ahmad
//                          L1F22BSCS0634

// 'f' in functions parameters means Formal, f=Formal

// Prototypes of Functions
void read_file(char name_f[10][15], int marks_f[10][5], int size_f);
void calculateAverage(int marks_f[10][5], int average_f[], float& class_avg_f, int size_f);
char calculateGrade(int average_f, int size_f);
void write_file(char names_f[10][15], int marks_f[10][5], int average_f[], char grades_f[], float class_avg_f, int size_f);

int main()
{
	// Declaring Arrays and variables
	// Constant Variable for strength of students
	const int size = 10;

	// 2-D Char Array for name of Students
	char names[10][15], grades[10];

	// 2-D int Array for marks of 5 subjects of 10 students
	int marks[size][5], average_marks[10];
	float class_avg;

	// Calling read_file function to transfer or read the data from file to names and marks array
	read_file(names, marks, size);

	// Calling calculateAverage function to calculate the average of each student and whole class
	calculateAverage(marks, average_marks, class_avg, size);

	// Loop which will use calculateAverage function to assign the grade to each student.
	for (int a = 0; a < 10; a++) {
		grades[a] = calculateGrade(average_marks[a], size);
	}

	// Calling write_file function to write all the final data on Result.txt file
	write_file(names, marks, average_marks, grades, class_avg, size);

	return 0;
}


// This function will read the names and marks of students
void read_file(char name_f[10][15], int marks_f[10][5], int size_f) {
	char in_file_name[100];

	// It will take input of name of file with or without location
	// i declared this array with 100 size to also capture the location with name
	cout << "Please Enter the name of Input File (with or without location): ";
	cin.getline(in_file_name, 100);

	// Opening user entered file
	ifstream file(in_file_name);
	if (file.is_open() != 1) {
		cout << "File not Found!...error :(" << endl;
	}
	else {

		// Loop to read and initialize the 2-D array of marks and name array
		for (int a = 0; a < size_f; a++) {
			file >> name_f[a];
			for (int b = 0; b < 5; b++) {
				file >> marks_f[a][b];
			}
		}
		file.close();
	}
}

// Average Calculating Function
// It will take array of marks and average as parameters
// After calculating average assign the value to average array and also to the variable of class_avg
void calculateAverage(int marks_f[10][5], int average_f[], float& class_avg_f, int size_f) {
	class_avg_f = 0;
	for (int a = 0; a < size_f; a++) {
		int total = 0;
		for (int b = 0; b < 5; b++) {
			total = total + marks_f[a][b];
		}

		// Finding Average of each student
		average_f[a] = total / 5;
		class_avg_f += average_f[a];
	}

	// Taking Average of the sum of average of each student for class average
	class_avg_f = class_avg_f / 10;
}

// Grade Calculating Function
// It will take average and size as parameter and return the Grade according to marks
char calculateGrade(int average_f, int size_f) {

	if (average_f >= 90 && average_f <= 100) {
		return 'A';
	}
	else if (average_f >= 80 && average_f <= 89) {
		return 'B';
	}
	else if (average_f >= 70 && average_f <= 79) {
		return 'C';
	}
	else if (average_f >= 60 && average_f <= 69) {
		return 'D';
	}
	else if (average_f <= 59) {
		return 'F';
	}
	// return E means Error
	else {
		return 'E';
	}
}


// Function to write the data on Result.txt file
// It will write class average, average of each student and grade of each student
void write_file(char names_f[10][15], int marks_f[10][5], int average_f[], char grades_f[], float class_avg_f, int size_f) {

	//Creating File Result.txt at project location
	ofstream file("Result.txt");
	if (file.is_open() != 1) {
		cout << "File is not Created!....Error" << endl;
	}
	else {
		// Loop to write the data in pattern on output file
		// Used \t to give spaces.
		file << "Student" << "\t\tTest1" << "\tTest2" << "\tTest3" << "\tTest4" << "\tTest5" << "\tAverage" << "\t Grade" << endl;
		for (int a = 0; a < size_f; a++) {
			file << names_f[a] << "\t";
			for (int b = 0; b < 5; b++) {
				file << "\t " << marks_f[a][b];
			}
			file << "\t  " << average_f[a] << "\t   " << grades_f[a] << endl;
		}
		file << "Class Average = " << class_avg_f << endl;
		file.close();
	}
}

