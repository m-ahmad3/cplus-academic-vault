#pragma once
#include<iostream>
using namespace std;
const int maxSize = 100;
template<class T>
class queue {
private:
	T arr[maxSize];
	int front;
	int rear;
public:

	queue() {
		front = -1;
		rear = -1;
	}

	bool isfull() {

		if (front == 0 && rear == maxSize - 1) {
			cout << "QUEUE IS FULL!!" << endl;
			return true;
		}
		else {
			return false;
		}
	}
	bool isempty() {
		return rear == -1;
	}
	void enqueue(T data) {

		if (isfull() != true) {
			front = 0;
			rear++;
			arr[rear] = data;

		}
	}
	T dequeue() {

		if (isempty() == true) {
			cout << "WE CANNOT DEQUEUE ELEMENTS QUEUE IS EMPTY!!" << endl;
		}

		T value = arr[front];

		if (front == rear) {
			front = -1;
			rear = -1;
		}
		else {
			front++;
		}

		return value;
	}

	void display() {
		if (isempty()) {
			cout << "QUEUE IS EMPTY!!" << endl;
			return;
		}
		for (int i = front; i <= rear; ++i) {
			cout << arr[i] << " ";
		}
	}

};