/*
#include<iostream>
using namespace std;

class Cat {
	char* name;
	double weight;
	bool i;

public:
	//Setters
	//Setter function for setting the name by deep copy
	void setName(char* n) {
		int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}

		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = n[a];
		}
		name[size] = '\0';
	}

	//Setter function for setting the weight value
	void setWeight(double n) {
		weight = n;
	}

	//Getters
	//Getter function for returning the name
	char* getName() {
		int size = 0;
		char* n;
		for (int a = 0; name[a] != '\0'; a++) {
			size++;
		}

		n = new char[size + 1];
		for (int a = 0; a < size; a++) {
			n[a] = name[a];
		}
		n[size] = '\0';

		return n;
	}

	//Getter function for returning the weight value
	double getWeight() {
		return weight;
	}

	void display() {
		cout << "Name of Cat: " << name << endl;
		cout << "Weight of Cat: " << weight << " Kg" << endl;
	}

	Cat(char* n, double w = 10) {
		weight = w;
		i = true;
			int size = 0;
			for (int a = 0; n[a] != '\0'; a++) {
				size++;
			}

			name = new char[size + 1];
			for (int a = 0; a < size; a++) {
				name[a] = n[a];
			}
			name[size] = '\0';
		
		cout << "This is the Constructor of Class Cat" << endl;
	}
	Cat(const Cat& obj) {
		weight = obj.weight;
		i = false;
	
		int size = 0;
		for (int a = 0; obj.name[a] != '\0'; a++) {
			size++;
		}

		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = obj.name[a];
		}
		name[size] = '\0';

		cout << "This is the Copy Constructor of Class" << endl;
	}
	
		~Cat() {
			// It will delete the char pointer of name
			delete[] name;
			if (i == true) {
				cout << "This is the first Destructor of Class Cat" << endl;
			}
			else if (i == false) {
				cout << "This is the second Destructor of Class Cat" << endl;
			}
		}


};

int main()
{
	char name[10] = "Mano";
	Cat c1(name);
	c1.display();

	Cat c2 = c1;
	c2.display();

	
	return 0;
}
*/


// Task 2:
/*
#include<iostream>
using namespace std;

class Student {
	char* name;
	char* regNumber;
	double CGPA;

public:
	//Setters
	void setName(char* n) {
		int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}

		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = n[a];
		}
		name[size] = '\0';
	}

	void setRegNumber(char* n) {
		int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}

		regNumber = new char[size + 1];
		for (int a = 0; a < size; a++) {
			regNumber[a] = n[a];
		}
		regNumber[size] = '\0';
	}

	void setCGPA(double n) {
		CGPA = n;
	}

	//Getter
	char* getName() {
		int size = 0;
		char* n;
		for (int a = 0; name[a] != '\0'; a++) {
			size++;
		}

		n = new char[size + 1];
		for (int a = 0; a < size; a++) {
			n[a] = name[a];
		}
		n[size] = '\0';

		return n;
	}

	char* getRegNumber() {
		int size = 0;
		char* n;
		for (int a = 0; regNumber[a] != '\0'; a++) {
			size++;
		}

		n = new char[size + 1];
		for (int a = 0; a < size; a++) {
			n[a] = regNumber[a];
		}
		n[size] = '\0';

		return n;
	}

	double getCGPA() {
		return CGPA;
	}

	void display() {
		cout << "---Student Details---" << endl;
		cout << "Name: " << name << endl;
		cout << "Reg. Number: " << regNumber << endl;
		cout << "CGPA: " << CGPA << endl;
	}

	// Parameterized constructor
	Student(char* n, char* reg, double cgpa) {
		cout << "This is the Constructor" << endl;
		CGPA = cgpa;

		int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}

		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = n[a];
		}
		name[size] = '\0';

		size = 0;
		for (int a = 0; reg[a] != '\0'; a++) {
			size++;
		}

		regNumber = new char[size + 1];
		for (int a = 0; a < size; a++) {
			regNumber[a] = reg[a];
		}
		regNumber[size] = '\0';

	}

	// Copy Constructor
	Student(const Student& obj) {
		cout << "This is the Copy Constructor" << endl;
		// Copy CGPA
		CGPA = obj.CGPA;

		// Copy Name
		int size = 0;
		for (int a = 0; obj.name[a] != '\0'; a++) {
			size++;
		}

		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = obj.name[a];
		}
		name[size] = '\0';

		//Copy Registeration Number
		size = 0;
		for (int a = 0; obj.regNumber[a] != '\0'; a++) {
			size++;
		}

		regNumber = new char[size + 1];
		for (int a = 0; a < size; a++) {
			regNumber[a] = obj.regNumber[a];
		}
		regNumber[size] = '\0';
	}

	~Student() {
		delete[] name;
		delete[] regNumber;
		cout << "This the Destructor" << endl;
	}
};

int main()
{
	char Name[30] = "Muhammad Ahmad";
	char Reg[15] = "L1F22BSCS0634";	
	double Cgpa = 3.79;

	Student s1(Name, Reg, Cgpa);
	s1.display();

	Student s2 = s1;
	return 0;
}
*/

// Task 3
#include<iostream>
using namespace std;

class Employee {
	char* name;
	char* employeeCode;
	
public:
	// Setters
	void setName(char* n) {
		int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}

		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = n[a];
		}
		name[size] = '\0';
	}

	void setEmployeeCode(char* n) {
		int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}

		employeeCode = new char[size + 1];
		for (int a = 0; a < size; a++) {
			employeeCode[a] = n[a];
		}
		employeeCode[size] = '\0';
	}


	// Getters
	char* getName() {
		int size = 0;
		char* n;
		for (int a = 0; name[a] != '\0'; a++) {
			size++;
		}

		n = new char[size + 1];
		for (int a = 0; a < size; a++) {
			n[a] = name[a];
		}
		n[size] = '\0';

		return n;
	}

	char* getEmployeeCode() {
		int size = 0;
		char* n;
		for (int a = 0; employeeCode[a] != '\0'; a++) {
			size++;
		}

		n = new char[size + 1];
		for (int a = 0; a < size; a++) {
			n[a] = employeeCode[a];
		}
		n[size] = '\0';

		return n;
	}

	void display() {
		cout << "---Employee Details---" << endl;
			cout << "Name: " << name << endl;
			cout << "Employee Code: " << employeeCode << endl;
	}

	Employee(char* n, char* code) {
		cout << "This is the Constructor" << endl;

		int size = 0;
		for (int a = 0; n[a] != '\0'; a++) {
			size++;
		}

		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = n[a];
		}
		name[size] = '\0';

		size = 0;
		for (int a = 0; code[a] != '\0'; a++) {
			size++;
		}

		employeeCode = new char[size + 1];
		for (int a = 0; a < size; a++) {
			employeeCode[a] = code[a];
		}
		employeeCode[size] = '\0';
	}

	Employee(const Employee& obj) {
		cout << "This is the Copy Constructor" << endl;

		int size = 0;
		for (int a = 0; obj.name[a] != '\0'; a++) {
			size++;
		}

		name = new char[size + 1];
		for (int a = 0; a < size; a++) {
			name[a] = obj.name[a];
		}
		name[size] = '\0';

		size = 0;
		for (int a = 0; obj.employeeCode[a] != '\0'; a++) {
			size++;
		}

		employeeCode = new char[size + 1];
		for (int a = 0; a < size; a++) {
			employeeCode[a] = obj.employeeCode[a];
		}
		employeeCode[size] = '\0';
	}

	~Employee() {
		delete[] name;
		delete[] employeeCode;
		cout << "This is the Destructor" << endl;
	}
};

int main()
{
	char Name[25] = "Muhammad Ahmad";
	char Code[10] = "0634";
	Employee e1(Name, Code);
	e1.display();
	Employee e2 = e1;

	return 0;
}