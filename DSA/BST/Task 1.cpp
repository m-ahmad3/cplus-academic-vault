#include<iostream>
using namespace std;

class Node {
public:
	Node* left, * right;
	int data;
	Node(int d=0):data(d),left(nullptr),right(nullptr){}
};

Node* insert(Node* root, int d) {

	if (root == nullptr) {
		return new Node(d);
	}

	if (root->data == d) {
		return root;
	}

	if (d < root->data) {
		root->left = insert(root->left, d);
	}
	else {
		root->right = insert(root->right, d);
	}

	return root;
}

bool searchBst(Node* root, int d) {

	if (root == nullptr) {
		return false;
	}

	if (root->data == d) {
		return true;
	}

	if (d < root->data) {
		return searchBst(root->left, d);
	}
	else {
		return searchBst(root->right, d);
	}

}

void preOrder(Node* root) {
	if (root == nullptr) {
		return;
	}

	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

int main() {

	Node* root = nullptr;
	root = insert(root, 60);
	root = insert(root, 50);
	root = insert(root, 70);
	root = insert(root, 30);
	root = insert(root, 53);
	root = insert(root, 80);
	root = insert(root, 35);
	root = insert(root, 57);
	root = insert(root, 75);
	root = insert(root, 32);
	root = insert(root, 40);
	root = insert(root, 77);
	root = insert(root, 48);
	root = insert(root, 45);

	cout << "Elements in BST(PreOrder): ";
	preOrder(root);
	cout<< endl << endl;
	
	cout << "Result of Searching 75: " << searchBst(root, 75) << endl;
	cout << "Result of Searching 40: " << searchBst(root, 40) << endl;
	cout << "Result of Searching 1001: " << searchBst(root, 1001) << endl;

	return 0;
}