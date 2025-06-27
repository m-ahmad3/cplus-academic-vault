#pragma once
#include"LinkedList.h"

// Stack class using LinkedList
template<class T>
class Stack {

    LinkedList<T> list; // Using LinkedList to implement Stack
public:
    // Push an element onto the stack
    void push(T val) {
        list.insertAtFront(val); // Insert at the front
    }

    // Pop an element from the stack
    void pop() {
        list.removeFromFront(); // Remove from the front
    }

    // Peek at the top element of the stack
    T peek() {
        return list.front(); // Get the front element
    }

    // Display stack elements
    void display() {
        list.display();
    }
};



