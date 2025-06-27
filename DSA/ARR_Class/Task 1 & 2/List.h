#pragma once
#include<iostream>
using namespace std;

template <class T>
class List
{
protected:
	T* arr;
	int m;
	int c;
public:
	List(int = 0);
	List(const List&);
	~List();

	// Add the element at the last position of the List
	virtual void addElement(T) = 0;

	// Remove the element from the last position of the List
	virtual T removeElement() = 0;
};

