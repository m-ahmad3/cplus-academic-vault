#include "Student.h"

Student::Student(const char* reg, double cgpa) {
	if (reg != nullptr) {
		int size = 0;
		while (reg[size] != '\0') {
			size++;
		}
		this->regNo = new char[size + 1];
		for (int a = 0; a < size; a++) {
			this->regNo[a] = reg[a];
		}
		this->regNo[size] = '\0';
	}
	else {
		this->regNo = nullptr;
	}
	
	this->CGPA = cgpa;
}

Student& Student::operator=(const Student& obj) {
	if (this == &obj) {
		return *this;
	}

	if (this->regNo != nullptr) {
		delete[] this->regNo;
	}

	if (obj.regNo != nullptr) {
		int size = 0;
		while (obj.regNo[size] != '\0') {
			size++;
		}
		this->regNo = new char[size + 1];
		for (int a = 0; a < size; a++) {
			this->regNo[a] = obj.regNo[a];
		}
		this->regNo[size] = '\0';
	}
	else {
		this->regNo = nullptr;
	}

	this->CGPA = obj.CGPA;

	return *this;
}

void Student::selectionSort(Student arr[], int size) {
	for (int a = 0; a < size - 1; a++) {
		int index = a;
		for (int b = a + 1; b < size; b++) {
			if (arr[b].CGPA < arr[index].CGPA) {
				index = b;
			}
		}

		if (index != a) {
			Student temp;
			temp = arr[a];
			arr[a] = arr[index];
			arr[index] = temp;
		}
	}
}

int Student::linearSearch(const Student arr[], int size, double cgpa) {
	for (int a = 0; a < size; a++) {
		if (cgpa == arr[a].CGPA) {
			return a;
		}
	}

	return -1;
}

int Student::BinarySearch(const Student arr[], int size, double cgpa) {
	int high = size - 1, low = 0, mid;

	while (low <= high) {
		mid = (high + low) / 2;
		if (cgpa == arr[mid].CGPA) {
			return mid;
		}
		else if (cgpa > arr[mid].CGPA) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}

	return -1;
}

ostream& operator<<(ostream& out, const Student& obj) {
	if (obj.regNo != nullptr) {
		out << obj.regNo;
	}
	out << " " << obj.CGPA << endl;
	return out;
}

void Student::display() const {
	if (regNo != nullptr) {
		cout << regNo;
	}
	cout << " " << CGPA << endl;
}

Student::~Student() {
	if (regNo != nullptr) {
		delete[] regNo;
	}
}