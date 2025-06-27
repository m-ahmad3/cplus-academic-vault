#include <iostream>
#include <fstream>
using namespace std;
//							Assignment no. 2

//                          Muhammad Ahmad
//                          L1F22BSCS0634

// 'f' in functions parameters means Formal, f=Formal

// Prototypes of Functions
void read_file(char n1[15], char n2[15], char n3[15], char n4[15], char n5[15],char n6[15],
	char n7[15], char n8[15], char n9[15], char n10[15],int m1[],int m2[], int m3[], int m4[],
	int m5[], int m6[], int m7[], int m8[], int m9[], int m10[], int size_f);

void calculateAverage(int m1[], int m2[], int m3[], int m4[], int m5[], int m6[], int m7[],
	int m8[], int m9[], int m10[], int average_f[], float& class_avg_f, int size_f);

char calculateGrade(int average_f, int size_f);

void write_file(char n1[15], char n2[15], char n3[15], char n4[15], char n5[15], char n6[15],
	char n7[15], char n8[15], char n9[15], char n10[15], int m1[], int m2[], int m3[],int m4[],
	int m5[], int m6[], int m7[], int m8[], int m9[], int m10[], int average_f[], char grades_f[], float class_avg_f, int size_f);

int main()
{
	// Declaring Arrays and variables
	// Constant Variable for Number of students
	const int size = 10;

	// Char Array for name and grades of srudents
	char na1[15], na2[15], na3[15], na4[15], na5[15], na6[15], na7[15], na8[15], na9[15], na10[15];
	char grades[10];

	// int Array for marks of 5 subjects of 10 students
	int marks1[5], marks2[5],marks3[5], marks4[5], marks5[5], marks6[5], marks7[5], marks8[5], marks9[5], marks10[5], average_marks[10];
	float class_avg;

	// Calling read_file function to transfer or read the data from file to each name and marks array
	read_file(na1, na2, na3, na4, na5, na6, na7, na8, na9, na10, marks1,
		marks2, marks3, marks4, marks5, marks6, marks7, marks8, marks9, marks10, size);

	// Calling calculateAverage function to calculate the average of each student and whole class
	calculateAverage(marks1,marks2, marks3, marks4, marks5, marks6, marks7, marks8, 
		marks9, marks10, average_marks, class_avg, size);

	// Loop which will use calculateAverage function to assign the grade to each student.
	for (int a = 0; a < size; a++) {
		grades[a] = calculateGrade(average_marks[a], size);
	}

	// Calling write_file function to write all the final data on Result.txt file
	write_file(na1, na2, na3, na4, na5, na6, na7, na8, na9, na10, marks1, marks2, marks3, 
		marks4, marks5, marks6, marks7, marks8,marks9, marks10, average_marks, grades, class_avg, size);

	return 0;
}


// This function will read the names and marks of students
void read_file(char n1[15], char n2[15], char n3[15], char n4[15], char n5[15], char n6[15],
	char n7[15], char n8[15], char n9[15], char n10[15], int m1[], int m2[], int m3[], int m4[],
	int m5[], int m6[], int m7[], int m8[], int m9[], int m10[], int size_f) {

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

		// Loop to read and initialize the array of marks and name array
		
		for (int a = 0; a < size_f; a++) {
			if (a == 0) {
				file >> n1;
				for (int b = 0; b < 5; b++) {
					file >> m1[b];
				}
			}
			else if (a == 1) {
				file >> n2;
				for (int b = 0; b < 5; b++) {
					file >> m2[b];
				}
			}
			else if (a == 2) {
				file >> n3;
				for (int b = 0; b < 5; b++) {
					file >> m3[b];
				}
			}
			else if (a == 3) {
				file >> n4;
				for (int b = 0; b < 5; b++) {
					file >> m4[b];
				}
			}
			else if (a == 4) {
				file >> n5;
				for (int b = 0; b < 5; b++) {
					file >> m5[b];
				}
			}
			else if (a == 5) {
				file >> n6;
				for (int b = 0; b < 5; b++) {
					file >> m6[b];
				}
			}
			else if (a == 6) {
				file >> n7;
				for (int b = 0; b < 5; b++) {
					file >> m7[b];
				}
			}
			else if (a == 7) {
				file >> n8;
				for (int b = 0; b < 5; b++) {
					file >> m8[b];
				}
			}
			else if (a == 8) {
				file >> n9;
				for (int b = 0; b < 5; b++) {
					file >> m9[b];
				}
			}
			else if (a == 9) {
				file >> n10;
				for (int b = 0; b < 5; b++) {
					file >> m10[b];
				}
			}
		}
		file.close();
	}
}

// Average Calculating Function
// It will take array of marks and average as parameters
// After calculating average assign the value to average array and also to the variable of class_avg
void calculateAverage(int m1[], int m2[], int m3[], int m4[], int m5[], int m6[], int m7[],
	int m8[], int m9[], int m10[], int average_f[], float& class_avg_f, int size_f) {
	class_avg_f = 0;
	for (int a = 0; a < size_f; a++) {
		int total = 0;
		if (a == 0) {
			for (int b = 0; b < 5; b++) {
				total = total + m1[b];
			}
		}
		if (a == 1) {
			for (int b = 0; b < 5; b++) {
				total = total + m2[b];
			}
		}
		if (a == 2) {
			for (int b = 0; b < 5; b++) {
				total = total + m3[b];
			}
		}
		if (a == 3) {
			for (int b = 0; b < 5; b++) {
				total = total + m4[b];
			}
		}
		if (a == 4) {
			for (int b = 0; b < 5; b++) {
				total = total + m5[b];
			}
		}
		if (a == 5) {
			for (int b = 0; b < 5; b++) {
				total = total + m6[b];
			}
		}
		if (a == 6) {
			for (int b = 0; b < 5; b++) {
				total = total + m7[b];
			}
		}
		if (a == 7) {
			for (int b = 0; b < 5; b++) {
				total = total + m8[b];
			}
		}
		if (a == 8) {
			for (int b = 0; b < 5; b++) {
				total = total + m9[b];
			}
		}
		if (a == 9) {
			for (int b = 0; b < 5; b++) {
				total = total + m10[b];
			}
		}
		// Finding Average of each student
		average_f[a] = total / 5;
		class_avg_f += average_f[a];
	}

	// Taking Average of the sum of average of each student for class average
	class_avg_f = class_avg_f / size_f;
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
void write_file(char n1[15], char n2[15], char n3[15], char n4[15], char n5[15], char n6[15],
	char n7[15], char n8[15], char n9[15], char n10[15], int m1[], int m2[], int m3[], int m4[],
	int m5[], int m6[], int m7[], int m8[], int m9[], int m10[], int average_f[], char grades_f[], float class_avg_f, int size_f) {

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

			if (a == 0) {
				file << n1 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m1[b];
				}
			}
			else if (a == 1) {
				file << n2 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m2[b];
				}
			}
			else if (a == 2) {
				file << n3 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m3[b];
				}
			}
			else if (a == 3) {
				file << n4 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m4[b];
				}
			}
			else if (a == 4) {
				file << n5 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m5[b];
				}
			}
			else if (a == 5) {
				file << n6 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m6[b];
				}
			}
			else if (a == 6) {
				file << n7 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m7[b];
				}
			}
			else if (a == 7) {
				file << n8 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m8[b];
				}
			}
			else if (a == 8) {
				file << n9 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m9[b];
				}
			}
			else if (a == 9) {
				file << n10 << "\t";
				for (int b = 0; b < 5; b++) {
					file << "\t " << m10[b];
				}
			}
			file << "\t  " << average_f[a] << "\t   " << grades_f[a] << endl;
		}
		file << "Class Average = " << class_avg_f << endl;
		file.close();
	}
}

