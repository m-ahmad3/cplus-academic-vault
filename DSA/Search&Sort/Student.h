#pragma once
#include<iostream>
using namespace std;

class Student
{
	char* regNo;
	double CGPA;
public:
	Student(const char* = nullptr, double = 0);
	Student& operator=(const Student&);

	void selectionSort(Student[], int);
	int linearSearch(const Student[], int, double);
	int BinarySearch(const Student[], int, double);

    friend ostream& operator<<(ostream& out, const Student&);
	
	void display() const;

	~Student();
};

