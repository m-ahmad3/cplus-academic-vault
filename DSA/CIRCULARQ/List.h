#pragma once
#include <iostream>
using namespace std;

template <class T>
class List {
protected:
    T* arr;
    int maxSize, currentSize;
public:
    List();
    List(const List&);
    virtual void addElement(T) = 0;
    virtual T removeElement() = 0;
    void regrow();
    virtual ~List();
};

template<class T>
List<T>::List() : maxSize(1), currentSize(0) {
    arr = new T[maxSize];
}

template<class T>
List<T>::List(const List& obj) : currentSize(obj.currentSize), maxSize(obj.maxSize) {
    arr = new T[maxSize];
    for (int a = 0; a < currentSize; a++) {
        arr[a] = obj.arr[a];
    }
}

template<class T>
void List<T>::regrow() {
    maxSize *= 2;  // Double the size to reduce frequent resizing
    T* newArr = new T[maxSize];
    for (int a = 0; a < currentSize; a++) {
        newArr[a] = arr[a];
    }
    delete[] arr;
    arr = newArr;
}

template<class T>
List<T>::~List() {
    delete[] arr;
}