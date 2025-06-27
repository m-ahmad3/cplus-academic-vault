#include<iostream>
#include"stack.h"
using namespace std;
template<class T>
bool stack<T>::isfull() {
    return top_stack == maxsize;
}
template<class T>
bool stack<T>::isempty() {
    return top_stack == -1;
}

template<class T>
stack<T>::stack() {
    top_stack = -1;
}

template<class T>
void stack<T>::push(T data) {
    if (isfull()) {
        cout << "STACK IS FULL!!" << endl;
    }
    else {
        array[++top_stack] = data;
    }
}

template<class T>
void stack<T>::pop() {
    if (isempty()) {
        cout << "STACK IS EMPTY!!" << endl;
    }
    else {
        top_stack--;
    }
}
template<class T>
T stack<T>::top() {
    return array[top_stack];
}
template<class T>
void stack<T>::print() {
    for (int i = 0; i <= top_stack; i++) {
        cout << array[i];
    }
}
template<class T>
stack<T>::~stack() {
}
