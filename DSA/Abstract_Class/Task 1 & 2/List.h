#pragma once
#include<iostream>
using namespace std;

template <class T>
class List
{
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	List(int = 0);
	List(const List&);
	~List();

	// Add the element at the last position of the List
	virtual void addElement(T) = 0;

	// Remove the element from the last position of the List
	virtual T removeElement() = 0;
};

template<class T>
List<T>::List(int max) {
	this->maxSize = max;
	arr = new T[maxSize];
	currentSize = 0;
}

template<class T>
List<T>::List(const List& obj) {
	this->maxSize = obj.maxSize;
	this->currentSize = obj.currentSize;

	this->arr = new T[maxSize];
	
	for (int a = 0; a < currentSize; a++) {
		this->arr[a] = obj.arr[a];
	}

}

template<class T>
List<T>::~List() {
	if (arr != NULL) {
		delete[] arr;
	}
}