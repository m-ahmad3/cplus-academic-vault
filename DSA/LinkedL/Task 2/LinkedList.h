#pragma once
#include <iostream>
using namespace std;

// Template class for a Node in the linked list
template<class T>
class Node {
public:
    T data; // Data stored in the node
    Node* next; // Pointer to the next node in the list
    Node(T d = 0) {
        data = d;
        next = nullptr;
    }
};

// Template class for the Linked List
template<class T>
class LinkedList {
public:
    Node<T>* head; // Pointer to the head of the list
    // Constructor initializes an empty list
    LinkedList() : head(nullptr) {}

    // Destructor to clean up memory
    ~LinkedList() {
        Node<T>* current = head;
        while (current != nullptr) {
            Node<T>* next = current->next;
            delete current;
            current = next;
        }
    }

    bool empty() {
        return head == nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertAtFront(T val) {
        Node<T>* nn = new Node<T>(val);
        nn->next = head;
        head = nn;
    }

    // Function to insert a node at the end of the list
    void insertAtEnd(T val) {
        Node<T>* nn = new Node<T>(val);
        if (empty()) { // If list is empty, new node becomes the head
            head = nn;
            return;
        }
        Node<T>* c = head;
        while (c->next != nullptr) {
            c = c->next;
        }
        c->next = nn;
    }

    T front() {
        if (empty()) {
            cout << "Linked List is Empty!" << endl;
            return NULL;
        }
        return head->data;
    }


    T back() {
        if (empty()) {
            cout << "Linked List is Empty!" << endl;
            return NULL;
        }
        
        Node<T>* c = head;
        while (c->next != nullptr) {
            c = c->next;
        }
        return c->data;
    }

    int size() {
        int size = 0;

        Node<T>* c = head;
        while (c != nullptr) {
            size++;
            c = c->next;
        }
        return size;
    }

    void removeFromFront() {
        if (empty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }

        Node<T>* t = head;
        head = head->next;
        delete t;
    }
    void removeFromEnd() {
        if (empty()) {
            cout << "Linked List is Empty!" << endl;
            return;
        }

        if (head->next == nullptr) { // If there's only one element
            delete head;
            head = nullptr;
            return;
        }

        Node<T>* c = head;
        while (c->next->next != nullptr) {
            c = c->next;
        }
        delete c->next;
        c->next = nullptr;
    }

    // Function to display the contents of the list
    void display() {
        if (empty()) { // Check if the list is empty
            cout << "LinkedList is Empty!..." << endl;
            return;
        }

        Node<T>* current = head;
        while (current != nullptr) { // Traverse and print each node's data
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl << endl;
    }

};
