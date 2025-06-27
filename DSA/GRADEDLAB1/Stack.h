#pragma once
#include<iostream>
using namespace std;

template<class T>
class Stack {
	T* arr;
	int maxSize;
	int currentSize;
public:
	
	Stack();

	// Returns whether the Stack is empty or not
	bool empty();

	// Returns whether the Stack is full or not
	bool full();

	// Returns the current size of the Stack
	int size();
	
	// Returns the last element of the Stack
	T top();
	
	// Adds the element of type Type at the top of the stac
	void push(T);

	// Deletes the top most element of the stack and returns it
	T pop();
	
	~Stack();

private:
	void regrow();
};

template <class T>
Stack<T>::Stack() {
	this->maxSize = 1;
	arr = new T[maxSize];
	currentSize = 0;
}

template <class T>
void Stack<T>::regrow() {
	T* newArray = new T[++maxSize];
	for (int a = 0; a < currentSize; a++) {
		newArray[a] = arr[a];
	}

	delete[] arr;
	arr = newArray;
}

// Returns whether the Stack is empty or not
template <class T>
bool Stack<T>::empty() {
	return currentSize == 0;
}

// Returns whether the Stack is full or not
template <class T>
bool Stack<T>::full() {
	return currentSize == maxSize;
}

// Returns the current size of the Stack
template <class T>
int Stack<T>::size() {
	return currentSize;
}

// Returns the last element of the Stack
template <class T>
T Stack<T>::top() {
	if (!empty()) {
		return arr[currentSize - 1];
	}
	else {
		cout << "Stack is Empty!..." << endl;
		return NULL;
	}
}

template<class T>
void Stack<T>::push(T value) {
	if (currentSize < maxSize) {
		arr[currentSize++] = value;
	}
	else {
		regrow();
		arr[Stack<T>::currentSize++] = value;
	}
}

template<class T>
T Stack<T>::pop() {
	if (!empty()) {
		Stack<T>::currentSize--;
		return Stack<T>::arr[Stack<T>::currentSize];
	}
	else {
		cout << "Stack is Empty" << endl;
		return NULL;
	}
}

template <class T>
Stack<T>::~Stack() {
	delete[] arr;
}