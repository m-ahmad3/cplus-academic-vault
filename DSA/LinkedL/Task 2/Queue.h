#pragma once
#include "LinkedList.h"

// Queue class using LinkedList
template<class T>
class Queue {

    LinkedList<T> list; // Using LinkedList to implement Queue
public:
    // Enqueue an element into the queue
    void enqueue(T val) {
        list.insertAtEnd(val); // Insert at the end
    }

    // Dequeue an element from the queue
    void dequeue() {
        list.removeFromFront(); // Remove from the front
    }

    // Peek at the front element of the queue
    T front() {
        return list.front(); // Get the front element
    }

    // Display queue elements
    void display() {
        list.display();
    }
};