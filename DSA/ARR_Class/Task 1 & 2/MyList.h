#pragma once
#include"List.h"

template<class T>
class MyList : public List<T> 
{
public:
	
	MyList(int);
	MyList(const MyList&);
	MyList& operator=(const MyList&);
	T operator[](int);

	void addElement(T);
	T removeElement();

	// Returns whether the MyList is empty or not
	bool empty();

	// Returns whether the MyList is full or not
	bool full();

	// Returns the current size of the MyList
	int size();
	
	// Returns the last element of the MyList
	T last();

	~MyList();
};

template <class T>
MyList<T>::MyList(int max) :List<T>(max) {}

template <class T>
MyList<T>::MyList(const MyList& obj) : List<T>(obj) {}

template <class T>
MyList<T>& MyList<T>::operator=(const MyList& obj) {
	MyList<T>::maxSize= obj.maxSize;
	if (MyList<T>::arr != NULL) {
		delete[] MyList<T>::arr;
	}
	MyList<T>::arr = new T[MyList<T>::maxSize];
	MyList<T>::currentSize = obj.currentSize;

	for (int a = 0; a < obj.currentSize; a++) {
		MyList<T>::arr[a] = obj.arr[a];
	}
}

template <class T>
T MyList<T>::operator[](int index) {
	if (index >= 0 && index < MyList<T>::currentSize) {
		return MyList<T>::arr[index];
	}
	else {
		return NULL;
	}
}

template <class T>
void MyList<T>::addElement(T value) {
	if (MyList<T>::currentSize < MyList<T>::maxSize) {
		MyList<T>::arr[MyList<T>::currentSize++] = value;
	}
	else {
		cout << "The List is Full" << endl;
	}
}

template <class T>
T MyList<T>::removeElement() {
	if (MyList<T>::currentSize > 0) {
		MyList<T>::currentSize--;
		return MyList<T>::arr[MyList<T>::currentSize];
	}
	else {
		cout << "Array is Empty" << endl;
		return -1;
	}
}

// Returns whether the MyList is empty or not
template <class T>
bool MyList<T>::empty() {
	if (MyList<T>::currentSize == 0) {
		return true;
	}
	else {
		return false;
	}
}

// Returns whether the MyList is full or not
template <class T>
bool MyList<T>::full() {
	if (MyList<T>::currentSize == MyList<T>::maxSize) {
		return true;
	}
	else {
		return false;
	}
}

// Returns the current size of the MyList
template <class T>
int MyList<T>::size() {
	return MyList<T>::currentSize;
}

// Returns the last element of the MyList
template <class T>
T MyList<T>::last() {
	if (MyList<T>::currentSize > 0) {
		return MyList<T>::arr[MyList<T>::currentSize - 1];
	}
	else {
		cout << "Array is Empty!..." << endl;
		return -1;
	}
}

template <class T>
MyList<T>::~MyList() {

}