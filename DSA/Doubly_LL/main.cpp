//#include<iostream>
//using namespace std;
//
//class node {
//public:
//	int data;
//	node* prev;
//	node* next;
//
//	node(int value) {
//		data = value;
//		prev = nullptr;
//		next = nullptr;
//	}
//};
//
//class doubly_linklist {
//private:
//	node* first;
//public:
//	doubly_linklist() {
//		first = nullptr;
//	}
//	void insert(int value) {
//		node* newnode = new node(value);
//		if (first == nullptr) {
//			first = newnode;
//		}
//		else {
//			node* curr = first;
//			while (curr->next != nullptr) {
//				curr = curr->next;
//			}
//			curr->next = newnode;
//			newnode->prev = curr;
//		}
//	}
//
//	void displaylist() {
//		node* curr = first;
//		int i = 1;
//		while (curr != nullptr) {
//			cout << "NODE::" << i << "=" << curr->data << " " << endl;
//			curr = curr->next;
//			i++;
//		}
//		cout << endl;
//	}
//	void displaylistBackward() {
//		node* curr = first;
//		while (curr != nullptr && curr->next != nullptr) {
//			curr = curr->next;
//		}
//		int i = 1;
//		while (curr != nullptr) {
//			cout << "NODE::" << i << "=" << curr->data << " " << endl;
//			curr = curr->prev;
//			i++;
//		}
//		cout << endl;
//	}
//};
//int main() {
//
//	doubly_linklist d1;
//	d1.insert(1);
//	d1.insert(3);
//	d1.insert(2);
//	d1.displaylist();
//	d1.displaylistBackward();
//	return 0;
//}
