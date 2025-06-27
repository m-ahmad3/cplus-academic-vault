#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* prev;
    node* next;
    node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};
class circular_doubly_linklist {
private:
    node* first;
public:
    circular_doubly_linklist() {
        first = nullptr;
    }

    void insert(int value) {
        node* newnode = new node(value);
        if (first == nullptr) {
            first = newnode;
            first->next = first;
            first->prev = first;
        }
        else {
            node* last = first->prev;
            last->next = newnode;
            newnode->prev = last;
            newnode->next = first;
            first->prev = newnode;
        }
    }

    void displaylist() {
        if (first == nullptr) {
            cout << "LIST IS EMPTY!!" << endl;
            return;
        }
        node* curr = first;
        do {
            cout << curr->data << "<->";
            curr = curr->next;
        } while (curr != first);
        cout << endl;
    }

    void displaylistBackward() {
        if (first == nullptr) {
            cout << "LIST IS EMPTY!!" << endl;
            return;
        }
        node* curr = first->prev;
        do {
            cout << curr->data << "<->";
            curr = curr->prev;
        } while (curr != first->prev);
        cout << endl;
    }
};

int main() {
    circular_doubly_linklist d1;
    d1.insert(1);
    d1.insert(2);
    d1.insert(3);
    d1.displaylist();
    d1.displaylistBackward();
    return 0;
}
