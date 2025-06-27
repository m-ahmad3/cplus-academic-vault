#include<iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = nullptr;
	}
	~node() {
	}
};

class linklist {
private:
	node* first;
public:
	linklist() {
		first = nullptr;

	}
	void insert(int value) {
		node* temp = new node(value);
		if (first == nullptr) {
			first = temp;
		}
		else {
			node* curr = first;
			while (curr->next != nullptr) {
				curr = curr->next;
			}
			curr->next = temp;
		}
	}
	void displaylist() {
		node* curr = first;
		int i = 1;
		while (curr != nullptr) {
			cout << "NODE::" << i << "=" << curr->data << " " << endl;
			curr = curr->next;
			i++;
		}
		cout << endl;
	}

	void deleteNode(int value) {
		if (first == nullptr) {
			return;
		}
		if (first->data == value) {
			node* temp = first;
			first = first->next;
			delete temp;
			return;
		}
		node* curr = first;
		while (curr->next != nullptr && curr->next->data != value) {
			curr = curr->next;
		}
		if (curr->next == nullptr) {
			cout << "VALUE NOT FOUND IN LIST!!" << endl;
			return;
		}
		node* temp = curr->next;
		curr->next = curr->next->next;
		delete temp;
	}
	void insertAfter(int value, int search) {
		node* temp = new node(value);
		node* curr = first;
		while (curr != nullptr) {
			if (curr->data == search) {
				temp->next = curr->next;
				curr->next = temp;
				return;
			}
			curr = curr->next;  
		}
		cout << "VALUE NOT FOUND!!" << endl;
	}


	void insertBefore(int value, int search){
		node* temp = new node(value);
		node* curr = first;
		node* prev = nullptr;
		while (curr != nullptr) {
			if (curr->data == search) {
				if (prev == nullptr) {
					temp->next = first;
					first = temp;
				}
				else {
					temp->next = curr;
					prev->next = temp;
				}
				return;
			}
			prev = curr;
			curr = curr->next;
		}
		cout << "VALUE NOT FOUND!!" << endl;
	}

	~linklist() {
	
	}

};
int main() {

	linklist l1;
	cout << "LINK LIST::" << endl;
	for (int i = 1; i <=5; i++) {
		l1.insert(i);
	}
    l1.displaylist();
	cout << "LINK LIST AFTER DELETING A SINGLE NODE::" << endl << endl;;
	l1.insertAfter(10,5);
	l1.displaylist();
	l1.insertBefore(11,1);
	l1.insertBefore(12,11);
	l1.displaylist();
	return 0;
}