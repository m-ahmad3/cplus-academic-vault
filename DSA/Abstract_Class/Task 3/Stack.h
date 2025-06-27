#pragma once
#include"List.h"

template<class T>
class Stack : public List<T> 
{
public:
	
	Stack();
	Stack(const Stack&);

	void addElement(T);
	
	T removeElement();

	T operator[](int);

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
Stack<T>::Stack() :List<T>(1) {}

template <class T>
Stack<T>::Stack(const Stack& obj) : List<T>(obj) {}

template<class T>
T Stack<T>::operator[](int index) {
	if (index >= 0 && index < List<T>::currentSize) {
		return List<T>::arr[index];
	}
	else {
		return NULL;
	}
}

template <class T>
void Stack<T>::regrow() {
	T* newArray = new T[++List<T>::maxSize];
	for (int a = 0; a < List<T>::currentSize; a++) {
		newArray[a] = List<T>::arr[a];
	}

	delete[] List<T>::arr;
	List<T>::arr = newArray;
}

template <class T>
void Stack<T>::addElement(T value) {
	if (Stack<T>::currentSize < Stack<T>::maxSize) {
		Stack<T>::arr[Stack<T>::currentSize++] = value;
	}
	else {
		regrow();
		Stack<T>::arr[Stack<T>::currentSize++] = value;
	}
}

template <class T>
T Stack<T>::removeElement() {
	if (!empty()) {
		Stack<T>::currentSize--;
		return Stack<T>::arr[Stack<T>::currentSize];
	}
	else {
		cout << "Stack is Empty" << endl;
		return NULL;
	}
}

// Returns whether the Stack is empty or not
template <class T>
bool Stack<T>::empty() {
	return List<T>::currentSize == 0;
}

// Returns whether the Stack is full or not
template <class T>
bool Stack<T>::full() {
	return Stack<T>::currentSize == Stack<T>::maxSize;
}

// Returns the current size of the Stack
template <class T>
int Stack<T>::size() {
	return Stack<T>::currentSize;
}

// Returns the last element of the Stack
template <class T>
T Stack<T>::top() {
	if (!empty()) {
		return Stack<T>::arr[Stack<T>::currentSize - 1];
	}
	else {
		cout << "Stack is Empty!..." << endl;
		return -1;
	}
}

template<class T>
void Stack<T>::push(T value) {
	addElement(value);
}

template<class T>
T Stack<T>::pop() {
	return removeElement();
}

template <class T>
Stack<T>::~Stack() {

}